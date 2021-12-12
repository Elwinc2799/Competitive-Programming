#include <iostream>
using namespace std;

int main(){
	int n, A, B, C;
	cin >> n;
	while (n != 0){
		bool flag = false;
		cin >> A >> B >> C;
		for (int i = -22; i <= 22 && flag == false; i++ ){
			for (int j = -100; j <= 100 && flag == false; j++){
				for (int k = -100; k <= 100 && flag == false; k++){
					if ((i+j+k==A) && (i*j*k == B) && (i*i + j*j + k*k == C)){
						cout << i << " " << j << " " << k << endl;
						flag = true;
					}
				}
			}
		}
		if (flag == false){
			cout << "No solution." << endl;
		}
		n--;
	}
}
