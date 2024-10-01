#include <unistd.h>
#include <stdio.h>

/*1. l'ordi va lire les instruction de ah==haut en bas comme d'hab
2. une fois la fin de la boucle, il repasse a la premiere
3. il recommence a lire les inst de haut en bas
il s'incrmeente si on lui dit de le faire 
etc etc 
une fois la conidtion fausse, il sort de la boucle vers le bas */

int main()
{
    int compteur;

    compteur = 0;
    while( compteur < 10)
    {
        printf("la variable vaut %d\n", compteur);
        compteur++;
    }
    return (0);
}


/* si la condition est tojours vraie, elle va continuer jusqu'a l'infinie, arreter la focntion avc CTRL C*/