#include <iostream>
using namespace std;
void selection_sort(int a[],int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])min=j;
		}
		swap(a[i],a[min]);
	}
}
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	int i,n,a[10000];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	selection_sort(a,n);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl; 
}
