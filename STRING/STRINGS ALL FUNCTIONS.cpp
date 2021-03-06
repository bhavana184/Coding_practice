#include<iostream>
#include<string>
using namespace std;
 bool IsVowel(char ch) 
{ 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'); 
}
int main(){
    
   /* 
    char s1[4]={'c','a','t','\0'};
    cout<<"s1: "<<s1<<endl;
    
    char s2[]={'b','a','t','\0'};
    cout<<"s2: "<<s2<<endl;
    
    char s3[4]="pat";
    cout<<"s3: "<<s3<<endl;
    */
   /* 
    char s4[10];
    cin>>s4;
    cout<<"s4: "<<s4<<endl;
    */
    /*
    char s5[6];
    cin.get(s5,6);
    cout<<"s5: "<<s5<<endl;
    */
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    cout<<"s1: "<<s1<<endl<<"s2: "<<s2<<endl<<"s3: "<<s3<<endl;
    
    cout<<"s1,s2: "<<s1<<","<<s2<<endl;
    //APPEND
    cout<<"s1.append(s2): "<<s1.append(s2)<<endl;
    
    //ASSIGN FUNCTION
    cout<<"s2.assign(s3): "<<s2.assign(s3)<<endl;
 //assigns a new value to the string, replacing its current contents.
    cout<<"s2.assign(s3,1,2): "<<s2.assign(s3,1,2)<<endl;
    // Assigns 2 characters from  index 1 of s3 to s2
    s2.assign("GeeksforGeeks"); //assign a string to s2
    cout<<"s2 after s2.assign(\"GeeksforGeeks\"): "<<s2<<endl;//to display quote we need to add \ before it 
    s2.assign("GeeksforGeeks",5);//assign first 5 characters of given string to s2
    cout<<"s2 after s2.assign(\"GeeksforGeeks\",5): "<<s2<<endl;
    s2.assign(10,'x');//assigning 10 occurences of x to s2
     cout<<"s2 after s2.assign(10,'x'): "<<s2<<endl;
    s2.assign(s3.begin()+2, s3.end()); 
    cout<<"s2 after s2.assign(s3.begin()+2, s3.end()): "<<s2<<endl;
    
    //EXTRACT CHARACTER FROM A SPECIFIED POSITION IN STRING 
    //AT FUNCTION
    cout<<"s1.at(2): "<<s1.at(2)<<endl;
    cout<<"s1[2]: "<<s1[2]<<endl;
    
    //CAPACITY -returns total element that can be stored
    cout<<"s1.capacity(): "<<s1.capacity()<<endl;
    
    //LENGTH-gives the number of elements in a string
    cout<<"s1.length(): "<<s1.length()<<endl;
    //SIZE- gives the number of characters in the string
    cout<<"s1.size(): "<<s1.size()<<endl;
    
    //COMPARE -compares two string
    //<0 if s1 is smaller than s2
    //>0 if s1 is greater than s2
    //=0 if s1=s2
    cout<<"s1.compare(s2): "<<s1.compare(s2)<<endl;
    cout<<"s1.compare(\"Bhavanais\"): "<<s1.compare("Bhavanais")<<endl;
    cout<<"s1.compare(\"Bhavana\"): "<<s1.compare("Bhavana")<<endl;
    cout<<"s1.compare(\"is\"): "<<s1.compare("is")<<endl;
    
    //EMPTY function - 0 for false,1 for true
    cout<<"s1.empty(): "<<s1.empty()<<endl;
    
    //ERASE FUNCTION
    s1.erase();
    cout<<"s1.erase(): "<<s1<<endl;
    cout<<"s1.empty(): "<<s1.empty()<<endl;//1 for true
    
    cout<<"s1.assign(\"Bhavana\"): "<<s1.assign("Bhavana")<<endl;
    s1.erase(3);//erase all character from index 3 to end
    cout<<"s1.erase(3): "<<s1<<endl;
    
    cout<<"s1.assign(\"Bhavana\"): "<<s1.assign("Bhavana")<<endl;
    s1.erase(2,3);//erase 3 character from index 2
    cout<<"s1.erase(2,3): "<<s1<<endl;
    
    cout<<"s1.assign(\"Bhavana\"): "<<s1.assign("Bhavana")<<endl;
    s1.erase(s1.begin()+3);//erase 3rd character from beginning
    cout<<"s1.erase(s1.begin()+3): "<<s1<<endl;
    
    cout<<"s1.assign(\"Bhavana\"): "<<s1.assign("Bhavana")<<endl;
    s1.erase(s1.begin()+3,s1.end()-1);//erase index 3 to index 1 less than end
    cout<<"s1.erase(s1.begin()+3,s1.end()-1): "<<s1<<endl;
    
   //FIND FUNCTION -used to find the first occurrence of sub-string in the specified string being called upon 
    //The function returns the index of the first occurrence of sub-string, if the sub-string is not found it returns string::npos
    string str="geeksforgeeks",str1="geeks",str2="bhav";
    int found=str.find(str1);
if(found!=string::npos) cout<<"str.find(str1): "<<found<<endl;//FIND FIST OCCURENCE OF g
    //FIND NEXT OCCURENCE OF g
    found=str.find(str1,found+1);
    if(found!=string::npos) cout<<"str.find(str1,found+1): "<<found<<endl;
    int found1=str.find("for");
    if(found1!=string::npos) cout<<"str.find(\"for\"): "<<found1<<endl;
    int found2=str.find("e");
    if(found1!=string::npos) cout<<"str.find(\"e\"): "<<found2<<endl;
    int found3=str.find("y");
    if(found3!=string::npos) cout<<"str.find(\"y\"): "<<found3<<endl;
    else cout<<"str.find(\"y\"): "<<"NOT FOUND"<<endl;
    
    int found4=str.find("geeks",5);//search geeks from index 5
    if(found4!=string::npos) cout<<"str.find(\"geeks\",5): "<<found4<<endl;
    else cout<<"str.find(\"geeks\",5): "<<"NOT FOUND"<<endl;
    
    int found5=str.find("geeks.practice",0,5);//searches for first 5 characters  of given string in str(searching starts in str from index 0)
    if(found5!=string::npos) cout<<"str.find(\"geeks.practice\",0,5): "<<found5<<endl;
    else cout<<"str.find(\"geeks.practice\",0,5): "<<"NOT FOUND"<<endl;
    cout<<"str: "<<str<<endl;
     int found6=str.find("geeks.practice",5,5);//searches for first 5 characters of geeks .practice in str from index 5 in str(searching starts from index 5 in str)
    if(found6!=string::npos) cout<<"str.find(\"geeks.practice\",5,5): "<<found6<<endl;
    else cout<<"str.find(\"geeks.practice\",5,5): "<<"NOT FOUND"<<endl;
    int found7=str.find("geeks.practice",0,7);
    if(found7!=string::npos) cout<<"str.find(\"geeks.practice\",0,7): "<<found7<<endl;
    else cout<<"str.find(\"geeks.practice\",0,7): "<<"NOT FOUND"<<endl;
    int found8=str.find("geeks.practice",9,5);//searches for first 5 characters of geeks .practice in str from index 9 in str(searching starts from index 9 in str)
    if(found8!=string::npos) cout<<"str.find(\"geeks.practice\",9,5): "<<found8<<endl;
    else cout<<"str.find(\"geeks.practice\",9,5): "<<"NOT FOUND"<<endl;
    
    //INSERT FUNCTION
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.insert(6, str2); // Inserts str2 in str starting from 6th index of str 
    cout<<"str.insert(6,str2): "<<str<<endl;
    
    // Inserts 2 characters from index number 1 of str2 at index number 5 of str1 
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.insert(5, str2, 1, 2); 
    cout<<"str.insert(5, str2, 1, 2): "<<str<<endl;
    
    //Inserts are at 5th index of str
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.insert(5,"are"); 
    cout<<"str.insert(5, \"are\"): "<<str<<endl;
    
    //Inserts 2 character from are at 5th index of str
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.insert(5,"are",2); 
    cout<<"str.insert(5, \"are\",2): "<<str<<endl;
    
    //Inserts 2 occurences of $ at 5th index of str
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.insert(5,2,'$'); 
    cout<<"str.insert(5, 2,'$'): "<<str<<endl;
    
    // Inserts 2 occurrences of '$' at position str.begin() + 5  - USING ITERATOR
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.insert(str.begin() + 5, 2, '$'); 
    cout<<"str.insert(str.begin() +5, 2,'$'): "<<str<<endl;
    
    // Inserts '$' at position str.begin() + 5  - USING ITERATOR
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.insert(str.begin() + 5,'$'); 
    cout<<"str.insert(str.begin() +5,'$'): "<<str<<endl;

    
    // Inserts str2.begin() + 1 ,  str2.end() - 1 at position str.begin() + 5
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.insert(str.begin() + 5, str2.begin() + 1 ,  str2.end()-1); 
    cout<<"str.insert(str.begin() + 5, str2.begin() + 1 ,  str2.end() - 1): "<<str<<endl;
    
    //REPLACE FUNCTION
    // Replaces 2 characters from 5th index in str by str2
    str="geeksforgeeks",str2="PAPA";
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.replace(5, 2, str2); 
    cout<<"str.replace(5,2,str2): "<<str<<endl;
    
// Replaces 2 characters from 5th index of str with 2 characters from index1 of str2 
    str="geeksforgeeks",str2="PAPA";
    cout<<"str: "<<str<<endl<<"str2: "<<str2<<endl;
    str.replace(5, 2, str2, 1, 2); 
    cout<<"str.replace(5,2,str2,1,2): "<<str<<endl;
    
// Replaces 2 characters from 5th index of str with 2 characters from given string 
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    str.replace(5, 2,"EVERY", 2); 
    cout<<"str.replace(5,2,\"EVERY\",2): "<<str<<endl;
    
// Replaces 2 character from 5th  index of s4 with '!' 3 times 
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    str.replace(5, 2, 3, '!'); 
    cout<<"str.replace(5,2,3,'!'): "<<str<<endl;
    
//REPLACE_IF 
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    //replace all vowels of str with P
   // replace_if(str.begin(), str.end(), IsVowel, 'P');
    //cout<<"replace_if(str.begin(), str.end(), 'P'): "<<str<<endl;
    
    //RESIZE
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    str.resize(5);
    cout<<"str after str.resize(5): "<<str<<endl;
    
    //SWAP FUNCTION - swap one string with other
    str="geeksforgeeks",str2="PAPA";
    cout<<"str: "<<str<<" , "<<"str2: "<<str2<<endl;
    str.swap(str2);
    cout<<"str after str.swap(str2): "<<str<<" , "<<"str2 after str.swap(str2): "<<str2<<endl;
    
   //COPY -copies string to character array
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    char ch[15];
    str.copy(ch,5,1);//copies 5 characters from index 1 of str to ch array
    cout<<"ch array: "<<ch<<endl;
    
    //PUSH_BACK - pushes a character to the string at the end
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    str.push_back('A');
    cout<<"str after str.push_back('A'): "<<str<<endl;
    
    //POP_BACK - pops last character from the string
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    str.pop_back();
    cout<<"str after str.pop_back(): "<<str<<endl;
    
    //FRONT-fetches first character from string
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    cout<<"str.front(): "<<str.front()<<endl;
    //BACK-fetches last character from string
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    cout<<"str.back(): "<<str.back()<<endl;
    
    //SUBSTR
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    //  substr(a, b) function returns a substring of b length starting from index a 
    cout << "str.substr(5, 3): "<<str.substr(5, 5) << endl; 
    
cout<<"str.substr(5): "<<str.substr(5)<<endl;//fetches substring from index 5 to end in str
    
    //CLEAR FUNCTIOn-emty the string
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    str.clear();
    cout<<"str after str.clear(): "<<str<<endl;
    cout<<"str.empty(): "<<str.empty()<<endl;
    
    //RFIND -finds last occurence of given string
    str="geeksforgeeks";
    cout<<"str: "<<str<<endl;
    cout<<"str.rfind(\"geeks\"): "<<str.rfind("geeks")<<endl;
    
    //CONCATENATION- + operator
    str="geeksforgeeks";str2="PAPA";
    cout<<"str: "<<str<<" , "<<"str2: "<<str2<<endl;
    str+=str2;//str=str+str2
    cout<<"str after str+=str2: "<<str;
    
    
    return 0;
}

