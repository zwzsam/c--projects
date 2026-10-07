#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int i;
	for(i=0;i<128;i++)
	{
		printf("  %c  [%d] ",i,i);
		if(i%10==0) printf("\n"); 
	}
	getchar(); 
}
