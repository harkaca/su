#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double fahrDegrees;
    cin >> fahrDegrees;
    double celDegrees = (fahrDegrees - 32) * 5 / 9;
    double kelDegrees = celDegrees + 273.15;
    int choice;

    cout << "1 for Celsius" << endl
         << "2 for Kelvin" << endl
         << "3 for both" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cout << celDegrees << " Degrees Celsius" << endl;
    }
    else if (choice == 2)
    {
        cout << kelDegrees << " Degrees Kelvin" << endl;
    }
    else
    {
        cout << kelDegrees << " Degrees Kelvin" << endl;
        cout << celDegrees << " Degrees Celsius" << endl;
    }
}