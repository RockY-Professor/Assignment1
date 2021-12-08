#include <iostream>
#include <cmath>
double BMIformula(double,double);
double conversion(double,double);
using namespace std;
int main() {

	cout << "Let's Calculate you BMI User! " << '\n';
	double meter, inch, ft, weight;
	cout << "Enter your weight in kg USer! " << '\n';
	cin >> weight;
	cout << "To Enter your height in Feet & Inches Press 1 User!\nTo Enter your height in Meter Press 2 User!\n";
	int path;
	cin >> path;
	switch (path) {
	case 1:
		cout << "Input your Height in Feet & Inches NOW USER! \n";
		cin >> ft >> inch;
		cout << "User your BMI is: " << BMIformula(conversion(ft, inch), weight);
		break;
	case 2:
		cout << "Enter your Height in meters User! " << '\n';
		cin >> meter;
		cout << "User your BMI is: " << BMIformula(meter, weight);
		break;
	default:
		cout << "Press 1 and 2 don't be soo smart USER! ";
		break;
	}
	return 0;
}

double BMIformula(double height, double weight) {
	return (double)weight / pow(height, 2);
}
double conversion(double ft, double inches) {
	double feet = ft * 12;
	return (double)(feet + inches) * 0.0254;
}
