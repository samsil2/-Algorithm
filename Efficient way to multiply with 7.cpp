#include<iostream>
using namespace std;

int multiplyBySeven(int n)
{  
    /* Note the inner bracket here. This is needed 
       because precedence of '-' operator is higher 
       than '<<' */
    return ((n<<3) - n);
}
 
/* Driver program to test above function */
int main()
{
      int n;
      cin>>n;
    cout<<multiplyBySeven(n);
 
    
    return 0;
}
