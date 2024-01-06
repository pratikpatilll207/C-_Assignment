/*1. In BigInt class overload following operators:
   Binary operators + - * / to work with
   - both operands of type BigInt
   - one BigInt operand and one int
   Unary operators ++ and -- in both pre and post form.
   Also write a small program to demonstrate the use of BigInt class and overloaded operators.
*/
#include<iostream>
using namespace std;
class BigInt 
{
    int n;
public:
    BigInt():n(5)
    {}
    BigInt(int m):n(m)
    {}
    BigInt operator+(BigInt obj)
    {
        return (n+obj.n);
    }
    BigInt operator-(BigInt obj)
    {
        return (n-obj.n);
    }
    BigInt operator*(BigInt obj)
    {
        return (n*obj.n);
    }
    BigInt operator/(BigInt obj)
    {
        return (n/obj.n);
    }
   friend BigInt operator+(int n,BigInt obj);
    // {
    //     return (n+obj);
    // }
  friend  BigInt operator-(int n,BigInt obj);
    // {
    //     return (n-obj);
    // }
   friend BigInt operator*(int n,BigInt obj);
    // {
    //     return (n*obj);
    // }
   friend BigInt operator/(int n,BigInt obj);
    // {
    //     return (n/obj);
    // }
    BigInt operator++()
    {   n++;
        return (*this);
    }
    BigInt operator++(int)
    {   BigInt temp=*this;
        n++;
        return (temp);
    }
    BigInt operator+()
    {
        return (*this);
    }
    BigInt operator-()
    {   n*=-1;
        return (*this);
    }
     BigInt operator--()
    {   n--;
        return (*this);
    }
    BigInt operator--(int)
    {   BigInt temp=*this;
        n--;
        return (temp);
    }
    void display()
    {
        cout<<"\n the object is :- "<<n;
    }
};

int main()
{
    BigInt obj1(7);
    BigInt obj2=++obj1;
    BigInt obj3=obj2*obj1;
    obj2.display();
    obj1.display();
    BigInt obj4=obj1+7;
    cout<<"\n after addition :- ";
    obj3.display();
    obj4.display();

    -obj4; cout<<"\n after - uinarry operator :- ";
    obj4.display();


 return 0;
}
  BigInt operator+(int n,BigInt obj)
    {   BigInt obj1(n+obj.n);
        return (obj1);
    }
    BigInt operator-(int n,BigInt obj)
    {
        return (n-obj.n);
    }
    BigInt operator*(int n,BigInt obj)
    {
        return (n*obj.n);
    }
    BigInt operator/(int n,BigInt obj)
    {
        return (obj.n/n);
    }
