//TIME TAKEN:-O(n^2) --n=no. of elements in the array
#include<iostream>
using namespace std;

void BubbleSort(int *a, int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			//swap(a[i],a[j])
		}
	}
}
int main(){
	int n;
	cout<<"Enter your array size, n: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<"Array after sorting(using bubble sort): ";
	BubbleSort(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
