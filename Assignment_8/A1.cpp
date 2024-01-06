/*1. Finish the implementation of BigInt class by overloading remaining relational operators to compare two BigInt objects.
   Also write a small program to demonstrate the use of BigInt class and overloaded relational operators.
*/

#include<iostream>
using namespace std;
class BigInt{
    int num;
    public: 
    BigInt(int num2):num(num2){
    }
    bool operator>(BigInt obj2){
       if(num>obj2.num)
        return 1;

        return 0;
    }
    bool operator<(BigInt obj2){
        if(num<obj2.num){
            return 1;
        }
        return 0;
    }
    bool operator==(BigInt obj2){
        if(num==obj2.num)
        return 1;

        return 0;
    }
    

};

int main(){
    BigInt ob1(30), obj2(20);
    bool result = ob1>obj2;
    if(result == 1) cout<<"obj1>obj2 \n";
    else{
       result = ob1==(obj2);
       if(result==1) cout<<"obj1=obj2 \n";
       else{
        cout<<"obj<obj2 \n";
        
       }
    }
    cout<<endl;
    return 0;
}
