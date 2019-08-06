#include<bits/stdc++.h>
using namespace std;
string d(int n) {
	if(n==1)return "";
	if(n==2)return "RDL";
	string s="";
	for(int i=0; i<n-1; i++)s.push_back('R');
	for(int i=0; i<n-1; i++)s.push_back('D');
	for(int i=0; i<n-1; i++)s.push_back('L');
	for(int i=0; i<n-2; i++)s.push_back('U');
	s.push_back('R');
	s+=d(n-2);
	return s;
}
int main() {
	int n;
	cin>>n;
	int G[n][n];
	int x=0,y=0;
	string s=d(n);
//	cout<<s<<endl;
	for(int i=1; i<=n*n; i++) {
		//cout<<x<<" "<<y<<endl; 
		G[x][y]=i;
		switch(s[i-1]) {
			case 'R':
				y++;
				break;
			case 'L':
				y--;
				break;
			case 'U':
				x--;
				break;
			case 'D':
				x++;
				break;
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			cout<<setw(2)<<G[i][j]<<" ";
		cout<<endl;
	}
}
