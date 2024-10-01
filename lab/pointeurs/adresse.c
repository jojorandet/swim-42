#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int a;
    
    a = 5;

    printf("%p\n", &a);
    printf("%d\n", a);

    return 0;
}
