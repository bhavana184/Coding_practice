//LINEAR /SEQUENTIAL SEARCH
//TIME TAKEN:-O(n) --n=no. of elements in the array
#include<iostream>
using namespace std;

int linearsearch(int *a,int n,int x){
	int pos=-1;
	for(int i=0;i<n;i++){
		if(a[i]==x) return i;
	}
	return pos;
}
int main(){
	int n;
	cout<<"Enter your array size, n: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<"enter an element to be searched in array: ";
	int x;
	cin>>x;
	int index= linearsearch(a,n,x);
	if(index==-1) cout<<"Element "<<x<<" is not present in the array"<<endl;
	else cout<<"Element "<<x<<" is present in the array at position "<<index+1<<endl;
	return 0;
}
