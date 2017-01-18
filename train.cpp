#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int b,d;
	while(n--)
	{
		cin>>b;
		d=b%8;
		if(b%8==1||b%8==4)
		{
			if(d==1)
			{
				cout<<(b+3)<<"LB\n";
			}	
			else 
			{
				cout<<(b-3)<<"LB\n";
			}
			
		}
		else if(b%8==2||b%8==5)
		{
			if(d==2)
			{
				cout<<(b+3)<<"MB\n";
			}
			else
			{
				cout<<(b-3)<<"MB\n";
			}

		}
		else if(b%8==3||b%8==6)
		{
			if(d==3)
			{
				cout<<(b+3)<<"UB\n";
			}
			else
			{
				cout<<(b-3)<<"UB\n";
			}

		}
		else
		{
			if(d==7)
			{
				cout<<(b+1)<<"SU\n";
			}
			else
			{
				cout<<(b-1)<<"SL\n";
			}
		}

	}
	return 0;
}