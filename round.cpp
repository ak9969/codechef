#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
	int n,m,c=0,z=0,arr;
	int a[101];
	cin>>n>>m;

	for(int i=0;i<n;i++)
	{

		cin>>a[i];
	}
	arr=a[m-1];
	for(int i=0;i<n;i++)
		if(a[i]<=0)
		{
			z++;
		}
		else if(a[i]>=arr)
		{
			c++;
		}
	
	if(z==n)
	{
		cout<<"0";
	}
	else
	{
	cout<<c;
	}
	return 0;
}