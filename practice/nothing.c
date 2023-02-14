
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("enter your value : ");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  //if((a==b)||(a==c)||(b==c))
  if(((a+b)>c))
  {
    
    printf("1");
  }
  else
  {
    printf("0");
  }
  printf("hello");

  return 0;  
}