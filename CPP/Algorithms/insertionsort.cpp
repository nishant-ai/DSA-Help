#include<iostream>
using namespace std;
#define MAX 20


int main(){

	int array[MAX], n;
	printf("Enter the number of elements\n");
	cin>>n;
	cout<<"Enter the array elements\n";
	for(int i = 0; i < n; i++){
	
		cin>>array[i];
	}
	
	for(int i = 1; i < n; i++){
	
		int j;
		int temp = array[i];
		for(j = i-1; j >= 0 && array[j] > temp; j--){
		
			array[j+1] = array[j];
		}
		
		array[j+1] = temp;
	}
	cout<<"The sorted array is \n";
	for(int i = 0; i < n; i++){
	
		cout<<array[i]<<endl;
	}	
}
