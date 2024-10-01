/*quand on fait un return avec un point virgule a la fin, on arrete la fonction.

comment faire pour ecrire une fonction qui va retourner deux valeurs?
 
 une fonction int va renoyer une return int et une focntion qui a un output en  void renverra rien
 mais return deux valeurs est impossible*/

 #include <unistd.h>
 #include <stdio.h>

 void    decoupeminute(int *pheures, int *pminutes, int *psecondes);

 int main()
{
    int heures = 0; // la variable hours n'est pas la meme dans cette fonction que dans la fonction main
    int minutes = 190;
    int secondes = 981;
    int temp = 0;

    decoupeminute(&heures, &minutes, &secondes);

    printf("%d heures et %d minutes et %d secondes", heures, minutes, secondes);

    return (0);
}

 void    decoupeminute(int *pheures, int *pminutes, int *psecondes)
 {
    *pminutes += *psecondes / 60;
    *psecondes = *psecondes % 60;
    *pheures += *pminutes / 60;
    *pminutes = *pminutes % 60;
 }  