//adding two numbers using pointer,
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers are : ");
    scanf("%d %d",&num1,&num2);
    int *p1;
    p1 = &num1;

    int *p2;
    p2 = &num2;
    int sum = *p1 + *p2;
    printf("Sum = %d\n",sum);
    getch();
}
