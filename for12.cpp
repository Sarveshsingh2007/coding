#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		int k=i;
		for(j=1;j<=i;j++)
		{
			cout<<k--;
		}
		int c=2;
		for(j=1;j<=i-1;j++)
		{
			cout<<c++;
		}
		cout<<endl;
	}
}
