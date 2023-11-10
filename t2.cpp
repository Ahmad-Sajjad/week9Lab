#include <iostream>
using namespace std;
void alphabets(string word);
main()
{
    string word;
    cout << "Enter a string: ";
    getline(cin, word);
    alphabets(word);
}
void alphabets(string word)
{
    int i = word.length();
    cout << "Reversed String: ";
    for (int j = i-1; j >= 0; j--)
    {
        cout << word[j];
    }
}