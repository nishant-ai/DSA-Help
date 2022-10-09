#include <iostream>
using namespace std;

//Declare the functions before calling them in the main function
void reverse(int arr[],int start,int end)
{
    int temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[],int N)
{
    for(int i = 0; i < N; i++)
    {
        cout<<arr[i]<<" "; //print space only
    }
}

int main() {
    //code
    int t;
    cin>>t;    //You have not even taken any inputs as specified in the description
    while(t--){  //Read the question, there are more than one testcases, that is t
        int arr[101];
        int N;  //inputs
        cin>>N;
        for(int i=0;i<N;i++) //inputs
            cin>>arr[i];
        reverse(arr,0,N - 1);
        printArray(arr,N);
        cout<<endl;  //print newline after each testcase
    }
    
    
    return 0;
}