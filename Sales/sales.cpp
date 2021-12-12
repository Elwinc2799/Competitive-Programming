#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	
	cin >> T;
	
	while (T--){
		int n;
		cin >> n;
		int s[n];
		for (int i = 0; i < n; i++){
			cin >> s[i];
		}
		
		int total = 0;
		for (int i = 1; i < n; i++){
			for (int j = i-1; j >=0; j--){
				if (s[i] >= s[j]){
					total++;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}
