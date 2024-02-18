#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
    string hl = "Hello World!";
    string res = "";

    for (int i = 0; i < hl.size(); i++)
    {
        for (char j = ' '; j < 'z' + 1; j++)
        {
            cout << res << j << endl;
            if (j == hl[i])
            {
                res += j;
                break;
            }
            Sleep(100);
        }
        
    }
    cout << endl << endl << res << endl;
}
