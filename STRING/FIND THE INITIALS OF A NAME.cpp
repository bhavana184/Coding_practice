//https://www.geeksforgeeks.org/program-find-initials-name/
/*FIND THE INITIALS OF A NAME
Given a string name, we have to find the initials of the name
Examples:
Input  : prabhat kumar singh   Output : P K S   We take the first letter of all words and print in capital letter.
Input  : Jude Law  Output : J L
Input  : abhishek kumar singh    Output : A K S
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);//(char)
	cout<<(char)toupper(s[0])<<" ";
	for(int i=1;i<s.length();i++){
		if(s[i]==' ') cout<<(char)toupper(s[i+1])<<" ";
	}
	
	return 0;
	
}

