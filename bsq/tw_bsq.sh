#!/bin/sh

watch() {
	WORKING_PATH=$(pwd)
	chsum1=""

	RED="\033[0;31m"
	GREEN="\033[0;32m"
	YELLOW="\033[0;33m"
	RESET="\033[0m"


	while [[ true ]]
	do
		chsum2=$(find -L $WORKING_PATH -type f -name "*.[ch]" -exec md5 {} \;)
		if [[ $chsum1 != $chsum2 ]] ; then
			chsum1=$chsum2
			clear
			echo "$YELLOW TEST RUNNING AT [ $(date) ]...$RESET\n"

			echo "$YELLOW NORMINETTE -R CheckDefine$RESET\n"
			norminette -R CheckDefine

			echo "\n\n$YELLOW COMPILATION ET EXECUTION$RESET\n"

			make

			if [ -f ./bsq ] ; then

				echo "\n\n$YELLOW RUN STANDARD INPUT$RESET\n"
				./map.pl 30 30 3 | ./bsq

				echo "\n\n$YELLOW TESTS BROKEN MAPS$RESET\n"
				for i in {0..12}
				do
					result=$(./bsq "./maps/broken_$i")
					if [[ $result == "map error" ]] ; then
						echo "MAP BROKEN $i => $GREEN SUCCESS$RESET"
					else
						echo "MAP BROKEN $i => $RED FAIL $RESET"
						echo "awaited  : map error"
						echo "received : $result"
					fi
				done


				rm ./maps/map_*
				./map.pl 2 2 1 > ./maps/map_1
				./map.pl 1 1 1 > ./maps/map_2
				./map.pl 20 20 15 > ./maps/map_3
				./map.pl 30 30 20 > ./maps/map_4
				./map.pl 5 5 0 > ./maps/map_5

				echo "\n\n$YELLOW RUN TWO ARGS$RESET\n"
				./bsq ./maps/map_2 ./maps/map_3

			else
				echo "\n\n$YELLOW NO EXECUTABLE FOUND$RESET\n"
			fi

		fi
		sleep 1
	done
}

watch
