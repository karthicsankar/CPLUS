#include <stdio.h>
#include <string.h>
void reverse(char [], int, int);
int main()
{
    char str1[20];
    int size;
    printf("Enter a string to reverse: ");
    scanf( "%c" ,&str1);
    size = strlen(str1);
    reverse(str1,0, size - 1);
    printf("The string after reversing is: %s\n", str1);
    return 0;
}
