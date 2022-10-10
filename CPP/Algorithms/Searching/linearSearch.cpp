// Linear Search

#include<iostream>
using namespace std;
int main(){
    int a[100],size,i,flag=0,key;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    for(i=0;i<size;i++){
        cout<<"Enter element for index: "<<i<<endl;
        cin>>a[i];
    }

    cout<<"Enter the key you want to search: "<<endl;
    cin>>key;
    for(i=0;i<size;i++){
        if(key==a[i]){
        cout<<"Element found at location: "<<i<<endl;
        flag++;
        //break;
        }
    }
        if(flag==0){
        cout<<endl<<"Element not found!!";
    }
}
  
