#include<iostream>
using namespace std;
int strLen(char s[]){
    int count=0,i=0;
    while(s[i]){
        count++;
        i++;
    }
    return count;
}
int main(){
    char s[100];
    cout<<"Enter a string\n";
    cin>>s;
    int len=strLen(s);
    cout<<"Length of the string is "<<len;
    return 0;
}
