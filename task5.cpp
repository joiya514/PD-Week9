#include <iostream>
using namespace std;
main(){
	int n = 4;
	string elements[n];
	for(int x = 0; x < n; x++){
	cout << "Enter element: ";
	cin >> elements[x];
}
if(elements[0] == elements[1] && elements[0] == elements[2] && elements[0] == elements[3]){
	cout << "true";
}
else{
	cout << "false";
}
}
