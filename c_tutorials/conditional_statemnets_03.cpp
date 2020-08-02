/*
CONDITIONAL  INSTRUCTIONS

Decision-Making Instruction in c:-
==>IF-ELSE STATEMENT
==>SWITCH STATEMENT


=========================================================
1.IF-ELSE:-
*/

#include<stdio.h>
int main(){
	int a=0;
	if(a==0){
	printf("Yes u r if-statement %d \n",a);
	}
	
	printf("================================================\n");
	
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	if(age>=90){
		printf("you are above 90,sorry! u cant drive");
	}
	else{
		printf("You can drive");
	}
	
	
return 0;
}













