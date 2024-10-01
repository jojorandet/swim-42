#include <unistd.h>
#include <stdio.h> 

void    compteur(void)
{
    char compteur;

    compteur = '0';
    while(compteur <= '9')
    {
        printf("la valeur de la variable vaut "%d", compteur");
        compteur++;
    }
    
}

int main()
{
    compteur();
    return(0);
}



//here we do not affect a new value to the variable we have here 
