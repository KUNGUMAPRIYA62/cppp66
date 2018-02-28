#include <stdio.h>
void main() {
	int n;
	scanf("%d",&n);
	int k=1;
	while(k<n)
	{
		k<<=1;
	}
	printf("%d",k);
}
