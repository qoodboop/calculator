#include <stdio.h>
#include <stdlib.h>

int fx_addition (int ,int );
int fx_soustraction(int,int);
int main()
{   printf("rentrez vos deux valeurs\n");
    printf("%d",fx_addition(1,6));
    printf("\n%d",fx_soustraction(1,4));
    return 0;
}

int fx_addition(int a,int b)
{
    return a+b;
}

int fx_soustraction(int c,int d)
{
   return c-d ;
}
