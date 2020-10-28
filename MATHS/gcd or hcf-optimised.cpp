#include<iostream>
using namespace std;

int euclid_gcd(int a,int b){
	
	int dividend=(a>=b)?a:b; //or a
	int divisor=(a<=b)?a:b;//or b
	int remainder;
	while(divisor!=0){
		remainder=dividend % divisor;
		dividend=divisor;
		divisor=remainder;
	}
	return dividend;
}
int main(){
	int a,b;
	cin>>a>>b;
	int gcd=euclid_gcd(a,b);
	cout<<gcd;
	cout<<"\n time taken: O(log(smallest of a & b)";
	return 0;
}
