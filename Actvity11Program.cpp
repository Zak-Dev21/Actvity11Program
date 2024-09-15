
#include <iostream>
using namespace std;

int main() {
	double first_var;
	double second_var;
	double largest_var;
	
	cout << "Enter a variable: " << endl;
	cin >> first_var;

	cout << "Enter a second variable: " << endl;
	cin >> second_var;


	if (first_var > second_var)
		largest_var = first_var;
	else if (second_var > first_var)
		largest_var = second_var;
	else
		cout << "There is no largest value as both variables given are equal.";
		largest_var = 0;

	cout << largest_var;

}
