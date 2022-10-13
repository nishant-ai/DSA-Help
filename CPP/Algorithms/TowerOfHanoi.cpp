#include<stack>
#include<iostream>
using namespace std;

template <typename T> void printStack(stack<T> S)
{
    T x;
    if(S.empty())
        return;
    x=S.top();
    S.pop();
    printStack(S);
    cout<<x<<"  ";
}


template<typename T>
void Fuc(stack<T> &A,stack<T> &B,stack<T> &C,int n)
{
    if(n==0)
        return;
    Fuc(A,C,B,n-1);
    T x=A.top();
    A.pop();
    C.push(x);
    Fuc(B,A,C,n-1);
    return;
}

int main()
{
    stack<int> Start,Aux,Final;
    int N;
    cout<<"Enter the Size of the stack";
    cin>>N;
    cout<<"Enter the elements of the Tower";
    for(int i=0;i<N;i++)
    {
        int x;
        cin>>x;
        Start.push(x);
    }
    cout<<"\nStarting Stack :";
    printStack(Start);
    cout<<"\nFinal Stack at starting : ";
    printStack(Final);

    cout<<endl;
    Fuc(Start,Aux,Final,Start.size());

    cout<<"\nStarting Stack :";
    printStack(Start);
    cout<<"\nFinal Stack After Transfer :";
    printStack(Final);

    return 0;
}