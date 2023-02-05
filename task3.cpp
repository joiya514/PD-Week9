#include <iostream>
using namespace std;
main(){
	string word;
	cout << "Enter word: ";
	cin >> word;
	int sum = 0;
	for(int x = 0; word[x] != '\0';x++){
		sum = sum + 1;
	}
	if(sum % 2 == 0){
		cout << "true";
	}
	else{
		cout << "false";
	}
	
}
