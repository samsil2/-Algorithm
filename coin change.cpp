// C++ program to find minimum number of denominations
 
#include<iostream>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<map>
#include<set>
using namespace std;



// Driver program
void coins(int V,int arr[],int n)
{
	// Initialize result
	vector<int> ans;

	// Traverse through all denomination
	for (int i=n-1; i>=0; i--)
	{
		// Find denominations
		while (V >= arr[i])
		{
		V -= arr[i];
		ans.push_back(arr[i]);
		}
	}

	// Print result
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}

// Driver program
int main()
{
	// All denominations of Indian Currency
int arr[] = {1, 2, 5,12 , 30, 50, 100, 500, 1000};
int size = sizeof(arr)/sizeof(arr[0]);
int n = 70;
cout << "Following is minimal number of change for " << n << " is : ";
coins(n,arr,size);
return 0;
}

