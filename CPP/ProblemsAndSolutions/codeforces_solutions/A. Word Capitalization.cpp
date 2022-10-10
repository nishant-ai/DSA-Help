// Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

// Note, that during capitalization all the letters except the first one remains unchanged.
// Input

// A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 10^3.
// Output

// Output the given word after capitalization.

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
    	//cin>>t;
    	string s;
    	cin>>s;
    	if(s[0]>=97)
    	s[0]=s[0]-32;
    	cout<<s;
    }