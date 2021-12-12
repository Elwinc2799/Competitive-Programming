#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int s;
	while ((cin >> s) != 0){
		int *arr = new int [s];
		for (int i = 0; i < s; i++){
			cin >> arr[i];
		}
		for (int a = 0; a < s-5; a++)
			for (int b = a+1; b < s-4; b++)
				for (int c = b+1; c < s-3; c++)
					for (int d = c+1; d < s-2; d++)
						for (int e = d+1; e < s-1; e++)
							for (int f = e+1; f < s; f++)
								cout << arr[a] << " " << arr[b] << " " << arr[c] << " " << arr[d] << " " << arr[e] << " " << arr[f] << endl;
		delete [] arr;
		cout << endl;
	}
}
