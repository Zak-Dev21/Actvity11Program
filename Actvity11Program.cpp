
#include <iostream>
using namespace std;

int main() {
	double first_var;
	double second_var;
	double largest_var = 0;
	
	cout << "Enter a variable: " << endl;
	cin >> first_var;

	cout << "Enter a second variable: " << endl;
	cin >> second_var;


	largest_var = (first_var > second_var) ? first_var :
		          (second_var > first_var) ? second_var :
		          0;

	cout << largest_var;

}
