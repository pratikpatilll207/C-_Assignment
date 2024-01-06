



#include<iostream>
using namespace std;
void toUpper(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>=97 && s[i]<=122){
           s[i]=s[i]-32;
        }
    }
    cout<<"String in uppercase is: "<<s;
}
int main(){
    char s[10];
    cout<<"Enter string in lowercase\n";
    cin>>s;
    toUpper(s);
    return 0;
}
