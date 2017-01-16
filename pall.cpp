#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n,l;
    cin>>n;
    while(n--)
    {
        int flag=0;
        char a[100000];
        cin>>a;
        l=strlen(a);
        for(int i=0;i<l;i++)
        {
            if(a[i]!=a[l-i-1])
            {
                flag=1;
            }
        }
        if(flag>=1)
        {
            cout<<"NO\n";
        }
        else 
        {
            cout<<"YES";
                if(l%2==0)
                {
                    cout<<" EVEN\n";

                }
                else 
                {
                    cout<<" ODD\n";
                }
        }
    }
    return 0;
}
