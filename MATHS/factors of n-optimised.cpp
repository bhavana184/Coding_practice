#include<iostream>
#include<math.h>
#include<set>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<"factors of "<<n<<": ";
	set<int>factors;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			factors.insert(i);
			if(i!=sqrt(n)) factors.insert(n/i);
		}
	}
	set<int>::iterator it;
	for(it=factors.begin();it!=factors.end();it++){
		cout<<*it<<" ";
	}
	cout<<"\ntime taken=o(sqrt(n))";
	return 0;
}
