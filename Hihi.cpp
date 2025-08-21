#include <iostream>
#include <cassert>
using namespace std;

int strcmp_case_insensitive(string one, string two)
{
    int equals=0;
    for (int i=0; i< one.length(); i++)
    {
        if (one[i]== two[i])
        {
            equals=0;
        }
        else
        {
            int charOne= static_cast<int>(one[i]);
            int charTwo= static_cast<int>(two[i]);
            if(charOne < charTwo)
            {
                equals= -1;
            }
            else if (charOne > charTwo)
            {
                equals= 1;
            }
        }
    }
    return equals;
}

int main()
{

    cout << strcmp_case_insensitive("2","50 ")<< endl;
    cout << strcmp_case_insensitive("5","5 ") << endl;
    cout << strcmp_case_insensitive("2","10 ") << endl;
    cout << strcmp_case_insensitive("2 Some string","50 Some string ") << endl;
    cout << strcmp_case_insensitive("20 Some string","1 Some string") << endl;
    cout << strcmp_case_insensitive("my cool string","mycoolstring") << endl;
    
}
