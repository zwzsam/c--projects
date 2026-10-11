#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	string s1/*s1(10,'2')赋值10个字符2*/,s2;
	getline(cin,s1); 
	s1+="123123";//string支持直接加减字符串或字符(确保有一个是string类型变量) 也能两个string直接相加 
	
	printf("%d",s1==s2);// string可以直接进行比较 、赋值s2=s1 
	
	puts(s1.c_str());//返回首地址，适配puts函数 
	
	printf("%d\n",s1.empty());//返回布尔值，判断字符是否为空，空则返回1 
	printf("%d\n",s2.empty());
	
	printf("%d\n",s1.size());//返回字符串长度，时间复杂度O(1) 
	printf("%d\n",s2.size());
	
	puts(s1.substr(3,2).c_str()); //从下表3截取2个字符，只有一个数字则从下标处截到末尾 
	
	int pos=0;
	pos=s1.find('5',3);// find返回下标 ，从从下表3处开始返回第一个‘5’的下标 
	printf("%d\n",pos);
	
	s1.insert(2,"sss") ,//在下标2位置插入sss 
	puts(s1.c_str());
	
	s1.erase(2,2);//从下标2后删除2个字符 
	puts(s1.c_str());
}
