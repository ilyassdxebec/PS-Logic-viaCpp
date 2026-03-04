#include <iostream>
using namespace std;

// c and d have default values, so they're optional when calling the function
// a and b are required — no default value
// default parameters must always be at the END
int MySum(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main() {

    // only passing a and b — c and d use their defaults (0)
    // result: 10 + 20 + 0 + 0 = 30
    cout << MySum(10, 20) << endl;

    // passing a, b, c — d uses its default (0)
    // result: 10 + 20 + 30 + 0 = 60
    cout << MySum(10, 20, 30) << endl;

    // passing all 4 — no defaults used
    // result: 10 + 20 + 30 + 40 = 100
    cout << MySum(10, 20, 30, 40) << endl;

    return 0;
}