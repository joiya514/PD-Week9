#include <iostream>
using namespace std;
main(){
	string fruit[4] = {"peach", "apple", "guava" , "watermelon"};
	int price[4] = {60,70, 40, 30};
	float kgs;
	string fruitt;
	cout << "Enter name of fruit: ";
	cin >> fruitt;
	for(int x = 0; x < 4; x++){
		if(fruit[x] == fruitt){
			cout << "Enter amount of fruit: ";
			cin >> kgs;
			cout << "Total bill is: " << kgs * price[x];
			break;
		}
      if(fruit[x] != fruitt){
			cout << "Fruit is not available!";
			break;
		}
	}
}
