//What is pointer?
//Pointer is a variable that stores/points the address of another variable.
#include<stdio.h>
int main()
{
    int x = 10;
    int *p;
    p = &x;

    printf("X value : %d\n",x);
    printf("X value : %u\n",&x);
    printf("X value : %u\n",p);
    printf("X value : %d\n",*p);
    printf("X value : %u\n",&p);

    getch();
}
