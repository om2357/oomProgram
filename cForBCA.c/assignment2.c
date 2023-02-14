#include<stdio.h>
int main()
{
  int m ,n ,upper = 1,lower =1;
  
  scanf("%d",&m);
  
  for(int i = 0; i<m;i++)
  {
    for(int j = 0;j<m;j++)
    {
      scanf("%d",&n);
      
       if(i>j && m!=0)
       {
          upper = 0;
       }
          if(i<j && m!= 0)
          {
             lower = 0;
          }
      }
 
  }
  
  if(upper == 1 && lower == 1)
  {
    printf("2");
  }
  else if(upper == 1)
  {
    printf("1");
  }
  else if(lower == 1)
  {
    printf("-1");
  }
  else
  {
    printf("0");
  }
  
  return 0;
  
}