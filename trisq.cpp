#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){

	int tc;
	cin >> tc;
	int arr[10000] = {0};
	arr[0] = 0;
	for (int i = 1; i < 10000; ++i) {
		arr[i] = arr[i-1] + i;
	}
	while(tc--) {
		int no;
		cin >> no;
		int countOfArray = 0;
		countOfArray = no / 2;
		countOfArray--;

		if(countOfArray < 1) {
			cout << "0" << endl;
		}
		else {
			cout << arr[countOfArray] << endl;
		}
	}
    return 0;
}