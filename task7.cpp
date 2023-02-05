#include <iostream>
using namespace std;
main(){
	string word1;
	string word2;
	int sum = 0;
	cout << "Enter first string: ";
	cin >> word1;
	cout << "Enter second string: ";
	cin >> word2;
	    	
    	for(int x = 0; word1[x] != '\0'; x++){
    	for(int y = 0; word2[y] != '\0'; y++){

    if(word1[x] == word2[y]){
    	sum = sum + 1;
    	word1[x] = '!';
    	word2[y] = '%';
}
}
}
cout << sum;
}
