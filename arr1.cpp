#include <iostream>
using namespace std;

int main()
{
    long int n,i;
    cin>>n;
    int a[100000],b[100000],c[100000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]=a[i]+b[i];
        cout<<c[i]<<" ";
    }
    
    return 0;
}
