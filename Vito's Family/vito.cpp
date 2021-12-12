#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	
	cin >> n;
	
	while (n--){
		int r;
		cin >> r;
		int d[r];
		for (int i = 0; i < r; i++){
			cin >> d[i];
		}
		sort(d, d+r);
		
		int temp = r/2;
		int sum = 0;
		for (int i = 0; i < r; i++){
			if (i == temp){
				continue;
			}
			else{
				sum+= abs(d[i] - d[temp]);
			}
		}
		cout << sum << endl;
	}
	return 0;
}
