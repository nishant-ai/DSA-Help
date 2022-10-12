// number is power of two or not 
#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    //method 1
    int n = 7;
    int count = 0;
    while(n) {
        if(n&1==1)
            count++;
        n = n>>1;
    }
    if(count==1)
        cout<<true ;
    else 
        cout<<false;

    // method 2
    n = 4 ;
    bool x = (n&(n-1)) == 0;
    cout<<endl<<x;

    return 0;
}
