#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //task 1
    int firstNum, secondNum;
    cin >> firstNum, secondNum;
    if (firstNum > secondNum)
    {
        cout << firstNum << endl;
    }
    else
        cout << secondNum << endl;

    //task 2
    int number;
    cin >> number;
    if (number >= 1 && number <= 12)
    {
        cout << "yes" << endl;
    }
    else
        cout << "no" << endl;

    //task 3
    int x, start, end;
    cin >> x >> start >> end;
    if (start > end)
    {
        cout << "wrong range" << endl;
        return 0;
    }

    if (x > start && x < end)
    {
        cout << "yes" << endl;
    }
    else
        cout << "no" << endl;

    //task 4
    char symbol;
    cin >> symbol;
    if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z'))
    {
        cout << "it is a letter" << endl;
    }
    else
        cout << "it is not a letter" << endl;

    //task 5

    double firstNum, secondNum;
    cin >> firstNum, secondNum;

    if (firstNum > 0 && secondNum > 0)
    {
        cout << "2" << endl;
    }
    else if (firstNum > 0 || secondNum > 0)
    {
        cout << "1" << endl;
    }
    else
        cout << "0" << endl;

    //task 6

    int monthNum;
    cin >> monthNum;

    switch (monthNum)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;

        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;

        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;

        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "October" << endl;

        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;

        break;

    default:
        cout << "invalid month" << endl;
    }

    //task 7
    int n, m, k;
    cin >> n >> m >> k;
    if ((k < n * m) && (k % n == 0 || k % m == 0))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    //task 8

    double a, b, c, D;
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D < 0)
    {
        cout << "no real roots" << endl;
    }
    else if (D == 0)
    {
        double x = -b / 2 * a;
        cout << "double real root: " << x << endl;
    }
    else
    {
        double x1 = (-b + sqrt(D)) / 2 * a;
        double x2 = (-b - sqrt(D)) / 2 * a;
        cout << "2 real roots: " << x1 << " and " << x2 << endl;
    }

    //task 9

    double amount;
    cin >> amount;
    double amountEuro;
    string firstCur, secondCur;
    cin >> firstCur >> secondCur;

    if (firstCur != "EUR")
    {
        if (firstCur == "USD")
        {
            amountEuro = amount * 0.87;
        }
        else if (firstCur == "GBP")
        {
            amountEuro = amount * 1.18;
        }
        else if (firstCur == "BGN")
        {
            amountEuro = amount * 0.51;
        }
    }
    else
        amountEuro = amount;

    if (secondCur == "EUR")
    {
        cout << amountEuro << endl;
    }
    else if (secondCur == "USD")
    {
        cout << amountEuro * 1.16 << endl;
    }
    else if (secondCur == "GBP")
    {
        cout << amountEuro * 0.85 << endl;
    }
    else if (secondCur == "BGN")
    {
        cout << amountEuro * 1.96 << endl;
    }
    else
        cout << " Invalid input!" << endl;

    //HOMEWORK

    //Task 1
    bool isBeerInFridge, isRakiqInFridge, isThereIce;
    cin >> isBeerInFridge >> isRakiqInFridge >> isThereIce;

    if (isBeerInFridge)
    {
        cout << "He will drink beer HOME. Hopefully it isn't Pirinkso" << endl;
    }
    else if (isRakiqInFridge && isThereIce)
    {
        cout << "He will drink rakiq HOME like a true patriot" << endl;
    }
    else
        cout << "He will need to go to the store!" << endl;

    //Task 2
    int meters, sum = 0;
    cin >> meters;

    cout<<meters*(meters+1));
}