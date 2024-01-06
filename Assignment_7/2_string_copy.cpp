#include<iostream>
using namespace std;
void strCopy(char dest[], char src[]){
        cout<<"Copied string is: ";
        for(int i=0;src[i]!='\0';i++){
        dest[i]=src[i];
        cout<<dest[i];
    }

}
int main(){
    char src[100],dest[100];
    cout<<"Enter a string to copy\n";
    cin>>src;
    strCopy(dest,src);
    return 0;
}
