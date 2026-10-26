#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> div(vector<int> &a,int &b,int &r)
{
	int i;
	r=0;
	vector<int> c;
	for(i=a.size()-1;i>-1;i--)
	{
		r=r*10+a[i];
		c.push_back(r/b);
		r%=b;
	}
	reverse(c.begin(),c.end());
	while(c.size()>1&&c.back()==0)c.pop_back();
	return c;
}
int main()
{
	string a;
	int b;
	cin>>a>>b;
	int i,r;
	vector<int> A;
	for(i=a.size()-1;i>-1;i--)A.push_back(a[i]-'0');
	vector<int> c=div(A,b,r);
	for(i=c.size()-1;i>-1;i--)cout<<c[i];
	cout<<endl;
	cout<<r<<endl;
 } 
