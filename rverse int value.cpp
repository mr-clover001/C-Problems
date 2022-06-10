#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "enter the number";
    cin >> x;
    int reverse, rem = 1;
    while (x != 0)
    {
        rem = x % 10;
        reverse = reverse * 10 + rem;
        x /= 10;
    }

    cout << "reverse element is" << reverse;
}