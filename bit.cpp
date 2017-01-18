#include <iostream>
using namespace std;
int main()
{
	int n,x=0;
	cin>>n;
	while(n--)
	{
		char str[30];
		cin>>str;
		if(str[0]=='+' || str[1]=='+')
            x++;
        else if(str[0]=='-' || str[1]=='-')
            x--;	
	}
	cout<<x;
	return 0;
}