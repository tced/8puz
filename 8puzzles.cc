#include <iostream>

using namespace std; 

void get_input() {
	int input_num; 

	//output prompt 
	cout << "Welcome to Tiffany's 8-puzzle solver.\n"; 
	cout << "Type 1 to use a default puzzle, or 2 to enter your own puzzle. \n";
	
	//while loop until user enters a 1 or a 2 
	while (input_num != 1 | input_num != 2) {
		cin >> input_num; 
	}

	if (input_num == 1) {

	}

	if (input_num == 2) {}
}
int main() {
	return 0; 
}