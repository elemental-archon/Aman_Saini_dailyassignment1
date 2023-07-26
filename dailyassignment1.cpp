/*Generate a Random Character.*/
#include<stdio.h> //include required header files
#include<stdlib.h>
#include<time.h>

int main(void)
{
	char characters; //declaring characters variable as char data type
	srand(time(NULL)); //using seed with time as random character vary with our system time
	characters=rand() % (70-65+1)+65; //using ASCII code where character will be vary in range A - F
	
	printf("the randamoly generated character is %c", characters); //print the randomaly generated character
	
	return 0;
}
