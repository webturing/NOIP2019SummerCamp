#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int nmax=50;
LL F[nmax+1]={1,1};

int main(){
	for(int i=2;i<=nmax;i++){
		F[i]=F[i-1]+F[i-2];//
	}
	for(int i=0;i<10;i++)
		cout<<F[i]<<" ";
	cout<<endl;
	
	return 0; 
	
}

