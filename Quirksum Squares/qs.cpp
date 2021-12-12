#include <bits/stdc++.h> 
using namespace std;

void perfectSquares(float l, float r, int num) { 
    // For every element from the range 
    int exp = pow(10,num);
    for (int i = l; i <= r; i++) { 
    	
        if (sqrt(i) == ((i % exp) + (i/exp)))
            cout << setfill('0') << setw(num*2) << i << endl;
    } 
} 

int main(){
	int n;
	cin >> n;
	do{
		if (n == 2){
			perfectSquares(0, 99, 1);
		}
		else if (n == 4){
			perfectSquares(0, 9999, 2);
		}
		else if (n == 6){
			perfectSquares(0, 999999, 3);
		}
		else if (n == 8){
			perfectSquares(0, 99999999, 4);
		}
		cin >> n;
	}while (n != -1);
}
