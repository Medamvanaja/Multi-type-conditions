#include<stdio.h>
int main()
{
  float hsalary,wsalary;
  int hage,wage;
  printf("Enter the husband salary:");
  scanf("%f",&hsalary);
  printf("\n Enter the wife salary:");
  scanf("%f",&wsalary);
  printf("\n Enter the husband age:");
  scanf("%d",&hage);
  printf("\n Enter the wife age:");
  scanf("%d",&wage);
  if(hsalary>=100000)
     if(wsalary>=50000)
      if(hage >=30)
        if(wage>=25)
        printf("loan is sanctioned");
        else
        printf("loan is declined wage");
        else
        printf("loan is diclined hage");
     else
     printf("loan is diclined wife salary");
  else
  printf("loan is diclined husband salary");
}
