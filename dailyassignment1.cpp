#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	char characters;
	srand(time(NULL));
	characters=rand() % (70-65+1)+65;
	
	printf("the randamoly generated character is %c", characters);
	
	return 0;
}