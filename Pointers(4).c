//swapping two numbers using pointers,
#include<stdio.h>
int main()
{
  int num1,num2;
  printf("Enter two numbers are : ");
  scanf("%d %d",&num1,&num2);

  int *p1,*p2;
  p1 = &num1;
  p2 = &num2;


  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;

  printf("First number is : %d\n",num1);
  printf("second number is : %d\n",num2);

    getch();


}
