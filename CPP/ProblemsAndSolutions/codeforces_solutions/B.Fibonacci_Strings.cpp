//Codeforces 1718B
// In all schools in Buryatia, in the 1 class, everyone is told the theory of Fibonacci strings.

// "A block is a subsegment of a string where all the letters are the same and are bounded on the left and right by the ends of the string or by letters other than the letters in the block. A string is called a Fibonacci string if, when it is divided into blocks, their lengths in the order they appear in the string form the Fibonacci sequence (f0=f1=1, fi=fi−2+fi−1), starting from the zeroth member of this sequence. A string is called semi-Fibonacci if it possible to reorder its letters to get a Fibonacci string."

// Burenka decided to enter the Buryat State University, but at the entrance exam she was given a difficult task. She was given a string consisting of the letters of the Buryat alphabet (which contains exactly k letters), and was asked if the given string is semi-Fibonacci. The string can be very long, so instead of the string, she was given the number of appearances of each letter (ci for the i-th letter) in that string. Unfortunately, Burenka no longer remembers the theory of Fibonacci strings, so without your help she will not pass the exam.

// Input
// The first line contains one integer t (1≤t≤104) — the number of test cases. The following is a description of the input data sets.

// The first line of each test case contains one integer k (1≤k≤100) — the number of letters in the alphabet.

// The second line of each test case contains k integers c1,c2,…,ck (1≤ci≤109) — the number of occurrences of each letter in the string.

// Output
// For each test case print the string "YES" if the corresponding string is semi-Fibonacci, and "NO" if it is not.

// You can print "YES" and "NO" in any case (for example, the strings "yEs", "yes", "Yes" will be recognized as a positive answer).

// sample input

// 6
// 1
// 1
// 2
// 1 1
// 2
// 1 2
// 3
// 3 1 3
// 2
// 7 5
// 6
// 26 8 3 4 13 34

// sample Output

// YES
// YES
// NO
// YES
// NO
// YES

// Note
// In the first test case, a one-character string is semi-Fibonacci, being itself a Fibonacci string.

// In the second test case, a string of two different characters is Fibonacci.

// In the third test case, the string "abb" (let the first of the alphabet letter be a, the second letter b) is not a semi-Fibonacci string, since no permutation of its letters ("abb", "bab", and "bba") is a Fibonacci string.

// In the fourth test case, two permutations of the letters of the string "abaccac" (the first letter is a, the second letter is b, the third letter is c) are Fibonacci strings — "abaaccc" and "cbccaaa".


// solution :-

#include<bits/stdc++.h>
using namespace std;
int64_t n,f[80],g[80],a[105];
void sol()
{
	auto sum=0ll;
	cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i], sum+=a[i];
	int t=lower_bound(g,g+80,sum)-g;
	if(sum!=g[t]) { puts("No"); return; }
	for(int lst=0;~t;t--)
	{
		int pos=0;
		for(int i=1;i<=n;i++) if(a[i]>a[pos] && i!=lst)
			pos=i;
		lst=pos;
		if((a[pos]-=f[t])<0) { puts("NO"); return; }
	}
	puts("YES");
}
int main()
{
	f[0]=f[1]=1; for(int i=2;i<80;i++) f[i]=f[i-1]+f[i-2];
	partial_sum(f,f+80,g);
	int T; cin>>T;
	while(T--) sol();
	return 0;
}



