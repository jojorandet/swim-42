#include <unistd.h>
#include <stdio.h>

void  area_rectangle(double length, double height) //4
{
    double area; //5
    area = 0; //6

    area = length * height; //7
    printf("a rectangle of length %f and of height %f has an area of %f\n", length, height, area); //8
}

int main()
{
    area_rectangle(5,3); //3
    area_rectangle(7,8); //9 etc.
    area_rectangle(9,0);

    return (0);
}