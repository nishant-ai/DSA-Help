// Find the minimum number with the given sum of digits s

// such that all digits in it are distinct (i.e. all digits are unique).

// For example, if s=20
// , then the answer is 389. This is the minimum number in which all digits are different and the sum of the digits is 20 (3+8+9=20

// ).

// For the given s

// print the required number.
// Input

// The first line contains an integer t
// (1≤t≤45

// ) — the number of test cases.

// Each test case is specified by a line that contains the only integer s
// (1≤s≤45

// ).
// Output

// Print t
// integers — the answers to the given test cases.
    #include<bits/stdc++.h>
    int max(int a, int b){
    	if(a>b)
    		return a;
    	else
    		return b;
    }
    int repeat(int s){
    	int a[15],i=0;
    	while(s>0){
    		a[i++]=s%10;
    		s/=10;
    	}
    	int c=0;i--;
    	    int nn = sizeof(a) / sizeof(a[0]);
    	    std::sort(a , a + nn);
    	while(i--){
    		if(a[i]==a[i-1])
    			c++;
    	}
    	if(c>0)
    		return 1;
    	else
    		return 0;
    }
    int summ(int n1){
    	int r,s=0;
    	while(n1>0){
    		s=s+n1%10;
    		n1/=10;
    	}
    	int chk=repeat(s);
    	if(chk>0)
    		return -1;
    	else
    		return s;
    }
    using namespace std;
    int main(){
    	int t;
    	cin>>t;
    	while(t--){
    		 int n1=0;
    		 int i=1,n,s=0;
    		 cin>>n;
    		 s=n;
    		 i=9;
    		 if(s<10){
    			 cout<<s<<endl;
    		 }
    		 else{
    		 while(s!=0){
    			s=s-i;
    			n1=n1*10+i;
    			i=i-1;
    			if(s<=i){
    				n1=n1*10+s;
    				break;
    			}
    		 }
    		 int n2=0;
    		 while(n1>0){
    			 n2=n2*10+n1%10;
    			 n1/=10;
    		 }
    		 cout<<n2<<endl;
    	}
    	}
    }