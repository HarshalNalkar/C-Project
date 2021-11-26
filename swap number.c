#include<stdio.h>
void main()
{
  int a, b, temp;
  printf("Enter the value a= ");
  scanf("%d\n", &a);
  printf("Enter the value b= ");
  Scanf("%d", &b);
  printf("BEFORE THE SWAPPING NUMBER %d\n %d\n ",a, b);
 
  temp=a;
  a=b;
  b=temp;

  Printf("AFTER THE SWAPPING NUMBER a AND b %d\n %d\n",a, b);
  return 0;
}
  
