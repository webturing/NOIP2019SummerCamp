#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL Q[51][51];

LL cnr(int n,int r){
	if(Q[n][r]!=0)return Q[n][r];
	if(r==0||r==n)return  Q[n][r]=1;
	return  Q[n][r]=cnr(n-1,r)+cnr(n-1,r-1);
}
void disp(){
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			cout<<Q[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
	disp();
	cnr(5,3);
	disp();
	cnr(20,5);
	disp();
//	cout<<cnr(50,25)<<endl;
	return 0;
}
