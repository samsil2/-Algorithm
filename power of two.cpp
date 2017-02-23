#include<iostream>
#define bool int
 
using namespace std;
 
/* Function to check if x is power of 2*/
bool isPowerOfTwo(int n) //this function bool type
{
   if(n==0) return 0;
   while(n!=1)
   {
   	if(n%2 !=0)
   	{
   		return 0;
	   }
	   n/=2;
   }
   return 1;
}

int main()
{
	 int n;
	 cout<<"please enter a integer:";
	 cin>>n;
	 isPowerOfTwo(n) ? cout<<"yes\n" : cout<<"No\n"; //ternary operator
	 
}
 
