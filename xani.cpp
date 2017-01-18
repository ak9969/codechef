#include <iostream>
#include <string>
using namespace std;
int main()
{
	int c=0,a=0,b=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			c++;
		}
		else if(s[i]=='2')
		{
			a++;

		}
		else if(s[i]=='3')
		{
			b++;
		}
	}
	for(int ci=0;ci<c;ci++)
	{	 if(a==0&&b==0)
		{
			
				for(int ci=0;ci<c-1;ci++)
				{
					cout<<"1+";
				}
				cout<<"1";
				break;
			
		}	
		else
		cout<<"1+";
	}
	for(int bi=0;bi<a;bi++)
	{
		if(c==0)
		{
			for(int bi=0;bi<a-1;bi++)
			{
				cout<<"2+";
			}
			cout<<"2";
			break;

		}
		else
		cout<<"2+";
	}
	for(int ai=0;ai<b;ai++)
	{	
		for(int ai=0;ai<b-1;ai++)
		{
		cout<<"3+";
		}
		ai=b-1;
		cout<<"3";

	}


	return 0;
}