#include <unistd.h>
#include <stdio.h>

int triple(int nombre) //6 on saute a la fonctoin appelee trilpe et on reccup un parametre qui nombre
{
    return 3 * nombre; //7 on fait des calculs et on renvoie le resultat 
}

int main()
{
    int a; //1
    int nombretriple; //2

    a = 4; //3
    nombretriple = 0; //4

    nombretriple = triple(a); //5

    printf("%d", nombretriple); //8 
    return (0); //9
}





/*
Il faut organiser les fonctions en petits bouts 

une fonction execute une action et renvoie un resultat

quand on appelle une fonction, il y a 3 etapes.
1. entree > on fait rentrer des informations dans la fonction, on lui donne des infos avec lesquelles travailler
2. elle va faire des calculs grace aux infos qu'elle  recu en entree 
3. sortie : la fonction renvoie unr esultat. c'est le RETOUR ou RETURN :)


type    nomdefoncion(parametres)
{
 inserer les instructions ici
}

e type correspond a la sortie 


void signifie que la fonction de renvoie aucune valeur.

les parametres correspondent a l'entree, et on peut evozer des parametres a la fonction. ce sont les valeurs avec lesquelles la fonction va travailler
*/


double aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
}    

int main(int argc, char *argv[])
{    
    printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10)); // ici on va lu donner les deux parametres qu'elle demande
    printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
    printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));
      
    return 0;
}

void aireRectangle(double largeur, double hauteur)
{
    double aire = 0;
    
    aire = largeur * hauteur;
    printf("Rectangle de largeur %f et hauteur %f. Aire = %f\n", largeur, hauteur, aire);
}    

int main(int argc, char *argv[])
{    
    aireRectangle(5, 10);
    aireRectangle(2.5, 3.5);
    aireRectangle(4.2, 9.7);
       
    return 0;
}