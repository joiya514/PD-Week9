#include <iostream>
using namespace std;
main(){
	int n;
	int k;
	int numbers[n];
	cout << "Enter size of array: ";
	cin >> n;
	for(int x = 0; x < n; x++){
		cout << "Enter number" << x+1 << ": ";
		cin >> numbers[x];
	}
	cout << "Enter number of trasformations to be done: ";
	cin >> k;
	for(int x = 0; x < n; x++){
		if(numbers[x] % 2 == 0){
			numbers[x] = numbers[x] - (k * 2);
		}
		if(numbers[x] % 2 != 0){
			numbers[x] = numbers[x] + (k * 2);
		}
	}
		for(int x = 0; x < n; x++){
			cout << numbers[x] << ", ";
		}
}
