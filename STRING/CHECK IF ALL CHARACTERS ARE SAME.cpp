//https://www.geeksforgeeks.org/quick-way-check-characters-string/
/*QUICK WAY TO CHECK IF ALL THE CHARACTERS OF THE STRING ARE SAME*/
/*Given a string, check if all the characters of the string are same or not.
Examples:Input : s = "geeks"    Output : No
Input : s = "gggg"     Output : Yes*/

#include<iostream>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	int flag=1;
	for(int i=1;i<str.length();i++){
		if(str[i]!=str[0]) {flag=0;break;}
	}
	if(flag==0) cout<<"No";
	else cout<<"Yes";
	return 0;
}

