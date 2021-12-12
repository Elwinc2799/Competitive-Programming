#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, num = 1;
	
	cin >> N;
	
	do{
		float L[N];
		int G[N], Y[N], R[N];
		
		for (int i = 0; i < N; i++){
			cin >> L[i] >> G[i] >> Y[i] >> R[i];
		}
		int s[31], speed = 30;
		for (int i = 0; i < 31; i++){
			s[i] = speed;
			speed++;
		}
		
		for (int i = 0; i < N; i++){
			for (int j = 0; j < 31; j++){
				if (s[j] == 0){
					continue;
				}
				else{
					float temp =  static_cast<float>(L[i]) / static_cast<float>(s[j]);
					float totalTime = temp * 60.0 * 60.0;
					int c = G[i] + Y[i] + R[i];
					float cycle = static_cast<float>(c);
					while (totalTime >= c){
						totalTime -= c;
					}
					int compare = (G[i] + Y[i]);
					float mod = static_cast<float>(compare);
					if (totalTime > mod){
						s[j] = 0;
					}
					else if (totalTime == 0){
						continue;
					}
					
				}
			}
		}
		cout << "Case " << num << ": ";
		bool empty = true;
		for (int i = 0; i < 31; i++){
			if (s[i] != 0){
				empty = false;
				break;
			}
		}
		if (!empty){
			for (int i = 0; i < 31; i++){
				if (s[i]!=0){
					cout << s[i];
				}
				else {
					continue;
				}
				if (s[i+1] == 0){
					cout << ", ";
				}
				else {
					cout << "-";
					i++;
					while (s[i]!=0){
						i++;
					}
					cout << s[i-1];
				}
				if (i+1 <31){
					cout << ", ";
				}
			}
		}
		else {
			cout << "No acceptable speeds.";
		}
			
		cout << endl;
		num++;
		
		cin >> N;
	}while (N!=-1);
	return 0;
}
