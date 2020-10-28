#include<iostream>
using namespace std;

int gcd(int a, int b){
	
	int dividend=(a>=b)?a:b;
	int divisor=(a<=b)?a:b;
	while(divisor!=0){
		int remainder=dividend%divisor;
		dividend=divisor;
		divisor=remainder;
	}
	return dividend;
}

int main(){
	int n;
	cin>>n;//no. of elements inj the array
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
/*	int lcm[n];
	lcm[0] = a[0];
	for(int i=1;i<n;i++){
		lcm[i]=(a[i]*a[i-1]) /gcd(lcm[i-1],a[i]);
	}
	for(int i=0;i<n;i++) cout<<lcm[i]<<" ";
	cout<<endl;
	cout<<lcm[n-1];*/
	int ans=a[0], gcdAns=a[0];
	for(int i=1;i<n;i++) {
		ans= (ans * a[i]) /gcd(ans,a[i]);
		gcdAns=gcd(gcdAns,a[i]);
	}
	cout<<"LCM: "<<ans<<"\n GCD: "<<gcdAns;
	return 0;
}
