#include <iostream>
using namespace std;
float total(float num[], float resistors);
main()
{
    int resistors;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> resistors;
    cout << "Enter the resistance values (in ohms) of the " << resistors << " resistors, one per line: " << endl;
    float num[resistors];
    for (int i = 0; i < resistors; i++)
    {
        cin >> num[i];
    }
    cout << "The total resistance of the series circuit is " << total(num, resistors) << " ohms.";
}
float total(float num[], float resistors)
{
    float sum = num[0];
    for (int j = 1; j < resistors; j++)
    {
        sum = sum + num[j];
    }
    return sum;
}