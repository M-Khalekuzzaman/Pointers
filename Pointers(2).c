#include<stdio.h>
int main()
{
    int x = 10, y = 20 , z = 30;
    int *ptr;

    ptr = &x;
    printf("X value is : %d\n",*ptr);
    printf("X address is : %u\n",&x);
    printf("X address is : %u\n",&ptr);

    ptr = &y;
    printf("Y value is : %d\n",*ptr);

    ptr = &z;
    printf("Z value is : %d\n",*ptr);

    getch();
}
