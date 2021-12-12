#include <bits/stdc++.h>
using namespace std;

int main(){
	int Vt, Vo;
	
	cin >> Vt >> Vo;
	do{
		int output = 0;
		bool dupli = false;
		double large = 0;
		for (int i = 1; Vt/i > Vo;i++){
			double tempV = static_cast<double>(Vt) / static_cast<double>(i);
			double l = i*(0.3 * sqrt(tempV - static_cast<double>(Vo)));
			if (large < l){
				large = l;
				output = i;
				dupli = false;
				if (fabs(large - l) <= 1e-12){
					dupli = true;
				}
			}
		}
		if (!dupli){
			cout << output << endl;
		}
		else{
			cout << "0" << endl;
		}
		cin >> Vt >> Vo;
		
	}while (Vt!=0 && Vo!= 0);
	return 0;
}
