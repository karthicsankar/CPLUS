#include <stdio.h>
int main()
{
    int celusis,kelvin;
    printf("Enter the temperature in celusis:");
    scanf("%d",&celusis);
    kelvin=273+celusis;
    printf("\n%d",kelvin);
    return 0;
}
