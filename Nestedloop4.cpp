//Nested loop
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=3;i++)
	{
		for(int sp=1;sp<=3-i;sp++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"* \t";
		}
		cout<<endl;
	}
	return 0;
}