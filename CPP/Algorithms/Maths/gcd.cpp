#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)  { 
    if (a == 0) {
       return b; 
    }
    if (b == 0) {
       return a; 
    }
    if (a == b)  {
        return a; 
    }
    if (a > b)  {
        return gcd(a-b, b); 
    }
    return gcd(a, b-a);
 }

int main() {
    int num1 , num2;
    cout<<"Enter 2 positive numbers : ";
    cin>>num1>>num2;
    cout<<"GCD of "<<num1<<" "<<num2<<" is : "<<gcd(num1 , num2);
}