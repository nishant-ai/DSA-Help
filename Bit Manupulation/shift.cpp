#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    cout<<" Left Shift "<<endl ;
    cout<<(2<<1)<<endl ;
    cout<<(1<<1)<<endl ; // doubles the number 
    cout<<(1<<2)<<endl ; // 1*(2^n)

    cout<<" Right Shift "<<endl ;
    cout<<(4>>1)<<endl ; 
    cout<<(1>>1)<<endl ; 
     cout<<(8>>2)<<endl ; 
    return 0;
}
