//Program to generate all integers divisible by 3 and are prsenet between 100 and 200 using while loop
#include<iostream>
using namespace std;
int main()
{
	int a;
	a=100;
	while(a<=200)
	{
		if(a%3==0)
		cout<<a<<endl;
		a++;
	}
	return 0;
}