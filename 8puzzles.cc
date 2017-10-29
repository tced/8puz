#include <iostream>
#include <vector> 
using namespace std; 

VECTOR problem(3, vector<int> 3); 
vector <int> puzzle; 
int initial[] = {1, 2, 3, 4, 0, 6, 7, 5, 8}; 
vector <int> default_puz;  
vector <int> input_puz; 
vector <vector <int> > myVector; 
void get_input() {
	int input_num; 

	//output prompt 
	cout << "Welcome to Tiffany's 8-puzzle solver.\n"; 
	cout << "Type 1 to use a default puzzle, or 2 to enter your own puzzle ";
	
	cin >> input_num;
	while (input_num != 1 && input_num != 2) {
		cin >> input_num; 
	}
	//if it's 1, insert default puzzle into array 
	if (input_num == 1) {
		cout <<"Using default puzzle...\n"; 

		for (int i = 0; i < 9; ++i) {
			default_puz.push_back(initial[i]); 
		}

		puzzle = default_puz; 
		cout << "this is the default puz: "; 
		for (int i = 0; i < default_puz.size(); ++i) {
			cout  << default_puz[i] << " "; 
		}

	}

	//if it's 2, get input from user 
	if (input_num == 2) {
		int userinput, counter = 0; 
		cout << "Enter your puzzle, use a zero to represent the blank: \n"; 
		cout << "Enter the first row, use space or tabs between numbers: \n"; 

		while (counter <= 2) {
			cin >> userinput; 
			input_puz.push_back(userinput); 
			++counter; 
		}

		cout << "Enter the second row, use a space or tabs between numbers: \n"; 
		counter = 0; 
		while (counter <= 2) {
			cin >> userinput; 
			input_puz.push_back(userinput); 
			++counter; 
		}

		cout << "Enter the third row, use a space or tabs between numbers: \n"; 
		counter = 0; 

		while (counter <= 2) {
			cin >> userinput; 
			input_puz.push_back(userinput); 
			++counter; 
		}

		for (int i = 0; i < input_puz.size(); ++i) {
			cout << input_puz[i] << " "; 
		}

	}
}
int main() {
	get_input(); 
	return 0; 
}