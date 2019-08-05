#include<bits/stdc++.h>
using namespace std;
void disp(int a[],int n) {
	for(int i=0; i<n; i++)cout<<a[i]<<" ";
	cout<<endl;
}
int f(int n) {
	int s=0;
	while(n>0) {
		s=s+n%10;
		n/=10;
	}
	return s;
}
bool mars(int a,int b) {
	if(f(a)!=f(b))
	return f(a)<f(b);
	return a<b;
}
int main() {
	int a[]= {1,12,3,123,1,23,12,3,12,3,12,31,23,1,23,1,23,123,6,123,11,1000,9,};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<n<<endl;
//	sort(a,a+n);//sort(a,a+n,less<int>());
	disp(a,n);
	reverse(a,a+n);//·­×ª
	disp(a,n);
	sort(a,a+n,greater<int>());
	disp(a,n);
	sort(a,a+n,mars);
	disp(a,n);

	return 0;

}
