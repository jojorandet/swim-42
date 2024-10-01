#include <unistd.h>

int triple(int nombre) // la fonction triple renvoi un resultat de type int et elle recoit un nombe de tpe int: c'est son parametere
{
	int resultat;

	resultat = 3 * nombre;

	return resultat; // on retourne le resultat de la fonction triple 
}

// return se trouve toujours a la fin des calculs, return means the function ends here




int addition(int a, int b)
{
	return a + b; // consigne de renvoyer une valeur qui vaut a + b 
}


// comme ces fonctions affichent tout le temps le meme texte, et qu'elle ne recoit aucun parametre dsucceptible de modifier son comportement

// elle n'a pas de return car elle ne retourne rien 

void bonjour()
{
	printf("Bonjour")
}





