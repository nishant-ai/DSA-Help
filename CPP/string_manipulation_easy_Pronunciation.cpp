//link for problem statement :https://www.codechef.com/submit/EZSPEAK

#include <iostream>
using namespace std;

int main() {
    int n;
     
    cin>>n;
    while(n--){
        int a,d;
        cin>>a;
        // char b[a];
        string st;
        cin>>st;
       int count=0,f=0;
        for(int i=0;i<a;i++){
            char b=st[i];
            if(b=='a'|| b=='e' || b=='i' || b=='o' || b=='u'){
                count=0;
                continue;
            }
            else{
                count++;
                if(count>=4){
                    f=1;
                    break;
                }
            }
       
    }
         if(f)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
	// your code goes here
	return 0;
}
