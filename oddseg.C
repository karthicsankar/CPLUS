#include <stdio.h>
#include <string.h>

int main(void) {
    char num[10000];
    int b;
    printf("Enter the number");
    scanf("%s",num);
    b=strlen(num);
    for(int l=0;l<b;l++)
    {
        if(num[l]%2==0)
        {
            printf("\t%s",num[l]);
        }
    }
    
	return 1;
}
