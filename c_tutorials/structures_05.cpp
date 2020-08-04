/*
Structures==>Dis-similar data
Syntax for creating the structures
==========================================
struct employee{
int code;
float salary;
char name[10];
}

===>This declares a new user defined data-type.
*/
#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];
};//semicolon is important


int main(){
	int a=34;
	char b='g';
	float d=234.56;

	struct employee e1;
	e1.code=234;
	
	e1.salary=34.546;
	
// error=>	e1.name="Megha"  
  strcpy(e1.name,"Megha");
  printf("%d\n",e1.code);
  
  printf("%f\n",e1.salary);
  
  printf("%s\n",e1.name);
  
  struct employee e2,e3;
  e2.code=134;
	
	e2.salary=40.546;
	
// error=>	e1.name="Megha"  
  strcpy(e2.name,"Ruchika");
  printf("%d\n",e2.code);
  
  printf("%f\n",e2.salary);
  
  printf("%s\n",e2.name);
  
  e3.code=034;
	
	e3.salary=40.000;
	
// error=>	e1.name="Megha"  
  strcpy(e3.name,"kamna");
  
  printf("%d\n",e3.code);
  
  printf("%f\n",e3.salary);
  
  printf("%s\n",e3.name);
  
}

/*
Why use structure?
We can create the data types in the employee structure
seperately but when the number of properties in a structure increases,it becomes difficult 
for us to create data variables without structures.
1. Structures keep the data organized.
2. Make the data mgt easy for the programmer.
*/

