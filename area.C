#include<stdio.h>
#include<stdlib.h>
int main()
{
    float length,breath,area;
    printf("Enter the length");
    scanf("%f",&length);
    printf("Enter the breath");
    scanf("%f",&breath);
    area=length*breath;
    printf("the total area is %0.5f",area);
    return 0;
}
