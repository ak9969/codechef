    #include <iostream>
    using namespace std;
    int main()
     {
        int n;
        cin>>n;
        while(n--)
        {
          int c,d;
          cin>>c>>d;
          int ans;
          ans=c*(d-1)+d*(c-1);
          cout<<ans<<"\n";
        }
        return 0;
     }  