#include <iostream>
using namespace std;
void jazzifyChords(string array[], int chords);
main()
{
    int chords;
    cout << "Enter the number of chords:  ";
    cin >> chords;
    cout << "Enter " << chords << " chords, one per line: " << endl;
    string array[chords];
    for (int i = 0; i < chords; i++)
    {
        cin >> array[i];
    }
    jazzifyChords(array, chords);
}
void jazzifyChords(string array[], int chords)
{
    cout << "Jazzified chords: [";
    for (int i = 0; i < chords; i++)
    {
        if (array[i].back() != '7')
        {
            if (i == chords - 1)
            {
                cout << array[i] << "7";
                break;
            }
            cout << array[i] << "7, ";
        }
        else
        {
            if (i == chords - 1)
            {
                cout << array[i];
                break;
            }
            cout << array[i] << ", ";
        }
    }
    cout << "]";
}