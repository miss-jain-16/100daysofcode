/*
Instructions
==========================================================
1. Type declaration instruction
2.  Arithemtic instruction
3.  Control instruction
* /


	
/*	
================================================
It will show error ,a is initialse later
	float b=a + 8.9;
	float a=1.1;
====================================================
*/	

  #include<stdio.h>
  #include<math.h>
  int main(){
//	Type declaration instructions
  int a=5;
	int b=9;
	b=a;
	printf("The value of a is : %d \n",a);
	printf("The value of b is : %d\n",b);
//Arithmetic instructions

int z=b*a;// <==This is legal
//b*a =z;<==This is illegal
  printf("The value of a+b is : %d \n",a+b);
  printf("The value of a-b is : %d \n",a-b);
  printf("The value of a*b is : %d \n",a*b);
  
/*
	There is no operator of exponential in C
	If i want to use,i use==>pow() with the included library math
*/
printf("power /exponential function :==> %f\n",pow(2,5));

/*
Addition of float + integer===>float/integer???
lets see an example
*/

printf("Example==> %f\n",5+6.0);
printf("Example==> %d\n",5.0+6.0);

/*
int + int=>int
int + float=>float
float+ float=>float
*/
printf("value of k ==%d",3.0/9);

/*==================Priority Order ===============================
====================* / % ========================================
=====================+- ==========================================*/
int x=4;
int y=9;

printf("answer ==> %d\n",3*x-8*y);

/* ASSOCIATIVITY  */

printf("answer ==> %d\n",8*y / 3*x);
// 8*y /3*x= will give wrong answer
//  *,/ ==>>>left to right associativituy



/*===========>>(CONTROL INSTRUCTION)<<==============
Determines the flow of control in a program 
Four types :->
1. Sequence
2. Decision Control
3. Loop Control
4. Case Control




	return 0;
}
