#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n,l;
	cin>>n;
	while(n--)
	{
		char str[105];
		cin>>str;
		l=strlen(str);
		{
			if(l<=10)
			{
				cout<<str<<"\n";
			}
			else
			{
				cout<<str[0]<<(l-2)<<str[l-1]<<"\n";
			}
		}
	}
	// your code goes here
	return 0;
}