#include <iostream>
using namespace std;
bool unique(int size, int array[], int num);
main()
{
    int elements;
    cout << "Enter the number of elements: ";
    cin >> elements;
    cout << "Enter " << elements << " numbers, one per line:" << endl;
    int array[elements];
    int size = 0;
        int num;
    for (int i = 0; i < elements; i++)
    {
        cin >> num;
        if (unique(size, array, num))
        {
            cout << "Already Entered: " << num << endl;
        }
        else
        {
            array[size] = num;
            size++;
        }
    }
    cout << "Unique numbers entered: ";
    for (int k = 0; k < size; k++)
    {
        cout << array[k] << " ";
    }
}
bool unique(int size, int array[], int num)
{
    for (int j = 0; j < size; j++)
    {
        if (num == array[j])
        {
            return true;
        }
        return false;
    }
}