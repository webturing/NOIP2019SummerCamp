#include<bits/stdc++.h>
using namespace std;
void in(int *a) {
	char ch;
	while((ch=getchar())<'0'||ch>'9');
	for(*a=0; ch>='0'&&ch<='9'; ch=getchar()) *a=*a*10+ch-'0';
}

int main() {
	int a;
	in(&a);
	printf("%d\n",a); 
	return 0;

}
