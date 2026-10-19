#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string sgReadString()
{
    string str;
    cout << "Enter your Text: ";
    getline(cin, str);
    return str;
}

void vPrintFirstLetterOfTheWords(string& Text)
{
    int Counter = 1;
    for(int i = 0; i < Text.length(); i++) 
    {
        if((islower(Text[i]) || isupper(Text[i])) && Counter == 1)
        {
            Text[i] = toupper(Text[i]);
            Counter  = 0;
        }
        if(isspace(Text[i]))
            Counter = 1;
    }
}

int main()
{
    string str = sgReadString();
    cout << "\nstring before: " << str << endl;
    vPrintFirstLetterOfTheWords(str);
    cout << "string after: " << str << endl;
    cin >> str;

    return 0;
}