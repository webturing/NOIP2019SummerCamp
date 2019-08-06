#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
void print(int a[],int n) {
	for(int i=0; i<n; i++)cout<<a[i]<<" ";
	cout<<endl;
}
int main() {
	int a[]= {1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
//	for(int i=0; i<6; i++) {
//		print(a,3);
//
//		next_permutation(a,a+3);
//	}
	do {
		print(a,n);
	} while(next_permutation(a,a+n));

	return 0;
}
