//TIME TAKEN:-O(nlogn) --n=no. of elements in the array
//Not inplace algo; space=O(n)
#include<iostream>
using namespace std;

void Merge(int *left,int nL, int *right,int nR, int *a ,int n){
	int i,j,k;
	i=j=k=0;
	while(i<nL && j<nR){
		
		if(left[i]<=right[j]){
			a[k]=left[i];
			i++;
		}else{
			a[k]=right[j];
			j++;
		}
		k++;
	}
	//right subarray is over
	while(i<nL){
		a[k]=left[i]; 
		i++;
		k++;
	}
	//left subarray is over
	while(j<nR){
		a[k]=right[j];
		j++;
		k++;
	}
	
}

void MergeSort(int *a,int n){
	if(n<2)return;//single element is always sorted
	
	//2 or more than 2 elements, divide array into two haves
	int mid=n/2;
	int nL=mid;int nR=n-mid;
	int left[mid], right[n-mid];//2 subarrays
	
	int i;
	for(i=0;i<mid;i++) left[i]=a[i]; //left subarray
	for(i=mid;i<n;i++) right[i-mid]=a[i];//right subarray
	
	//SORTING
	MergeSort(left,nL);//sort 1st half
	MergeSort(right,nR);//sort 2nd half
	Merge(left,nL,right,nR,a,n);
	

}
int main(){
	int n;
	cout<<"Enter your array size, n: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<"Array after sorting(using merge sort): ";
	MergeSort(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
