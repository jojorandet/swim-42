#include <unistd.h>
#include <stdio.h>
#include <stdio.h>

/*on va declarer des variables, les ajouter entre elles, et ensuit enregistrer le resultat dans une autre variable

il faut els programmer, c'est a dire expliquer a l'ordinateur quoi faire car sinon il ne comprend pas*/

int modulo(int a, int b)
{
    return a%b; // ca revient au meme quefaire int total; total = a + b ; return total;
}

int main()
{
    int x;
    int y;
    int total;

    x = 5;
    y = 2;
    total = 0;

    total = modulo(x, y);
    printf("%d", total);

    return (0);
}

/*5/2 est 2 et 5%2 est 1  car 5 = 2 * 2 + 1
14%3 donne 2 car 3*3

le Modulo permet d'obtenir le reste d'une division


if I declare 
int nombre1:
int nombre2;
int resultat;

nombre1 = 1;
nombre2 = 2;
resultat = 0;

resultat = nombre1 + nombre2 somme des variables nombre 1 et nombre2 et stocke dans resultat



INCREMENTATION 
n = n + 1 s'ecrit aussi n++
on ajoute 1 a la valeur de n et on le range dans la variable n 
si n vallait 4, maintenant il vaut 5
n++ " ajouter 1 a la variable n "

nombre = nombre * 2 est la meme chose que nombre *= 2
si n = 3, il vaudra 6 apres cette opration 

*/
