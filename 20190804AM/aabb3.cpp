#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int x=30;x*x<=9999;x++){
		if(x*x<1000)continue;
		int n=x*x;
		int left=n/100,right=n%100;
		if(left%11!=0 or right %11!=0)
		continue;
		cout<<n<<endl;
	}
	return 0;
}
