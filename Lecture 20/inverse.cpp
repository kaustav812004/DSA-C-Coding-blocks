#include<bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin>>N;
	int inv = 0, pos = 1;
	while(N > 0){
		int dig = N % 10;
		N/=10;
		inv += pos*pow(10, dig-1);
		pos++;
	}
	cout<<inv;
	return 0;
}
