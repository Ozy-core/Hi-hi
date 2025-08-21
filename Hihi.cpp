#include <iostream>
#include <cassert>
using namespace std;

int strcmp_case_insensitive(string one, string two)
{
    for (int i=0; i<one.length(); i++)
    {
        int charOne= static_cast<int>(one[i]);
        int charTwo= static_cast<int>(two[i]);
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
    }
    return -1;
}

int main()
{

    cout << strcmp_case_insensitive("2","50 \n");
    cout << strcmp_case_insensitive("2","10 \n");
    cout << strcmp_case_insensitive("2 some string","50 some string \n");

    assert(strcmp_case_insensitive("10","5"));
    assert(strcmp_case_insensitive("600","70"));
    
}
