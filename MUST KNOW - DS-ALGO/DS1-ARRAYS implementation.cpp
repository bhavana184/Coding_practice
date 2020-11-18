#include<iostream>
using namespace std;

void Insert(int *b,int len,int val,int pos){
	len++;
	for(int i=len-1;i>pos;i--){
		b[i]=b[i-1];
	}
	b[pos]=val;
	cout<<"\nNew array b: ";
	for(int i=0;i<len;i++)cout<<b[i]<<" ";
}
void Delete(int *b,int len,int pos1){
	for(int i=pos1;i<len;i++){
		b[i]=b[i+1];
	}
	len--;
	cout<<"\nNew array b: ";
	for(int i=0;i<len;i++)cout<<b[i]<<" ";
}
int main(){
	int n;//no. of elements in array
	cout<<"No. of elements in array: ";
	cin>>n;
	
	int a[n];
	cout<<"Elements of array: ";
	for(int i=0;i<n;i++) cin>>a[i];
	
	int BA=0, w=sizeof(BA);
	
	cout<<"\n1) FINDING ADDRESS OF EACH DATA ELEMENT OF ARRAY\n";
	cout<<"Base address i.e address of first element of Array :"<<BA<<endl;
	cout<<"Size of datatype int:"<<w<<endl;
	
	int A[n];//containing address of corressponding elements of array a
	int lower_bound=0;//index of first element
	for(int i=0;i<n;i++){
		A[i] = BA + w*(i-lower_bound);
	}
	cout<<"Address of each data element : ";
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
	int upper_bound=n-1;//index of last element
	cout<<"\n\n2) FINDING LENGTH OF ARRAY\nlength of array using upper and lower bound: "<<upper_bound-lower_bound+1<<endl;
	
	cout<<"\n\nOPERATIONS ON ARRAY\n\n";
	cout<<"\n1)TRAVERSING AN ARRAY\n";
	int b[5]={5,4,3,2,1};
	cout<<"\nElements of array b: ";
	for(int i=0;i<5;i++)cout<<b[i]<<" ";
	cout<<"\n\n2-a)INSERTING AN ELEMENT INTO ARRAY (at end)\n";
	
	int ele;
	cout<<"Element to insert: "; cin>>ele;
	int lower_bound_b=0,upper_bound_b=4;
	upper_bound_b=upper_bound_b + 1;
	b[upper_bound_b]=ele;
	int len=upper_bound_b-lower_bound_b+1;
	cout<<"\nNew array b: ";
	for(int i=0;i<len;i++)cout<<b[i]<<" ";
	
	cout<<"\n\n2-b)INSERTING AN ELEMENT INTO ARRAY (in middle)\n";
	cout<<"Value to be inserted: ";
	int val;cin>>val;
	cout<<"Position at which it should be inserted: ";
	int pos; cin>>pos;
	Insert(b,len,val,pos);
	
	cout<<"\n\n3-a)DELETING AN ELEMENT FROM ARRAY (From end)\n";
	len--;
	cout<<"\nNew array b: ";
	for(int i=0;i<len;i++)cout<<b[i]<<" ";
	
	cout<<"\n\n3-b)DELETING AN ELEMENT FROM ARRAY (From middle)\n";
	//cout<<"Value to be deleted: ";
	//int val1;cin>>val;
	cout<<"Position from where value should be deleted: ";
	int pos1; cin>>pos1;
	Delete(b,len,pos1);
	
	cout<<"\n\n4) MERGE TWO ARRAYS\n";
	int lenc=n+len;
	cout<<"length of array ,a (n): "<<n<<" length of array ,b (len): "<<len<<endl;
	cout<<"\nLength of merged array,c(lenc) :"<<lenc<<endl;
	int c[lenc];
	int index=0;
	for(int i=0;i<n;i++) {
		c[index]=a[i];
		if(index<lenc)index++;	
	}
	for(int i=0;i<len;i++){
		c[index]=b[i];
		if(index<lenc)index++;
	}
	cout<<"\nMerged array c: ";
	for(int i=0;i<lenc;i++)cout<<c[i]<<" ";
	cout<<"\n\nOTHER OPERATIONS:-SEARCHING, SORTING, MERGING 2 ARRAYS-in sorted order(as in merge sort)";
	return 0;
}
