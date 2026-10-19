#include <iostream>
#include <cstring>
using namespace std;

void p()
{
	printf("aaa\n");
} 
 int m(int,int b=5);//声明时可以不加具体变量，可以设置默认值（必须靠右） 
 
 void n(int &a,int &b)//引用标志可以在函数内调用时直接改变原来的值 ,传递数组时传入的是数组首地址 
 {						//对数组的改变会直接影响数组 ，同时要传入数组长度 
 	int t;
 	t=a;
 	a=b;
 	b=t;
 }
 
 void p(int a) //函数可以重载，参数类型不同，参数数量不同，参数顺序不同 
 {				//有默认值的不要重载， 
 	printf("重载\n");
 }
 
 inline int add(int a,int b)//内联函数inline，相当于把内容直接写在调用处，减少调用函数时间 
 {							//递归、复杂函数无法使用，有时编译器会忽略inline 
 	return a+b;
  } 
int main()
{
	int a=3,b=5;
	printf("%d\n",m(3)); 
	
	n(a,b);
	printf("%d %d\n",a,b);
	
	p();
	p(1); 
	
	printf("%d\n",add(5,5));
}

int m(int a,int b)
{
	return a+b;
}
