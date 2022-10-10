#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int inverse(int num,int mod)
{
	int k1=0,k2=1;
	int factor=1;
	int temp_num = num;
	int temp_mod = mod;
	int q=1,r=1;
	while(r!=0)
	{
		q = mod/num;
		r = mod%num;
		if(r==0)
			continue;
		mod = num;
		num = r;
		factor = k1 - q*k2;
		k1 = k2;
		k2 = factor;
	}
	if(factor < 0)
		return factor + temp_mod;
	else
		return factor;
	return -1;
}

int main()
{
	int n1,n2;
	cout<<"Enter x and y for x(mod y): "; cin>> n1>>n2;
	if(n1>=n2);
		n1 %= n2;
	if(n1<=0 || n2<=0)
		cout<<"Enter positive numbers.";
	if(gcd(n1,n2) != 1)
		cout<<"Inverse doesnt exist.";
	int ans = inverse(n1,n2);
	cout<<"The inverse is "<<ans;
	return 0;
}
