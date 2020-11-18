//TIME TAKEN:-O(n^2) --n=no. of elements in the array
#include<iostream>
using namespace std;


void SelectionSort(int *a, int n){
	/*
	DESCENDING ORDER SORTING
	int max_index;//index of maximum element of array
	for(int i=0;i<n;i++){
		max_index=i;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[max_index]) max_index=j;
		}
		//swap(a[max_index],a[i])
		int temp=a[max_index];
		a[max_index]=a[i];
		a[i]=temp;
	
	}
	*/
	//ASCENDING ORDER SORTING
	int min_index;//index of maximum element of array
	for(int i=0;i<n;i++){
		min_index=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_index]) min_index=j;
		}
		//swap(a[min_index],a[i])
		int temp=a[min_index];
		a[min_index]=a[i];
		a[i]=temp;
	
	}
}
int main(){
	int n;
	cout<<"Enter your array size, n: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<"Array after sorting(using selection sort): ";
	SelectionSort(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
