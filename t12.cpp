#include <iostream>
using namespace std;
bool isSpecial(int array[], int size);
main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements of the array: " << endl;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    if (isSpecial(array, size))
    {

        cout << "The array is special";
    }
    else
    {

        cout << "The array is not special";
    }
}
bool isSpecial(int array[], int size)
{
    for (int j = 0; j < size; j++)
    {
        if (j % 2 == 0)
        {

            if (array[j] % 2 != 0)
            {
                return false;
            }
        }

        else if (j % 2 != 0)
        {

            if (array[j] % 2 == 0)
            {
                return false;
            }
        }
    }
    return true;
}
