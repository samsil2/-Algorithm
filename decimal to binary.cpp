#include<iostream>
using namespace std; 
int main()
{
	int a=1,s=0,x,p;
	cin>>x;
	while(x!=0)
	{
		s+=(x%2)*a;
		x/=2;
		a*=10;
	}
	cout<<s<<endl;
	return 0;
}
