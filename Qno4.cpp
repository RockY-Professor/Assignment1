#include <string>
#include <iostream>
using namespace std;

constexpr int TOTAL = 40;

double percentage(double marks);
void result(string name, double percentage);

int main()
{
    string students[5] = { "Aisha", "Alena", "Ahmed", "Ali", "Bilal" };
    double marks[5] = { 36, 28, 25.5, 28.5, 33 };

    for (int i = 0; i < 5; i++)
    {
        result(students[i], percentage(marks[i]));
    }
    return 0;
}

double percentage(double marks)
{
    return (double)(marks / TOTAL) * 100;
}

void result(string name, double percentage)
{
    if (percentage >= 90) {
        cout << name << " has " << percentage << "% and obtained A Grade\n";
    }
    else if (percentage >= 75 && percentage <= 90) {
        cout << name << " has " << percentage << "% and obtained B Grade\n";
    }
    else if (percentage >= 60 && percentage <= 75) {
        cout << name << " has " << percentage << "% and obtained C Grade\n";
    }
    else if (percentage >= 50 && percentage <= 60) {
        cout << name << " has " << percentage << "% and obtained D Grade\n";
    }
    else if (percentage <= 50) {
        cout << name << " has " << percentage << "% and obtained F Grade\n";
    }
}
