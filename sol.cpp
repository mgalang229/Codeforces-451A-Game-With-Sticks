#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	if(min(n,m)%2==1)
		cout << "Akshat";
	else
		cout << "Malvika";
	cout << "\n";
}
