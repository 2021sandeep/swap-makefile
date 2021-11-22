#include"header.h"
#include<stdio.h>
int main()
{
  int a,b;
  printf("enter the a&b values");
  scanf("%d %d",&a,&b);
  swap(&a,&b);
  printf("after swaping %d %d ",a,b);
  
}
