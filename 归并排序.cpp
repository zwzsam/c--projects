#include <iostream>
using namespace std;
void gsort(int a[],int l,int r)
{
	if(l>=r)return;
	int x=l+r>>1;
	gsort(a,l,x);gsort(a,x+1,r);
	int b[100];
	int i=l,j=x+1,k=0;
	for(;i<=x&&j<=r;)
	{
		if(a[i]<a[j])b[k++]=a[i++];
		else b[k++]=a[j++];
	}
	while(i<=x) b[k++]=a[i++];
	while(j<=r) b[k++]=a[j++];
	for(i=0;i<k;i++)
	{
		a[l+i]=b[i];
	}
}
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	int i,n;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	gsort(a,0,n-1);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
 } 
