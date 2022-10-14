#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[100][100],s[100];
    int k=0,j=0,c=0,count=0;
    cout<<"Enter a string: ";
    cin.getline(s,100);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            s1[k][j]='\0';
            k++;
            j=0;
        }
        else{
            s1[k][j]=s[i];
            j++;
        }
    }
    s1[k][j]='\0';
    for(int i=0;i<=k;i++){
        c=0;
        int n=strlen(s1[i]);
        for(j=0;j<n;j++){
            if(s1[i][j]!=s1[i][n-j-1]){
                c=1;
                break;
            }  
        }
        if(c==0){
            count++;
        }
    }
    cout<<"Number of Palindrome string is "<<count;
    return 0;
}
