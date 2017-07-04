#include<iostream>
#include<cmath>
using namespace std;

int prime[300000],nprime;
int mark[100000];

void siv(int n)
{
	int i,j,limit=sqrt(n+1);
	
	mark[1]=1;//non prime
	
	for(i=4;i<=n;i+=2)mark[i]=1;//even numbers are not prime 
	
	prime[nprime++]=2;//prime
	
	for(i=3;i<=n;i+=2)//loop only for odd numbers
	{
		if(!mark[i])//not prime
		{
			prime[nprime++]=i;//i is prime
			if(i<=limit)
			{
				for(j=i*i;j<=n;j+=i*2)//loop through all odd multiples of i 
				//greater than i*i
				                         
				{
					mark[j]=1;//not prime
				}
			}
		}
	}
 
 for(i=0;i<nprime;i++) //print prime numbers
 {
 	cout<<prime[i]<<" ";
  } 
 
}

int main()
{
	int n=50;
	siv(n);
}
