//TIME TAKEN:-O(nlogn) --n=no. of elements in the array
//Practical choice for efficient sorting algo; in worst case it takes o(n^2) but that is improved by using randomised quick sort which takes o(nlogn) 
//sort function in most language libraries uses quick sort.
//inplace sorting algo
#include<iostream>
using namespace std;

//procedure where we select a pivot and place it in such a way that all elements less than pivot is in left of it, and element greater than it is in right
//we select last element as pivot
int partition(int *a, int start, int end){
//returns index of pivot
	int pivot=a[end];
	int p_index=start;
	
	for(int i=start;i<end;i++){ //since a[end] is pivot , so loop runs fom 0 to end-1
		if(a[i]<=pivot){
			//swap a[i], a[p_index] i.e pivot
			int temp=a[i];
			a[i]=a[p_index];
			a[p_index]=temp;
			
			p_index++;
		}
	}
	//after this loop ,we have all elements less than pivot to its left; elements greater than pivot and the pivot itself in right(pivot is still at last)
	//move pivot to correct position ; so that to its left is element less than it , to its right, element greater than it
	//swap a[p_index],a[end]
			int temp=a[p_index];
			a[p_index]=a[end];
			a[end]=temp;
	//proper partitioning done
	
	return p_index;
	
}
void QuickSort(int *a, int start, int end){

	//if(start>=end)return;//start=end handles when there is single element in array; start>end handles when segment is invalid; return means to exit
	//above way or running the statements only when start<end; both means same
	if(start<end){
	
	int p_index=partition(a,start,end);//partition index
	
	QuickSort(a,start,p_index-1);//sort left of partition index(i.e pivot)
	QuickSort(a,p_index+1,end);//sort right of partition index(i.e pivot)
	
	}
}
int main(){
	int n;
	cout<<"Enter your array size, n: ";
	cin>>n;
	int a[n];
	cout<<"Enter elements of array: ";
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<"Array after sorting(using quick sort): ";
	QuickSort(a,0,n-1);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
