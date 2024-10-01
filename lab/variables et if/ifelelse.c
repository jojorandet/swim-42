#include <unistd.h>
#include <stdio.h>

int main()
{
    int i;
    
    i = 9;

    if(i > 10)
    { 
        printf("vrai");
    }
    else
    {
        printf("faux");
    }
    return (0);
}



/* if (conition)
{
   instruction a executer si la condition est vraie
} 

les parantheses sont faucltatives si on a une seule condition*/
