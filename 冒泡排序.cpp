#include <iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
	int i,j,f;
	for(i=0;i<n-1;i++)
	{
		f=1;
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])f=0,swap(a[j],a[j+1]);
		}
		if(f)break;
	}
}
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	int n,i,a[10000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	bubble_sort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
