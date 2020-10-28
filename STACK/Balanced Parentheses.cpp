#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	cout<<"Expression: ";
	string s;
	getline(cin,s);
	int flag=1;
	stack<char>stk;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('||s[i]=='['||s[i]=='{') stk.push(s[i]);
		if(s[i]==')' || s[i]=='}' || s[i]==']'){
			if(stk.empty()) flag=0;
			else{
				char temp=stk.top();
				stk.pop();
				if(s[i]==')' && (temp=='{'||temp=='[')) flag=0;
				if(s[i]=='}' && (temp=='('||temp=='[')) flag=0;
				if(s[i]==']' &&  (temp=='('||temp=='{')) flag=0;
			}
			
		}
	}
	if(!stk.empty()) flag=0;
	if(flag==1) cout<<"\nValid Expression";
	else cout<<"\nInvalid Expression";
	
	return 0;
}
