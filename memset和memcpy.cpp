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
	memset(b,0,sizeof(b));//将整个b数组填充0,填充是按照字节填充,只有0和-1能正常使用
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	memcpy(b,a,sizeof(a));//将整个b数组填充a数组的内容,完整复制
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
}
