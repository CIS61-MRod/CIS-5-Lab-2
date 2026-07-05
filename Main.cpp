#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	int age = 0;
	cout << "Enter your age: ";
	cin >> age;

	if (age > 5) {
		cout << "You are old enough to ride the roller coaster! But are you tall enough?" << endl;

	}


	if (age < 5) {
		cout << "You are too young to ride the roller coaster!" << endl;
	}

	int height = 0;
	cout << "Enter your height in inches: ";
	cin >> height;

	if (height > 43) {
		cout << "You are tall enough to ride the roller coaster! Have fun!" << endl;
	}

	if (height < 43) {
		cout << "Sorry, you cannot ride this roller coaster." << endl;
	}

	return 0;
}