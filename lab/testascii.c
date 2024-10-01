#include <unistd.h>

void    ft_putchar(char lettre)
{
    write(1, &lettre, 1);
}
  
int main()
{
    char lettre;
    lettre = 'A';

    ft_putchar(lettre);

    return(0);
}

// j'ai pas mis entre guillemet simple, du coup ca me donne la lettre correspondante au chiffre
