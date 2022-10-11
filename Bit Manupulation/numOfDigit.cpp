// number of bits in number 
#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    int n = 10;
    int count = 0 ;
    while(n) {
        count++;
        n = n>>1;
    }
    cout<<count ;
    return 0;
}
