#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n;
	int c=1;
	cin>>n;
	for(int i=0;i<n.length();i++)
	{
		if(n[i]==n[i+1])
		{
			c++;
			if(c==7)
			{
				cout<<"Yes";
				break;
			}

		}
		else if(n[i]!=n[i+1])
		{
			c=1;
		}
	}
	if(c<7)
	{
		cout<<"No";
	}
	return 0;
}