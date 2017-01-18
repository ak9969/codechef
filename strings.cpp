#include <iostream>
#include <cstring>

using namespace std;
int main()
{
	int l,l1;
	string sl;
	string sb;
	cin>>sl>>sb;
	for(int i=0;i<sl.length();i++)
	{
		if(isupper(sl[i]))
		{
			sl[i]=tolower(sl[i]);
		}
	}
	for(int i=0;i<sb.length();i++)
	{
		if(isupper(sb[i]))
		{
			sb[i]=tolower(sb[i]);
		}
	}

	if(sl.compare(sb)==0)
	{
		cout<<"0";
	}
	else if(sl.compare(sb)<0)
	{
		cout<<"-1";
	}
	else
	{
		cout<<"1";
	}

	return 0;
}