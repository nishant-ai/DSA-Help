// magic number 
#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    cout<<"answer is " ;
    int n = 7 ;
    int sum = 0 ;
    int base = 5;
    while(n>0) {
        sum += (n&1)*base ;
        base*=5 ;
        n = n>>1;
    }
    cout<<sum;
    return 0;
}
