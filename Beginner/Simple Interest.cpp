#include <bits/stdc++.h>
using namespace std;

int main() {
	float principal, rate, time, SI;
	cin>>principal>>rate>>time;
	SI = principal*rate*time/100;
	cout<<SI;
	return 0;
}
