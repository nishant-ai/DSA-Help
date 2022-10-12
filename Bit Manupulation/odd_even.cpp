// odd even without using mod operator 
#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    int num = 5;
    
    if(num&1==1)
        cout<<"odd";   // 011101 & 1 == 1 which is odd 
    else
        cout<<"even" ; //01100 & 1 == 0 which is even 
    return 0;
}
