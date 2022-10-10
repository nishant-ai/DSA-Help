#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"value of a:"<<endl;
    cin>>a;
    cout<<"value of b:"<<endl;
    cin>>b;
    cout<<"value of a+b is "<< a+b<< endl;
    cout<<"value of a-b is " << a-b <<endl;
    cout<<"value of a*b is " << a*b <<endl;
    cout<<"value of a/b is "<< a/b <<endl;
    cout<<"value of a%b is "<< a%b <<endl;
    
    cout<<endl;
    cout<<endl;

    cout<<"logical operators of ((a+b) && (a<b))="<<((a+b) && (a<b))<<endl;
    cout<<"logical operators of ((a+b) || (a<b))="<<((a+b) || (a>b))<<endl;

    cout<<"value of a++ ="<<a++<<endl;
    cout<<"value of ++a ="<<++a<<endl;     
    return 0;
}
