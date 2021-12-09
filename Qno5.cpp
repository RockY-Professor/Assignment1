#include <iostream>
using namespace std;
int main() {
    char user{};
    do {
        cout << "Enter the type of animal: \n";
        cout << "D/d for Dog\n";
        cout << "C/c for Cat\n";
        cout << "B/b for Bird\n";
        cout << "R/r for Reptile\n";
        char animal{};
        cin >> animal;

        cout << "Is the pet neutered? (y/n): ";
        char neutered{};
        cin >> neutered;

        if (animal == 'D' || animal == 'd') {
            if (neutered == 'y') {
                cout << "Insurance Fee = $50\n";
            }
            else {
                cout << "Insurance Fee = $80\n";
            }
        }
        else if (animal == 'C' || animal == 'c') {
            if (neutered == 'y') {
                cout << "Insurance Fee = $40\n";
            }
            else {
                cout << "Insurance Fee = $60\n";
            }
        }
        else if (animal == 'B' || animal == 'b' || animal == 'R' || animal == 'r') {
            cout << "Insurance Fee is Free!\n";
        }
        else {
            cout << "Pet not valid\n";
        }
        cout << "Do you want to run again? (y/n)? ";
        cin >> user;
    } while (user != 'n');
    return 0;
}
