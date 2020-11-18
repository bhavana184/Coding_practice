//TIME TAKEN:-O(n^2) --n=no. of elements in the array
//Move key to its correct position
#include<iostream>
using namespace std;

void InsertionSort(int *a, int n){
	int j,key;
	for(int i=1;i<n;i++){
		key=a[i];
		j=i-1;
		/* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
		while(j>=0 && a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}
int main(){
	int n;
	cout<<"Enter your array size, n: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<"Array after sorting(using insertion sort): ";
	InsertionSort(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
