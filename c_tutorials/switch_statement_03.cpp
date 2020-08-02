/*
OPERATOR PRECENDENCE
1. !
2. +,/,%
3. +,-
4. <>,<=,>=
5. ==,!=
6. &&
7. ||
8. =
============================================================
CONDITIONAL OPERATOR
condition?expression-if-true:expression-if-false
============================================================
SWITCH-CASE
When we have to make a choice between number of alternatives for a given number

*/
#include<stdio.h>
int main(){
	int rating;
	printf("Enter your rating (1-5) \n");
	scanf("%d",&rating);
	switch(rating){
		case 1:
			printf("Your rating is one\n");
			break;
		case 2:
			printf("Your rating is 2\n");
			break;
		case 3:
			printf("Your rating is 3\n");
			break;
		case 4:
			printf("Your rating is 4\n");
			break;
		case 5:
			printf("Your rating is 5\n");
			break;
		default:
			printf("Invalid ");
			break;
	}
	return 0;
}




