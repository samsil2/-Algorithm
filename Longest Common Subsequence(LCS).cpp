 /* Dynamic Programming C/C++ implementation of LCS problem */
 #include<iostream>
 #include<cstring>
 
 using namespace std;
 
 int LCS(char *s1,char *s2,int len1,int len2 )
 {
 	 /* Following steps build L[m+1][n+1] in bottom up fashion. Note 
      that L[i][j] contains length of LCS of X[0..i-1] and Y[0..j-1] */
 	int i,j;
 	int lcs[len1+1][len2+1];
 	for(i=0;i<=len1;i++)
 	for(j=0;j<=len2;j++)
 	{
 		if(i==0 || j==0) lcs[i][j]=0;
 		else if(s1[i-1]==s2[j-1]) lcs[i][j]=lcs[i-1][j-1]+1;
 		else lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
	 }
	 return lcs[len1][len2];/* L[m][n] contains length of LCS for X[0..n-1] and Y[0..m-1] */
 }
 /* Utility function to get max of 2 integers */
 int max(int a, int b)
{
    return (a > b)? a : b;
}

 
 int main()
 {
 	char s1[100],s2[100];
 	int len1,len2;
 	cout<<"Please input first string:\n";
 	cin>>s1;
 	cout<<"\n";
 	cout<<"Please input second string:\n";
 	cin>>s2;
 	
 	len1=strlen(s1);
 	len2=strlen(s2);
 	cout<<"\n";
 	cout<<"LCS: "<<LCS(s1,s2,len1,len2);
 }
