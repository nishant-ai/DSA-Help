//program to check if a given positive number is a multiple of 3 or a multiple of 7
#include <iostream>
using namespace std;

bool test(int n)
        {
            return n % 3 == 0 || n % 7 == 0;
        }
        
int main() 
 {
  cout << test(3) << endl;  
  cout << test(14) << endl;  
  cout << test(12) << endl;  
  cout << test(37) << endl;  
  return 0;    
}
