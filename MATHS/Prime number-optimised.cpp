#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<"Prime no.s from 1 to "<<n<<": ";
	int prime[n+1];
	for(int i=0;i<=n;i++) prime[i]=1;
	prime[0]=0;
	prime[1]=0;
	for(int i=2; i<=sqrt(n); i++){
		if(prime[i]==1){
			for(int j=2;i*j<=n;j++)
				prime[i*j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		if(prime[i]==1) cout<<i<<" ";
	}
	cout<<endl;
	cout<<"Method used: Sieve of Eratatosthenes; Time taken:O(n* loglogn) ";
	return 0;
}
