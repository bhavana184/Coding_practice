#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<"Prime factors of "<<n<<" are:";
	for(int i=2;i<=sqrt(n);i++){
		int count=0;
		while(n%i==0){
			count++;
			n=n/i;
		}
		if(count>0)
			cout<<i<<"^"<<count<<" X ";
	}
	if(n!=1) cout<<n<<"^1";
	cout<<"\ntime taken: O(sqrt(n))";
	return 0;
}
