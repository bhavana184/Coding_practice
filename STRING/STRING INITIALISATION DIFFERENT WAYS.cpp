#include<bits/stdc++.h>
using namespace std;

int main(){
    // various constructor of string class 
  
    // initialization by raw string 
    string str1("geeksforgeeks"); 
  
    // initialization by another string 
    string str2(str1); 
  
    // initialization by character with number of occurrence =5
    string str3(5, '#'); 
  
    // initialization by part of another string 
    string str4(str1, 6, 5); //    5 characters from 6th index of str1
  
    // initialization by part of another string : iteartor version 
    string str5(str2.begin(), str2.begin() + 5); 
  
    cout <<"str1: "<< str1 << endl; 
    cout <<"str2: "<< str2 << endl; 
    cout <<"str3: "<< str3 << endl; 
    cout <<"str4: "<< str4 << endl; 
    cout <<"str5: "<< str5 << endl; 
  
    //  assignment operator 
    string str6 = str4; 
   cout<<"str6 : "<<str6<<endl; 
    return 0;
}

