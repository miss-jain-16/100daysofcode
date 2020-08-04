/*
Pointers to structure

===============================
Typedef=>it is used to create alias name for data types in c.

*/
#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};

int main(){
	struct employee e1;
	struct employee *ptr;
	ptr=&e1;
//	(*ptr).code=101,same as above
	ptr->code=101;
	printf("%d\n",e1.code);
	
}
