#include <iostream>

using namespace std;

bool strcmp(string str1, string str2)
{
    bool equal;
    if (str1.length()==str2.length()){
        for (int i; i<=str1.length()-1; i++)
        {
            if(str1[i]== str2[i])
            {
                equal= true;
            }
            else
            {
                return false;
            }
        }
    }
}

int main()
{
    bool a = strcmp("mymom","MyMom");

    cout << a;
    return 0;
}
