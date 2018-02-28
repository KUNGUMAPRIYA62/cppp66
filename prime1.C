#include <stdio.h>
void main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if((a%1)||(a%a))
{
  printf("prime number");
}
 else
 {
 printf("not a prime number");
}
}
