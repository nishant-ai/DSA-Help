// There are n boxes with different quantities of candies in each of them. The i-th box has ai

// candies inside.

// You also have n

// friends that you want to give the candies to, so you decided to give each friend a box of candies. But, you don't want any friends to get upset so you decided to eat some (possibly none) candies from each box so that all boxes have the same quantity of candies in them. Note that you may eat a different number of candies from different boxes and you cannot add candies to any of the boxes.

// What's the minimum total number of candies you have to eat to satisfy the requirements?
// Input

// The first line contains an integer t
// (1≤t≤1000

// ) — the number of test cases.

// The first line of each test case contains an integer n
// (1≤n≤50

// ) — the number of boxes you have.

// The second line of each test case contains n
// integers a1,a2,…,an (1≤ai≤107

// ) — the quantity of candies in each box.
// Output

// For each test case, print a single integer denoting the minimum number of candies you have to eat to satisfy the requirements.

#include <bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
 
int main() {
	int t,i=0;
	cin>>t;
	while(t--){
		int i,n;
		cin>>n;
		vector<int> a;
		for(i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			a.push_back(tmp);
		}
		sort(a.begin(),a.end());
		long long int sum=0;
		for(i =1;i<n;i++)
			sum=sum+a[i]-a[0];
		cout<<sum<<endl;
	}
}