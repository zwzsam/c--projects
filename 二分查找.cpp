#include <iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	int i,j,n,m,k;
	int a[100];
	cin>>m>>n;
	for(i=0;i<m;i++)cin>>a[i];
	while(n--)
	{
		cin>>k;
		i=0,j=m-1;
		while(i<j)
		{
			int x=i+j>>1;
			if(a[x]<k) i=x+1;
			else j=x;
		}
		if(a[i]!=k)
		cout<<-1<<" "<<-1<<endl;
		else
		{
			cout<<i<<" ";
			i=0,j=m-1;
			while(i<j)
			{
				int x=i+j+1>>1;
				if(a[x]>k)j=x-1;
				else i=x;
			}
			cout<<i<<endl;
		}
		
	}
 } 
