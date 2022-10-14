#include <bits/stdc++.h> 
using namespace std;


bool isprime(int n){
    for(int i=2;i<=n/2;++i){
        if(n%i==0) {
            return false;
        }
    }
    return true;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int  t;
	cin>>t;
	while(t--){
	    int n,i,j,c=0;
	    cin>>n;
	    for(i=2;i<=n/2;i++){
	        if(isprime(i)){
	        	for(j=n-i;j+i>=n;j--){
	            	if(isprime(j) and (i+j)==n){
	                	cout<<i<<" "<<j<<endl;
	                	c=1;
	                	break;
	              	}
	          	}
	          	if(c==1) {
	          	 	break;
	          	}
	        }
	    }
	    if(c==0)
	        cout<<"-1\n";
	}
	return 0;
}