#include<iostream>
using namespace std;
void toLower(char s[]){
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=96){
           s[i]=s[i]+32;
        }
    }
    cout<<"String in lowercase is: "<<s;
}
int main(){
    char s[10];
    cout<<"Enter string in uppercase\n";
    cin>>s;
    toLower(s);
    return 0;
}
