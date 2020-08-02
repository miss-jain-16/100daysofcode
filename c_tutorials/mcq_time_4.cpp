/*
MCQS--

1. #include <stdio.h>
    int main()
    {
        enum {ORANGE = 5, MANGO, BANANA = 4, PEACH};
        printf("PEACH = %d\n", PEACH);
    }
  ==>PEACH=5

2. #include <stdio.h>
    int main()
    {
        printf("C programming %s", "Class by\n%s Sanfoundry", "WOW");
    }
  ==>C programming Class by
     %s Sanfoundry

3.#include <stdio.h>
    #define a 10
    int main()
    {
        const int a = 5;
        printf("a = %d\n", a);
  }
  ==>Error

4.#include <stdio.h>
    #include <string.h>
    int main()
    {
        char *str = "x";
        char c = 'x';
        char ary[1];
        ary[0] = c;
        printf("%d %d", strlen(str), strlen(ary));
        return 0;
    }
  ==>Undefined
  
5. #include <stdio.h>
    int main()
    {
        printf("sanfoundry\rclass\n");
        return 0;
    }
  ==>classundry

6.#include <stdio.h>
    int const print()
    {
        printf("Sanfoundry.com");
        return 0;
    }
    void main()
    {
        print();
    }
  ==>Sanfoundry.com


