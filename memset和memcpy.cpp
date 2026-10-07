#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	//memset,memcpy
	int a[10],b[10];
	int i;
	for(i=0;i<10;i++)
	{
		a[i]=i;
	}
	memset(b,0,sizeof(b));
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	memcpy(b,a,sizeof(a));
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
}
