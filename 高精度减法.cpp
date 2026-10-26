#include <iostream>
#include <vector>
using namespace std;
bool cmp(vector<int> &a,vector<int> &b)
{
	if(a.size()!=b.size())return a.size()>b.size();
	int i;
	for(i=a.size()-1;i>-1;i--)
	{
		if(a[i]!=b[i])return a[i]>b[i];
	}
	return true;
}
vector<int> sub(vector<int> &a,vector<int> &b)
{
	int i,t=0;
	vector<int> c;
	for(i=0;i<a.size();i++)
	{
		t=a[i]-t;
		if(i<b.size())t=t-b[i];
		c.push_back((t+10)%10);
		if(t<0)t=1;
		else t=0;
	}
	while(c.size()>1&&c.back()==0)c.pop_back();
	return c;
}
int main()
{
	string a,b;
	cin>>a>>b;
	int i;
	vector<int> A,B;
	for(i=a.size()-1;i>-1;i--) A.push_back(a[i]-'0');
	for(i=b.size()-1;i>-1;i--) B.push_back(b[i]-'0');
	if(cmp(A,B))
	{
		vector<int> c=sub(A,B);
		for(i=c.size()-1;i>-1;i--)cout<<c[i];
	}
	else
	{
		vector<int> c=sub(B,A);
		cout<<'-';
		for(i=c.size()-1;i>-1;i--)cout<<c[i];
	}
	cout<<endl;
 } 
