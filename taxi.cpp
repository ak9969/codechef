#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,b;
	int a[5]={0};
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>b;
		a[b]++;
	}
	int taxi=0, min=0;
	taxi+=a[4];
	a[4]=0;
	if(a[3] && a[1]){
		if(a[3]<=a[1]) min=a[3];
		else min=a[1];
	}
	taxi+=min;
	a[1]-=min;
	a[3]-=min;
	
	if(a[3]!=0) taxi+=a[3];
	a[3]=0;
	
	taxi+=a[2]/2;
	a[2]-=(a[2]/2)*2;
	
	if(a[2]==1){
		taxi+=1;
		a[2]=0;
		a[1]-=2;
	}
	if(a[1]>0) taxi+=ceil(a[1]/4.0);
	
	cout<<taxi;
	return 0;
}