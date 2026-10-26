#include <iostream>
using namespace std;
void quick_sort(int q[],int l,int r)
{
	if(l>=r)return;
	int x=q[(l+r)/2],  i=l-1,  j=r+1;
	while(i<j)
	{
		do
		{
			i++;
		}while(q[i]<x);
		do
		{
			j--;
		}while(q[j]>x);
		if(i<j)swap(q[i],q[j]);
	}
	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
}
int main()
{
	int a[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	quick_sort(a,0,n-1);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
