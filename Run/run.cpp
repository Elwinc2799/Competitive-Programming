#include <bits/stdc++.h>
using namespace std;

bool check_dup (int n)
{
	int check[10] = {0};
	
	while(n)
	{
		//got dupes
		if (check[n%10])
			return 1;
			
		check[n%10] = 1;
		n/=10;
	}
	
	//no dupes return false;
	return 0;
}

int main(){
	int n, c = 1;;
	
	cin >> n;
	do {
		bool found = false;
		for (int i = n; found == false; i++){
			string s = to_string(i);
			int length = s.length();
			bool d[length] = {false};
			for (int j = 0; ;){
				int temp = s[j] - '0';
				j += temp;
				
				while (j >= length){
					j -= length;
				}
				if (j==0){
					d[0] = true;
					break;
				}
				else if (d[j] == false) {
					d[j] = true;
				}
				else if (d[j] == true){
					break;
				}
			}
			bool check = true;
			for (int j = 0; j < length; j++){
				if (d[j] == false){
					check = false;
					break;
				}
			}
			if (check == true){
				if (!check_dup (i)){
					cout << "Case " << c << ": " << i << endl;
					c++;
					found = true;
				}
			}
		}
		cin >> n;
	}while (n != 0);
	return 0;
}
