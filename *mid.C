#include <stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,i,k;
    scanf("%s",a);
    n=strlen(a);
    if(n%2!=0)
      {
          k=n/2;
          a[k]='*';
          printf("%s",a);
      }
      else
      {
          k=n/2;
          a[k]='*';
          a[k-1]='*';
          printf("%s",a);
      }
}
