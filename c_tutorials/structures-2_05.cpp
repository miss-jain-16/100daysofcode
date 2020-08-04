/*
ARRAY OF STRUCTURES:=>
just like an array of integers,an array of floats,
an array of characters, we can create an array of structures.
struct employee facebook[100];


we can access the data using:
facebook[0].code=100;

*/

#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};
int main(){
	struct employee facebook[100];
	strcpy(facebook[0].name,"Megha");
	facebook[0].code=100;
	facebook[0].salary=23.00;
	
	
	printf("%s\n",facebook[0].name);
}

