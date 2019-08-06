#include<bits/stdc++.h>
using namespace std;
int F[100]={0}; 
int fib(int n) {
	if(F[n]!=0)return F[n];
	if(n<=1)return F[n]=1;
	return F[n]=fib(n-1)+fib(n-2);
}
int main() {
	cout<<"T(100)="<<29.83*pow(1.6,52)/3600/24/365.25<<" years"<<endl;
	for(int n=1; n<=100; n++) {
		long long start=clock();//1970/1/1 0:00:00

		fib(n);


		long long end=clock();
		cout<<n<<"\t"<<(end-start)/1000.0<<endl;
	}
	return 0;
}
