#include<bits/stdc++.h>

#define int long long int
#define ll long long

using namespace std;


int maxPairFast(const vector<int>&v) {

	int n = v.size();

	int maxIndex1 = -1;
	int maxIndex2 = -1;

	for (int i = 0; i < n; i++) {
		if ((maxIndex1 == -1) || (v[i] > v[maxIndex1])) {
			maxIndex1 = i;
		}
	}

	for (int i = 0; i < n; i++) {
		if ((v[i] != v[maxIndex1]) && ((maxIndex2 == -1) || (v[i] > v[maxIndex2]))) {
			maxIndex2 = i;
		}
	}
	return v[maxIndex1] * v[maxIndex2];

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
