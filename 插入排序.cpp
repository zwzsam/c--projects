#include <iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
	int i,j,k;
	for(i=1;i<n;i++)
	{
		k=a[i];
		for(j=i-1;j>=0&&a[j]>k;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=k;
	}
}
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	int i,n,a[10000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	insertion_sort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
 } 
