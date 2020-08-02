/*
MCQs-Data Types and size

1. #include <stdio.h>
    int main()
    {
        float f1 = 0.1;
        if (f1 == 0.1)
            printf("equal\n");
        else
            printf("not equal\n");
  ==>Not equal
  
2.  #include <stdio.h>
    int main()
    {
        float f1 = 0.1;
        if (f1 == 0.1f)
            printf("equal\n");
        else
            printf("not equal\n");
    }
  ==>Equal
  
3.#include <stdio.h>
    int main()
    {
        int x = 10000;
        double y = 56;
        int *p = &x;
        double *q = &y;
        printf("p and q are %d and %d", sizeof(p), sizeof(q));
        return 0;
    }
  ==> Size of any type of pointer is 4 on a 32-bit machine.

4. #include <stdio.h>
    int main()
    {
        float x = 'a';
        printf("%f", x);
        return 0;
    }
  
  ==>97.000000
*/
  
