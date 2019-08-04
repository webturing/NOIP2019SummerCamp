#include<bits/stdc++.h>
using namespace std;
const int N=100;
int main() {
	for(int x=0;5*x<=N;x++)
	for(int y=0;3*y<=N;y++)
	//for(int z=0;z<=N;z++)
	{
		int z=N-x-y;
		if(z%3!=0)continue;
		if(5*x+3*y+z/3==N)
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	return 0;
}
