        #include <iostream>
        using namespace std;
         
        int main() {
        	// your code goes here
        	int t;
        	long int c,d,l;
        	cin>>t;
        	for(int i=0;i<t;i++){
        	    cin>>c>>d>>l;
        	    if(l%4==0){
        	        if(c-(2*d)>=0){
        	            if((l/4)>=(c-d)&&(l/4)<=(c+d)){
        	            cout<<"yes";
        	        }
        	        else{
        	        cout<<"no";
        	        }
        	    }
        	    else if(l/4>=d&&(l/4)<=(c+d)){
        	    cout<<"yes";
        	    } 
        	    else{
        	        cout<<"no";
        	    }
        	}
        	else{
        cout<<"no";
        	}
        	cout<<"\n";
        	}
        	return 0;
        }  