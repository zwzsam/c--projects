#include <iostream>
#include <vector>
using namespace std;
vector<int> add(vector<int> &a,vector<int> &b)
{
	int i,sum=0;
	vector<int> c;
	if(a.size()<b.size())return add(b,a);
	for(i=0;i<a.size();i++)
	{
		sum+=a[i];
		if(i<b.size())
			sum+=b[i];
		c.push_back(sum%10);
		sum/=10;
	}
	if(sum)c.push_back(sum);
	return c;
}
int main()
{
	string a,b;
	cin>>a>>b;
	int i;
	vector<int> A,B;
	for(i=a.size()-1;i>-1;i--)
		A.push_back(a[i]-'0');
	for(i=b.size()-1;i>-1;i--)
		B.push_back(b[i]-'0');
	vector<int> c=add(A,B);
	for(i=c.size()-1;i>-1;i--)
		cout<<c[i];
	cout<<endl;
 } 
