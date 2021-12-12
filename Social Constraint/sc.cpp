#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,m;
	
	cin >> n >> m;
	while (!(n==0 && m==0)){
		int p[8] = {0,1,2,3,4,5,6,7}, a[m], b[m], c[m];
		for (int i = 0; i < m; i++){
			cin >> a[i] >> b[i] >> c[i];
		}
		int count = 0;
		do{
			bool check = true;
			for (int i = 0; (i < m) && check; i++){
				if (c[i] > 0){
					check = (abs((p[a[i]]) - (p[b[i]])) <= c[i]);
				}
				else {
					check = (abs((p[a[i]]) - (p[b[i]])) >= abs(c[i]));
				}	
			}
			if (check){
				count++;
			}
		}while (next_permutation(p,p+n));
		cout << count << endl;	
		cin >> n >> m;
	}
	
	return 0;
}
