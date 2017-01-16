#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    while(n--)
    {
    	int cnt=0;
		cin>>m;
		int ar[1000][1000];        
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<m;j++)
				{
					cin>>ar[i][j];
				}
			}        
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<m;j++)
				{
					for(int l=i; l<m; l++)
					{
                    	for(int k=j; k<m; k++)
                    	{
                        if(ar[i][j]>ar[l][k])
                            cnt++;
                    	}
                    }
				}
			}
			cout<<cnt<<"\n";
    }
    return 0;
}
