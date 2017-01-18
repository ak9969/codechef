#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int l;
    char str[100],c;

    cin>>str;
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
    	c=str[i];
    	if(isupper(c)||islower(c))
    	{
    	c=tolower(c);
	    	if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='y')
	    	{
	    		cout<<"."<<c;
	    	}
    	}
    }
    return 0;
}
