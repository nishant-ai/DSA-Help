CODECHEF Problem - [THE LEAD GAME](https://www.codechef.com/problems/TLG)

```#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int cs1=0, cs2=0;
	int max_lead=0;
	int max_lead_player=1;
	
	while(n--){
	    int s1, s2;
	    cin>>s1>>s2;
	    
	    cs1+=s1;
	    cs2+=s2;
	    
	    int curr_lead=0;
	    int curr_lead_player=1;
	    
	    if(cs1>=cs2){
	        curr_lead=cs1-cs2;
	    }
	    else{
	        curr_lead_player=2;
	        curr_lead=cs2-cs1;
	    }
	    if(curr_lead>max_lead){
	        max_lead=curr_lead;
	        max_lead_player=curr_lead_player;
	    }
	}
	cout<<max_lead_player<<" "<<max_lead<<endl;
	return 0;
}
