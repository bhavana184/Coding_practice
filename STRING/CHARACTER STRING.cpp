#include<string.h>
using namespace std;

int main(){
    //STRCPY
    //This function only works with C style strings and not C++ style strings i.e. it only works with strings of type char str[]; and not string s1
    char str[]="geeksforgeeks";
    char str1[20];
    cout<<"str: "<<str<<endl;
    strcpy(str1,str);
    cout<<"str1 after strcpy(str1,str):"<<str1<<endl;
    return 0;
}
