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

    cout << strcmp_case_insensitive("hello","Hello ")<< endl;
    cout << strcmp_case_insensitive("ojos tristes","lejos de ti") << endl;
    cout << strcmp_case_insensitive("pepto","pepeto ") << endl;
    cout << strcmp_case_insensitive("Sorry","Not Sorry") << endl;
    cout << strcmp_case_insensitive("twIning","twining") << endl;
    cout << strcmp_case_insensitive("so cooler","so cool") << endl;
    
}
