//   Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name. For example, the following strings are valid spellings of his name: Timur, miurT, Trumi, mriTu. Note that the correct spelling must have uppercased T and lowercased other letters.

// Today he wrote string s
// of length n consisting only of uppercase or lowercase Latin letters. He asks you to check if s

// is the correct spelling of his name.
// Input

// The first line of the input contains an integer t
// (1≤t≤103

// ) — the number of test cases.

// The first line of each test case contains an integer n
// (1≤n≤10) — the length of string s

// .

// The second line of each test case contains a string s

// consisting of only uppercase or lowercase Latin characters.
// Output

// For each test case, output "YES" (without quotes) if s

// satisfies the condition, and "NO" (without quotes) otherwise.

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
    		int n,t=0,i=0,m=0,u=0,r=0;
    		cin>>n;
    		string s;
    		cin>>s;
    		if(n!=5)
    			cout<<"NO"<<endl;
    		else
    		{
    			for(int j=0;j<5;j++)
    			{
    				if(s[j]=='T')
    					t++;
    				if(s[j]=='i')
    					i++;
    				if(s[j]=='m')
    					m++;
    				if(s[j]=='u')
    					u++;
    				if(s[j]=='r')
    					r++;
    			}
    		
    		if(t==1&&i==1&&m==1&&u==1&&r==1)
    			cout<<"YES"<<endl;
    		else
    			cout<<"NO"<<endl;
    		}
    	}
    }