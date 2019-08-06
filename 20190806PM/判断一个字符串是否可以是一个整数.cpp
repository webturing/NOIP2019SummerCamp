#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main() {
	string s="+123.34E-3";
	istringstream iss(s);
	double x;
	if(iss>>x){
		cout<<"OK"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}
