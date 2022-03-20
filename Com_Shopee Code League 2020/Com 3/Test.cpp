#include <iostream>
using namespace std;

int main(){
	int num = 0, total = 0, chosen = 0;
	bool found = false;
	cin >> num;
	for (int i = 0; i < num; i++){
		cin >> total >> chosen;
		int *price = new int [total];
		for (int j = 0; j < total; j++){
			cin >> price[j];
		}
		int index = 0;
		if ( chosen % 2 == 0){
			index = chosen / 2;
		}
		else {
			index = chosen / 2 + 1;
		}
		int sum = 0, counter = 0;
		int *arr = new int[index];
		int temp = 0, temp2 = 0;
		while (counter != index){
			for (int k = 0; k < total; k++){
				if (temp == 0){
					temp = price[k];
				}
				else{
					temp2 = price[k];
					if (temp2 < temp){
						found = false;
						if (counter != 0){
							for (int l = 0; l < counter; l++){
								if (temp2 == arr[l]){
									found = true;
								}
							}
						}	
						if (found = false){
							temp = temp2;
						}
					}
				}
				cout << temp << endl;
			}
			arr[counter] = temp;
			sum += temp;
			temp = 0;
			temp2 = 0;
			counter++;
		}
		cout << "Case " << i + 1 << ": " << sum << endl;		
		delete [] price;
	}
	return 0;
}
