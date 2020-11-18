#include<iostream>
#include<stdlib.h>
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
	int m,n;//no. of rows and coluns in array
	cout<<"No. of rows in array: ";
	cin>>m;
	cout<<"No. of cols in array: ";
	cin>>n;
	
	int a[m][n];
	cout<<"Elements of array: ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<"\n\nElements of array, a: \n\n"; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 
	int BA=1000, w=sizeof(BA);
	
	cout<<"\n1) FINDING ADDRESS OF EACH DATA ELEMENT OF ARRAY\n";
	cout<<"Base address i.e address of first element of Array :"<<BA<<endl;
	cout<<"Size of datatype int:"<<w<<endl;
	
	int A[m][n];//containing address of corressponding elements of array a
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			A[i][j] = BA + (w*(m*(j-1)+(i-1))) ;	
		}	
	}
	cout<<"\n\nAddress of each data element(Column major order) : \n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	} 
	
		int B[m][n];//containing address of corressponding elements of array a
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			B[i][j] = BA + (w*(n*(i-1)+(j-1)));	
		}	
	}
	cout<<"\n\nAddress of each data element(Row major order) :\n ";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<B[i][j]<<" ";
		}
		cout<<endl;
	} 
	
	cout<<"\n\nINITIALISING 2D ARRAYS\n\n";
	int arr1[2][3]={10,20,30,40,50,60};
	int arr2[2][3]={{10,20,30},{40,50,60}};
	int arr3[][3]={{10,20,30},{40,50,60}};
	int arr4[2][3]={0};
	cout<<"\n\nElements of array, arr1[2][3]={10,20,30,40,50,60}: \n"; 
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\nElements of array,arr2[2][3]={{10,20,30},{40,50,60}}: \n"; 
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\nElements of array, arr3[][3]={{10,20,30},{40,50,60}}: \n"; 
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\nElements of array, arr4[2][3]={0}: \n"; 
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<arr4[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\n\nOPERATIONS ON 2D ARRAY\n1.Addition of 2matrices-arr1+arr2:\n";
	int row1=2,row2=2,col1=3,col2=3;
	if(row1!=row2 || col1!=col2){
		cout<<"\nAddition not possible, dimensions must be same\n";
		exit(0);
	}
	int row_sum=row1,col_sum=col1;
	for(int i=0;i<row_sum;i++){
		for(int j=0;j<col_sum;j++){
			cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\n2.Subtraction of 2matrices-arr1-arr2:\n";
	if(row1!=row2 || col1!=col2){
	cout<<"\nSubtraction not possible, dimensions must be same\n";
	exit(0);	
	}
	for(int i=0;i<row_sum;i++){
		for(int j=0;j<col_sum;j++){
			cout<<arr1[i][j]-arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\n3.Transpose of matrix-arr1:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cout<<arr1[j][i]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\n4.Multiplication of 2matrices-mat1*mat2:\n";
	int r1,c1,r2,c2;//no. of rows and coluns in array
	cout<<"No. of rows in array-mat1: ";
	cin>>r1;
	cout<<"No. of cols in array-mat1: ";
	cin>>c1;
	cout<<"No. of rows in array-mat2: ";
	cin>>r2;
	cout<<"No. of cols in array-mat2: ";
	cin>>c2;
	int mat1[r1][c1],mat2[r2][c2];
	cout<<"Elements of array-mat1: ";
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cin>>mat1[i][j];
		}
	}
	cout<<"Elements of array-mat2: ";
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cin>>mat2[i][j];
		}
	}
	cout<<"\n\nElements of array, mat1: \n"; 
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n\nElements of array, mat2: \n"; 
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			cout<<mat2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nTWO MATRICES- mat1(r1*c1) and mat2(r2*c2) can be multiplied only if c1=r2, Dimension of product matrix is r1*c2\n";
	if(c1!=r2){
		cout<<"\nMultiplication not possible\n";exit(0);
	}
//	int row_mul=m,col_mul=col2;
//	int mul[row_mul][col_mul];
	/*for(int i=0;i<row_mul;i++){
		for(int j=0;j<col_mul;j++){
				mul[i][j]=0;
			for(int k=0;k<col_mul;k++)
				mul[i][j]+=a[i][k]*arr2[k][j];
		}
	}*/
int res_rows=r1,res_cols=c2;
int res[res_rows][res_cols]={0};
for(int i=0;i<res_rows;i++)
{
for(int j=0;j<res_cols;j++)
{
	//res[i][j]=0;
	for(int k=0; k<c1;k++)//walk through columns of matrix1
		res[i][j] += mat1[i][k] * mat2[k][j];
}
}
	for(int i=0;i<res_rows;i++){
		for(int j=0;j<res_cols;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
