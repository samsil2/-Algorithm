#include <iostream>
#include <cmath>
#include<algorithm>
#include <cstdio>
 

using namespace std;
 
 
/* Fnction to check if n is a multiple of 3*/
int isMultipleOf3(int n)
{
     if(n<10)
     {
     	if(n==0 || n==3 || n==6 || n==9) return 1;
     	else return 0;
	 }
	 else{
	 	int t=n;
	 	int sum=0;
	 	while(t!=0)
	 	{
	 		sum = sum + t - 10 * (t / 10);
			t = t / 10;
		 }
		 return isMultipleOf3(sum);
	 }
}
 
/* Program to test function isMultipleOf3 */
int main()
{
    int num  ;
     cout<<"Enter a number:";
    cin>>num;
    if (isMultipleOf3(num))    
        printf("num is multiple of 3");
    else
        printf("num is not a multiple of 3");
    return 0;
}
