#include <iostream>
#include <vector>
using namespace std;
vector<int> mul(vector<int> &a,int &b)
{
	int i,t=0;
	vector<int> c;
	for(i=0;i<a.size()||t;i++)
	{
		if(i<a.size())t+=a[i]*b;
		c.push_back(t%10);
		t/=10;
	}
	while(c.size()>1&&c.back()==0)c.pop_back();
	return c;
}
int main()
{
	string a;
	int b;
	cin>>a>>b;
	vector<int> A;
	int i;
	for(i=a.size()-1;i>-1;i--)A.push_back(a[i]-'0');
	vector<int> c=mul(A,b);
	for(i=c.size()-1;i>-1;i--)cout<<c[i];
	cout<<endl;
}
