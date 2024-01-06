#include<iostream>
using namespace std;
bool compare(char s1[],char s2[]){
    if(s1==s2){
        return true;
    }
    else{
       return false;
    }
}
int main(){
    char s1[10],s2[10];
    cout<<"Enter first string\n";
    cin>>s1;
    cout<<"Enter second string to compare\n";
    cin>>s2;
    int s=compare(s1,s2);
    if(s==1)
        cout<<"strings are equal";
    else
        cout<<"Strings are not equal";
    return 0;
}
