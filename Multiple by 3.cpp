#include <iostream>
#include <cmath>
#include<algorithm>
#include <cstdio>
 
using namespace std;
/* Fnction to check if n is a multiple of 3*/
int isMultipleOf3(int n)
{
	return (n - 3 * (n/3))==0;
}
/* Program to test function isMultipleOf3 */

int main()
{
	int num;
	cin>>num;
 if (isMultipleOf3(num)) cout<<"num is multiple of 3\n";
 else cout<<"num is not multiple of 3\n";
}
