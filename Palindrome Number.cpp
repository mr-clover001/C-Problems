#include <iostream>
using namespace std;

int main()
{
    int num, reverse, rem = 1;
    cout << "enter the number" << endl;
    cin >> num;
    int x;
    x = num;
    while (x != 0)
    {
        rem = x % 10;
        reverse = reverse * 10 + rem;
        x /= 10;
    }

    (num == reverse) ? cout << "True, Number is palindrom" : cout << "false, Number is palindrom";
}