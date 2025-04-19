#include<bits/stdc++.h>

#define int long long int
#define ll long long

using namespace std;



int maxPair(const vector<int>&v) {
	int result = 0;
	int n = v.size();

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (v[i]*v[j] > result) {
				result = v[i] * v[j];
			}
		}
	}
	return result;
}

int32_t main() {


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int result = maxPairFast(v);
	cout << result << endl;
     
	return 0;
}
