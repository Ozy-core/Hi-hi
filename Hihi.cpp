#include <iostream>
#include <cassert>
using namespace std;

int strcmp_case_insensitive(string one, string two)
{
    int charOne= 0;
    int charTwo= 0;
    for (int i=0; i<one.length(); i++)
    {
        charOne+= static_cast<int>(one[i]);
        charTwo+= static_cast<int>(two[i]);
    }

    if(charOne > charTwo)
    {
        return 1;
        }
    else if(charOne < charTwo)
    {
        return -1;
    }
    else if(charOne == charTwo)
    {
        return 0;
    }
    return -1;
}

int main()
{

    cout << strcmp_case_insensitive("2","50 ")<< endl;
    cout << strcmp_case_insensitive("5","5 ") << endl;
    cout << strcmp_case_insensitive("2 some string","50 some string ") << endl;

    assert(strcmp_case_insensitive("10","5"));
    assert(strcmp_case_insensitive("600","70"));
    
}
