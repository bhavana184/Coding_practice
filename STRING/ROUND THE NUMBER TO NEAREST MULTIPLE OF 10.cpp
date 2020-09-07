/*https://www.geeksforgeeks.org/round-the-given-number-to-nearest-multiple-of-10/
ROUND THE NUMBER TO NEAREST MULTIPLE OF 10
Given a positive integer n, round it to nearest whole number having zero as last digit.
Examples: Input : 4722 Output : 4720
Input : 38   Output : 40
Input : 10    Output: 10
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
	cin>>n;
/*	string n1;
	getline(cin,n1);
	int n= stoi(n1);//work only if compiler is c++11 or above*/
	int res;
	if(n%10<5) res=(n/10)*10;
	else res=((n/10)*10)+10;
	cout<<res;
	return 0;
}

