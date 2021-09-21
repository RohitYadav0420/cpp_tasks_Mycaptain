#include <iostream>
#include <cmath>

using namespace std;

bool check_for_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    for (int i = 2; i < n / 2; i++)
    {
        if (check_for_prime(i) && check_for_prime(n - i))
        {
            cout << n << '=' << i << '+' << n - i << endl;

            if (i == n - i)
            {
                break;
            }
        }
    }

    return 0;
}