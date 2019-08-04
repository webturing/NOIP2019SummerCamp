#include<bits/stdc++.h>
using namespace std;
const int N=5;
int G[N][N];
void show() {
	for(int i=0; i<N; i++) {
		for(int j=0; j<=i; j++) {
			cout<<G[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main() {
	//show();
	for(int i=0;i<N;i++)G[i][0]=1;
	for(int i=0;i<N;i++)G[i][i]=1;
	
	for(int i=2;i<N;i++){
		for(int j=1;j<=i-1;j++)
		G[i][j]=G[i-1][j-1]+G[i-1][j]; 
	}
	show();
	return 0;

}
