    #include <iostream>
    #include <algorithm>
    #include <cmath>
    using namespace std;
    long int gcd(long long int a,long long int b){
        if(b==0)
        return a;
        else
        return gcd(b,a%b);
    }
     
    int main() {
    	int m,n;
    	cin>>m;
    	while(m--){
    	    cin>>n;
    	
    	long long int a[n];
    	long long int mini = pow(10,18);
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	
         for(int i=0;i<n;i++)
         for(int j=i+1;j<n;j++)
              mini=min(mini,a[i]*a[j]/gcd(a[i],a[j]));
       
       