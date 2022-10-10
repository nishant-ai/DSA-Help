//    Vasya has a grid with 2 rows and n

// columns. He colours each cell red, green, or blue.

// Vasya is colourblind and can't distinguish green from blue. Determine if Vasya will consider the two rows of the grid to be coloured the same.
// Input

// The input consists of multiple test cases. The first line contains an integer t
// (1≤t≤100

// ) — the number of test cases. The description of the test cases follows.

// The first line of each test case contains an integer n
// (1≤n≤100

// ) — the number of columns of the grid.

// The following two lines each contain a string consisting of n

// characters, each of which is either R, G, or B, representing a red, green, or blue cell, respectively — the description of the grid.
// Output

// For each test case, output "YES" if Vasya considers the grid's two rows to be identical, and "NO" otherwise.

// You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).
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
    	return s;
    }
    using namespace std;
    int main(){
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n,i;
    		cin>>n;
    		int r1=0,r2=0,g1=0,g2=0;
    		string s1,s2;
    		cin>>s1>>s2;
    		for(i=0;i<n;i++)
    		{
    			if(s1[i]=='R'&&s2[i]=='R')
    				continue;
    			if((s1[i]=='G'||s1[i]=='B')&&(s2[i]=='G'||s2[i]=='B'))
    				continue;
    			else
    				r1=-1;
    		}
    		if(r1==-1)
    			cout<<"NO"<<endl;
    		else
    			cout<<"YES"<<endl;
    	}
    }