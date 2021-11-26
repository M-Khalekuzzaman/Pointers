//swapping two numbers using pointer and function;
#include<stdio.h>
void swap(int *p1,int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}
int main()
{
    int num1,num2;
    printf("Enter two number are : ");
    scanf("%d %d",&num1,&num2);

    printf("Before swapping : num1 = %d, num2 = %d \n",num1,num2);
    swap(&num1,&num2);
    printf("After swapping : num1 = %d, num2 = %d \n",num1,num2);

    getch();
}
