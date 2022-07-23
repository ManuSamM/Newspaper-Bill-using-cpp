#include <iostream>
using namespace std;
int main()
{
    string name;
    int month, year;
    cout << "\n\t\t____________Newspaper Bill Calculator____________\n\n\n";
    cout << "Enter your Name: ";
    getline(cin, name);

month:
    cout << "Enter the Month (Ex: 1-12) ";
    cin >> month;
    if (month < 1 || month > 12)
    {
        cout << "Enter month correctly (between 1 and 12)\n";
        goto month;
    }

year:
    cout << "Enter the Year: ";
    cin >> year;
    if (year < 1899 || year > 2100)
    {
        cout << "Enter year between 1899 and 2100\n";
        goto year;
    }

n:
    cout << "\t\t\tWhich newspaper do you buy \n";
    cout << "\t\t\t1. The Times of India \n";  // 7.5
    cout << "\t\t\t2. The Hindustan Times \n"; // 5
    cout << "\t\t\t3. The Hindu \n";           // 11.5
    cout << "\t\t\t4. The Indian Express \n";  // 7
    cout << "\t\t\t5. The Telegraph \n";       // 4
    int n, sub;
    cin >> n;
    if (n < 1 || n > 5)
    {
        cout << "Select newspaper correctly (between 1 and 5)\n";
        goto n;
    }
    string newspaper;
    if (n == 1)
        newspaper = "The Times of India";
    else if (n == 2)
        newspaper = "The Hindustan Times";
    else if (n == 3)
        newspaper = "The Hindu";
    else if (n == 4)
        newspaper = "The Indian Express";
    else if (n == 5)
        newspaper = "The Telegraph";

date:
    cout << "Enter number of days when the paper wasn't delivered: ";
    cin >> sub;
    if (sub < 0)
    {
        cout << "Enter positive value of date \n";
        goto date;
    }
    double tot, cost;
    if (n == 1)
        cost = 7.5;
    else if (n == 2)
        cost = 5;
    else if (n == 3)
        cost = 11.5;
    else if (n == 4)
        cost = 7;
    else if (n == 5)
        cost = 4;

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        tot = 31 * cost - (double)sub * cost;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        tot = 30 * cost - (double)sub * cost;
    }
    else if (month == 2)
    {
        if (year % 4 == 0)
        {
            tot = 29 * cost - (double)sub * cost;
        }
        else
        {
            tot = 28 * cost - (double)sub * cost;
        }
    }
    cout << "\t\t__________________________________________________\n";
    cout << "\t\t\t\t    THE BILL \n\n";
    cout << "\t\t\t\t" << newspaper << "\n\n";
    cout << "\t\t\tName: " << name << "\n";
    cout << "\t\t\tDate: " << month << "/" << year << "\n";
    cout << "\t\t\tRate: " << cost << " rupees\n";
    cout << "\t\t\tDeduction this month: " << (double)sub * cost << " rupees\n\n";
    cout << "\t\t\t\t Total Bill: " << tot << " rupees\n";
    cout << "\t\t__________________________________________________\n";
}
