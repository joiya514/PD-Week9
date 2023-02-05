#include <iostream>
using namespace std;
main(){
	int number;
	int sum = 0;
	int digit;

	int numbers[number];
	cout << "Enter size of array: ";
	cin >> number;
	for(int x = 0; x < number; x++){
		cout << "Enter number" << x+1 << ": ";
		cin >> numbers[x];
	}
	for(int x = 0; x < number; x++){
		if(numbers[x] == 7){
			sum++;
		}
		if(numbers[x] > 9){
			while(numbers[x] != 0){
			digit = numbers[x] % 10;
			numbers[x] = numbers[x] / 10;
			if(digit == 7){
			sum = sum + 1;
			}
		}
	}
	}
			if(sum != 0){
				cout << "Boom!";
			}
			if(sum == 0){
				cout << "There is no 7 in the array.";
		}
			}

