#include<bits/stdc++.h>
using namespace std;
inline int f(int n) { //b[4] b0,b1,b2,b3
	int b[4];
	b[3]=n%10;
	b[2]=n/10%10;
	b[1]=n/100%10;
	b[0]=n/1000%10;
//	cerr<<b[0]<<" "<<b[1]<<" "<<b[2]<<" "<<b[3]<<endl;
	sort(b,b+4);// ÉıĞò
	int mmin=b[0]*1000+b[1]*100+b[2]*10+b[3];
	int mmax=b[3]*1000+b[2]*100+b[1]*10+b[0];
//	cerr<<"min= "<<mmin<<" max="<<mmax<<endl;
	return mmax-mmin;
}
int main() {
	int n=1234;
	int step=0;
	while(n!=6174) {
		cout<<n<<endl;
		n=f(n);
	}
	cout<<n<<endl;
	return 0;
}
