#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	string a;
	
	cin>>a;//读到空字符 
	cout<<a<<endl; 
	getchar();
	
	char b[20];
	fgets(b,10,stdin);//读取10个字符，只用于字符串，有多余长度会读取换行符并补\0 
	puts(b);
	
	cin. getline(b,10);//读取10个字符，只用于字符串，自动补\0 
	puts(b);
	
	getline(cin,a);//读取一整行，只能用于string 
	cout<<a<<endl;
 } 
