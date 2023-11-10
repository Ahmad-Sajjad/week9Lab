#include <iostream>
using namespace std;
void reverse(int num[], int elements);
int main()
{
    int elements;
    cout << "Enter the number of elements: ";
    cin >> elements;
    if (elements < 0)
    {
        cout << "Invalid input, Number of elements must be greater than 0." << endl;
        return 0;
    }
    cout << "Enter " << elements << " numbers, one per line: " << endl;
    int num[elements];
    for (int i = 0; i < elements; i++)
    {
        cin >> num[i];
    }
    reverse(num, elements);
}
void reverse(int num[], int elements)
{
    cout << "Numbers in reverse order: ";
    for (int i = elements - 1; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
}