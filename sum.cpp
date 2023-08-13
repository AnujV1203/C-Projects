//Program to read 10 numbers and print the sum of even numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,s=0;
	a=1;
	while(a<=10)
	{
		cout<<"Enter an integer";
		cin>>b;
		if(b%2==0){
		s=s+b;
	}
    a++;
    } 
	cout<<s;
}