#include <iostream>
using namespace std;
main(){
	int n;
	int sum = 0;
	cout << "Enter number of coloring done: ";
	cin >> n;
	string colors[n];
	for(int x = 0; x < n; x++){
		cout << "Enter color: ";
		cin >> colors[x];
	}
		for(int x = 0; x < n; x++){

	if(colors[x] == colors[x+1]){
		sum = sum + 1;
}
}
	cout << "Time to paint is: " << (2 * n)+ (n - sum - 1);

}
