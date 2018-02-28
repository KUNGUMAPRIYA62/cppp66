#include <stdio.h>
void main()
{
	int a,b,c;
	printf("enter the numbers:");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("%d",c);
	if(c%2==0)
	{
	printf("\neven");
	}
	else
	{
		printf("\nodd");
}
}
