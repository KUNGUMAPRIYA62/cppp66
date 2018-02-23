#include<stdio.h>
void main()
{
  {
int a,b,temp;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
{
printf("Before swap");
printf("\n %d",a);
printf(" %d",b);
}
temp=temp^a;
a=a^b;
b=b^temp;    
{
printf("\nAfter swap");
printf("\n %d",a);
printf(" %d",b);
}
}
}
