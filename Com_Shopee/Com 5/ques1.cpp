#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, n = 1;
	cin >> N;
	
	while (n<=N){
		int H = -1, I = -1, L, num=0, highest = 0;
		
		cin >> L;
		int m[L];
		for (int i = 0; i < L; i++){
			cin >> m[i];
			if (m[i] == 1){
				num++;
			}
			if (m[i] > highest){
				highest = m[i];
			}
		}
		for (int i = 0; i < L; i++){
			if (m[i] == 1){
				int tempH1 = 1, tempI1 = i;
				int k = 1;
				while (m[i-k] == 1+k){
					k++;
					if (k > tempH1){
						tempH1 = k;
						tempI1 = i-(k-1);
					}
				}
				k = 1;
				int tempH = 1, tempI = i;
				while (m[i+k] == 1+k){
					k++;
					if (k > H){
						tempH = k;
						tempI = i+(k-1);
					}
				}
				if (H < tempH1){
					H = tempH1;
					I = tempI1;
				}
				if (H < tempH){
					H = tempH;
					I = tempI;
				}
			}
		}
		cout << "Case #" << n << ": " << H << " " << I << endl;
		n++;
	}
}
