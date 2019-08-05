#include<bits/stdc++.h>
using namespace std;

int main() {
	string s="2149";
	cout<<s<<endl;
	s.erase(s.find('2'),1);
	cout<<s<<endl;
	int x;
	istringstream iss(s);
	iss>>x;
	cout<<x<<endl; 

	return 0;

}
