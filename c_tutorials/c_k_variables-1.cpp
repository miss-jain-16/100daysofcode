/*#VARIABLES:=>
#A variable is a container which stores a value.
#a=3
#Rules for naming variables in c:===>
#1. first cahracter must be an aplhabet and underscore.
#2. no commas,blanks allowed.
#3. variables names are case sensitive
=========================================================
=========================================================
#CONSTANTS:=>These are those  entity whose value doesnt get changed.
#Types of constants:==>
#Integer constant=>-1,7,8,9
#Real constant=>9.0,8.9,-7.0
#character constant=>(must be include with single inverted cooma)
#'a','$','m'
=======================================================
#KEYWORDS==>These are the reserved words whose meaning is already known to the compiler
#32 keywords
==========================================================
#COMMENTS==>Adding information
#LIBRARY FUNCTIONS==>
#%d,%c

/*
Basic structure of C program:==>>
1.Every program execution starts with main()
2.casesensitive
3.instructions are written in the same order in which they are written

semicolon:-instruction terminator

COMPILATION AND EXCEUTION==>
A compiler is a computer program which converts a c program into machine language 
first.c==>c comiler==>first.exe(excutable file)
*/


#include<stdio.h>
int main(){
	int tom; //variable
	int a=4;
	float b=8.6;
    
//  TAKE THE VALUE MEANS INPUT:
  scanf("%d",&i);  
	printf("My name is megha");
	printf("Value of a is :-%d \n",a);
//	\n==>next line
	printf("Value of b is :-%f",b);
	
	return 0;
}
