//To Calcuate area and circumference of Circle
#include<iostream>
using namespace std;
int main()
{
	int a,r,c;
	cout<<"Enter radius";
	cin>>r;

	//Calculating area
	a=3.14*r*r;
	cout<<"The area of Circle is:"<<a<<endl;

	//Calculating Circumference
	c=2*3.14*r;
	cout<<"The circumference of circle is:"<<c;

}