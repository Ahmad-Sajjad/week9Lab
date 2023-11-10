#include <iostream>
using namespace std;
void alphabets(string word);
main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    alphabets(word);
}
void alphabets(string word)
{
    int i = 0;
    while (word[i] != '\0')
    {
        cout << word[i] << " found at position " << i << endl;
        i++;
    }
}