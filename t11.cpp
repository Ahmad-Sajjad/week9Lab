#include <iostream>
using namespace std;
void vowelRemover(string sentence);
main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    vowelRemover(sentence);
}
void vowelRemover(string sentence)
{
    int i = 0;
    cout << "String with vowels removed: ";
    while (sentence[i] != '\0')
    {
        if (sentence[i] == 65 || sentence[i] == 69 || sentence[i] == 73 || sentence[i] == 79 || sentence[i] == 85)
        {
            i++;
            continue;
        }
        else if (sentence[i] == 97 || sentence[i] == 101 || sentence[i] == 105 || sentence[i] == 111 || sentence[i] == 117)
        {
            i++;
            continue;
        }
        else if (sentence[i] == 32)
        {
            cout << char(32);
            i++;
            continue;
        }
        cout << sentence[i];
        i++;
    }
}