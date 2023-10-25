#include<stdio.h>
int main()
{
	char c;
	printf("uppercase letters from A-Z");
	for(c='A';c<='z';c++)
	{
		printf("%c\t",c);
	}
	printf("lowercase letters from a-z");
	for(c='a';c<='z';c++)
	{
		printf("%c\t",c);
		return 0;
	}
}
