#include <iostream>
using namespace std;

int main() {
    int i, space, rows;
    rows = 5;
    for (i = 1; i <= rows; ++i) {                //Run loop for 5 rows.
        for (space = rows; space > i ; space--) {   // Print Empty spaces
            cout << "  ";
        }
        int k = 0;
        while ( k != 2 * i - 1) {                      // Print Required number of Stars.
            cout << "* ";
            ++k;
        }
        cout << '\n';
    }
    return 0;
}
