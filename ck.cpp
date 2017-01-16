    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    using namespace std;
     
     
     
    int main() 
    {
    	long int a[50000],n;
    	cin>>n;
    	while(n--)
    	{
    		int sum=0;
    		for(int i=0;i<3;i++)
    		{
    			cin>>a[i];
    		}
    		
    			for(int j=1;j<=a[0];j++)
    				{
    					if(a[2]%j==0)
    					{
    						if(a[2]/j<=a[1])
    							sum++;
    					}
    				}
    			cout<<sum<<"\n";
     
    	}
     
        return 0;
    }
     