#include <iostream>
using namespace std;
void insertion(int array1[], int array2[], int firstArray, int secondArray);
main()
{
    int firstArray, secondArray;
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> firstArray;
    cout << "Enter " << firstArray << " elements for the first array, one per line: " << endl;
    int array1[firstArray];
    for (int i = 0; i < firstArray; i++)
    {
        cin >> array1[i];
    }
    cout << "Enter the number of elements for the second array: ";
    cin >> secondArray;
    cout << "Enter " << secondArray << " elements for the first array, one per line: " << endl;
    int array2[firstArray];
    for (int j = 0; j < secondArray; j++)
    {
        cin >> array2[j];
    }
    insertion(array1, array2, firstArray, secondArray);
}
void insertion(int array1[], int array2[], int firstArray, int secondArray)
{
    cout << "Resulting array: [" << array1[0] << ", ";
    for (int k = 0; k < secondArray; k++)
    {
        cout << array2[k] << ", ";
    }
    cout << array1[1] << "]";
}
