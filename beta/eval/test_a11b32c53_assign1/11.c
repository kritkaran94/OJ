#include<stdio.h>

int main()
{
	char ch;
	scanf("%c",&ch);
	while(ch != '\n'){
		printf("%c",ch);
		scanf("%c",&ch);
	}
//	printf("\n");
	return 0;
}
