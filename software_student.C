#include <stdio.h>
int main() 
{	
   int number1,number2;
   char cummulative;
   for(int i=0;i<4;i++)
   {
       scanf("%d %c %d",&number1,&cummulative,&number2);
       if(cummulative=='/')
       {
           printf("%d\n",(number1/number2));
       }
       else
       {
           printf("%d\n",(number1%number2));
       } 
   }
	return 0;
}
