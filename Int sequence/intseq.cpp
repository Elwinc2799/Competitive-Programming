#include <bits/stdc++.h> 
using namespace std;

int main(){
	int c;
	cin >> c;
	int p, d, k;
	while (c--){
		cin >> p;
		int poly[p];
		for (int i = 0; i <= p; i++){
			cin >> poly[i];
		}
		cin >> d >> k;
		int sum = 0, count = 1;
		while (sum < k){
			sum += d*count;
			count ++;
		}
		int ans = 0;
		for (int i = 0; i <= p; i++){
			ans += poly[i] * pow(count-1, i);
		}
		cout << ans << endl;
	}
	return 0;
}
