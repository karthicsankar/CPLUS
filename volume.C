#include <stdio.h>

int main(void) {
	int length,breath,height,volume;
	printf("Enter the length,breath and height:");
	scanf("%d %d %d",&length,&breath,&height);
	volume=length*breath*height;
	printf("%d",volume);
	return 0;
}
