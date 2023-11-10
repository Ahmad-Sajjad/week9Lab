#include <iostream>
using namespace std;
void joining(string argument);
main()
{
    string argument;
    cout << "Enter the argument 'a': ";
    getline(cin, argument);
    joining(argument);
}
void joining(string argument)
{
    int i = 0;
    int j = 0;
    string first = "something";
    cout<<"Result: ";
    while (first[i] != '\0')
    {
        cout << first[i];
        i++;
        if (first[i] == '\0')
        {
            cout<<" ";
            while (argument[j] != '\0')
            {
                cout << argument[j];
                j++;
            }
        }
    }
}