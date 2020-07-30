/*
1. C99 standard guarantees uniqueness of __________ characters for internal names.
==>63

2.C99 standard guarantees uniqueness of ___________ characters for external names.
==>31

3. Which of the following is not a valid variable name declaration?
a) int _a3;
b) int a_3;
c) int 3_a;
d) int _3a
==>c

4. Why do variable names beginning with the underscore is not encouraged?
==>To avoid conflicts since library routines use such names

5.All keywords in C are in ____________
==> LowerCase

6. Which of the following is true for variable names in C?
==> Variable names cannot start with a digit

7.
#include <stdio.h>
    int main()
    {
        int main = 3;
        printf("%d", main);
        return 0;
    }
==>3
==> A C program can have same function name and same variable name.

8. 
 #include <stdio.h>
    int main()
    {
        int ThisIsVariableName = 12;
        int ThisIsVariablename = 14;
        printf("%d", ThisIsVariablename);
        return 0;
    }
==>The program will print 14

9. Which of the following cannot be a variable name in C?
a) volatile
b) true
c) friend
d) export

==> a

10.
#include <stdio.h>
    int main()
    {
        int a[5] = {1, 2, 3, 4, 5};
        int i;
        for (i = 0; i < 5; i++)
            if ((char)a[i] == '5')
                printf("%d\n", a[i]);
            else
                printf("FAIL\n");
    }
    
==>The program will compile and print FAIL for 5 times

11.The format identifier ‘%i’ is also used for _____ data type.
==>Both %d and %i can be used as a format identifier for int data type.

12.Which data type is most suitable for storing a number 65000 in a 32-bit system
==>65000 comes in the range of short (16-bit) which occupies the least memory. Signed short ranges from -32768 to 32767 and hence we should use unsigned short.

13.
#include  <stdio.h>
    int main()
    {
       signed char chr;
       chr = 128;
       printf("%d\n", chr);
       return 0
  }
==>-128




