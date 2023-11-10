#include <iostream>
using namespace std;
void check(float sum, float amount);
main()
{
    int array[4];
    float amount;
    cout << "Enter quarters: ";
    cin >> array[0];
    cout << "Enter dimes: ";
    cin >> array[1];
    cout << "Enter nickels: ";
    cin >> array[2];
    cout << "Enter pennies: ";
    cin >> array[3];
    cout << "Enter the total amount due: $";
    cin >> amount;
    float sum = 0;
    array[0] = array[0] * 25;
    array[1] = array[1] * 10;
    array[2] = array[2] * 5;
    array[3] = array[3] * 1;
    for (int i = 0; i < 4; i++)
    {
        sum = sum + array[i];
    }
    sum = sum / 100;
    check(sum, amount);
}
void check(float sum, float amount)
{
    if (sum >= amount)
    {
        cout << "Can you pay the amount? "
             << "Yes";
    }
    else
    {

        cout << "Can you pay the amount? "
             << "No";
    }
}