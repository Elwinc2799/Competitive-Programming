#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	
	while (T--){
		int c;
		cin >> c;
		
		int m[c], max = -150000, loc = 0;
		for (int i = 0; i < c; i++){
			cin >> m[i];
		}
		for (int i = 0; i < c; i++){
			for (int j = i+1; j < c; j++){
				int temp1 = m[i] - m[j];
				if (max < temp1){
					max = temp1;
					loc = i;
				}
			}
		}
		cout << max << endl;
	}
	return 0;
}
