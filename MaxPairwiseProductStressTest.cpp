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
		if ((i != maxIndex1) && ((maxIndex2 == -1) || (v[i] > v[maxIndex2]))) {
			maxIndex2 = i;
		}
	}
	return v[maxIndex1] * v[maxIndex2];

}



int32_t main() {


// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	while (true) {
		int n = rand() % 10 + 2;
		cout << n << endl;
		vector<int>a;
		for (int i = 0; i < n; i++) {
			a.push_back(rand() % 100000);
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << ' ';
		}
		cout << endl;
		int res1 = maxPair(a);
		int res2 = maxPairFast(a);
		if (res1 != res2) {
			cout << "Wrong answer: " << res1 << ' ' << res2 << endl;
			break;
		} else {
			cout << "Ok" << endl;
		}
	}
	return 0;
}
