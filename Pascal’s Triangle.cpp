 #include<iostream>
 using namespace std;
 // A O(n^2) time and O(1) extra space function for Pascal's Triangle

 void pascal(int n)
 {
 	int i,line,c=1;
 	for(line=1;line<=n;line++)
 	{
 		c=1;// used to represent C(line, i)
 		for(i=1;i<=line;i++)
 		{
 			printf("%d ",c);// The first value in a line is always 1
 			c=c*(line-i)/i;
		 }
		 printf("\n");
	 }
 }
 
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	pascal(n);
 }
