#include <iostream>

using namespace std;

int main()
{
    unsigned int age;
    cout << "enter your age: ";
    cin >> age;

    if (age >= 18)
        cout << "Eligible to vote\n";
    else
    {
        cout << "Not Eligible to vote\n";
        cout << "Come after " << 18 - age << " years";
    }

    return 0;
}