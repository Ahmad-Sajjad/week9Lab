#include <iostream>
using namespace std;
int checkGreater(int num[], int elements);
main()
{
    int elements;
    cout << "Enter the number of elements: ";
    cin >> elements;
    cout << "Enter " << elements << " numbers,one per line:" << endl;
    int num[elements];
    for (int i = 0; i < elements; i++)
    {
        cin >> num[i];
    }
    cout << "The largest number entered is: " << checkGreater(num, elements);
}
int checkGreater(int num[], int elements)
{
    int large = num[0];
    for (int j = 1; j < elements; j++)
    {
        if (num[j] > large)
        {
            large = num[j];
        }
    }
    return large;
}