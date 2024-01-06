/*3. Design (define what all constructors, member functions and operator functions to overload relational operators) and implement them.
   Also write a small program to demonstrate the use of String class and overloaded relational operators.
*/

#include<iostream>
#include<string.h>
using namespace std;

class String{
    char str[100];

    public:
        String(const char str1[100]){
            int i;
            for(i=0; str1[i]!='\0';i++)
                str[i]=str1[i];
           str[i]='\0';

        }
        void display(){
            cout<<"string is   : "<<str<<endl;
        }
        bool operator==(String obj2){
            
            int result =0;
            for( int i=0; (str[i]!='\0')||(obj2.str[i]!='\0'); i++){
                if(str[i]==obj2.str[i])
                result=1;

                else
                result=0;
            }
            
           return result;
        }  

};

int main(){
    String obj1( "hello Ram" ),obj2( "hello world" );

    obj1.display();
    obj2.display();

    bool result = obj1==obj2;

    if(result==true) cout<<"both equal";

    else cout<<"both different";

    return 0;
}

