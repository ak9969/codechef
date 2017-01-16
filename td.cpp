    #include <iostream>
    #include <string.h>
     
    using namespace std;
    int b[50];
    char name[50];
     
     
    int main()
    {
    	int n,a;
    	
    	cin>>n;
    	while(n--)
    	{
    		cin>>a>>name;
    		for(int i=0;i<a;i++)
    		{
    			cin>>b[i];
    		}
    		if(a==1&&b[0]%2==0&&name[1]=='e')
    		{
    			cout<<"Dee\n";
    		}
    		else
    		{
    		cout<<"Dum\n"; 
    		}
    	}	
    return 0;
    } 