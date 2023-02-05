#include <iostream>
using namespace std;
main(){
	string movies[5] = {"Gladiators","starWars", "ab", "abc", "abcd"};
	string movie;
	cout << "Enter name of movie: ";
	cin >> movie;
	for(int x = 0; x < 5; x++){
		if(movie == movies[x]){
			if(x % 2 == 0){
				cout << "Total payable price is: " << 500 - (500 * 10 / 100);
				break;
			}
			if(x % 2 != 0){
				cout << "Total payable price is: " << 500 - (500 * 5 / 100);
				break;
			}
		}
			if(movies[x] != movie){
				cout << "Movie is not availabe!";
				break;
		}
			
}
}
