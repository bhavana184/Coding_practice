/*https://www.geeksforgeeks.org/check-whether-number-duck-number-not/
A Duck number is a positive number which has zeroes present in it, For example 3210, 8050896, 70709 are all Duck numbers. Please note that a numbers with only leading 0s is not considered as Duck Number. For example, numbers like 035 or 0012 are not considered as Duck Numbers. A number like 01203 is considered as Duck because there is a non-leading 0 present in it.
Examples :
Input : 707069   Output : It is a duck number.   Explanation: 707069 does not contains zeros at the beginning.
Input : 02364  Output : It is not a duck number.  Explanation: in 02364 there is a zero at the beginning of the number.
*/

#include<iostream>
#include<string>
using namespace std;


void check_DuckNo(string s){
//IGNORE LEADING ZEROS
//COUNT ZEROS IN BETWEEN 
bool flag=false;
int n=s.length();
int i=0;
while(i<n && s[i]=='0') i++;
//check remaining digits
while(i<n){
	if(s[i]=='0') {flag=true;break;}
	i++;
}
if(flag==true) cout<<"I AM A DUCK NUMBER";
else cout<<"I AM NOT A DUCK NUMBER";
}
int main(){
	string s;
	getline(cin,s);
	
	check_DuckNo(s);
	return 0;
}
