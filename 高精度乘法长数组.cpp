#include <iostream>
#include <vector>
using namespace std;
vector<int> mul(vector<int> &a,vector<int> &b)
{
	int i,j,t=0;
	vector<int> c(a.size()+b.size(),0);
	for(i=0;i<a.size();i++)
	{
		for(j=0;j<b.size();j++)
		{
			c[i+j]+=a[i]*b[j];
		}
	}
	for(i=0;i<c.size();i++)
	{
		t+=c[i];
		c[i]=t%10;
		t/=10;
	}
	while(c.size()>1&&c.back()==0)c.pop_back();
	return c;
}
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
	string a,b;
	cin>>a>>b;
	vector<int>A,B;
	int i;
	if(a=="0"||b=="0")
	{
		cout<<'0'<<endl;
		return 0;
	}
	for(i=a.size()-1;i>-1;i--)A.push_back(a[i]-'0');
	for(i=b.size()-1;i>-1;i--)B.push_back(b[i]-'0');
	vector<int> c=mul(A,B);
	for(i=c.size()-1;i>-1;i--)cout<<c[i];
	cout<<endl;
 } 
