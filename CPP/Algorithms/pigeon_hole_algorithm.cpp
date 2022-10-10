#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y,min;
	float result;
	cout<<"Enter number of pigeons: "; cin>>x;
	cout<<"Enter number of holes available: "; cin>>y;
	result = ((x-1)/y) + 1;
	cout<<"Minimum number of pigeons in a hole is "<<floor(result);
	return 0;
}
