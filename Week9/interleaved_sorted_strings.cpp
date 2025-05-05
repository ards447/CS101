#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2, str;
    cin >> str1;
    cin >> str2;
    cin >> str;

    const char *ptr1 = str1.c_str(), *ptr2 = str2.c_str(), *ptr3 = str.c_str();
    bool formable = true;

    while (*ptr3 != '\0')
    {
        if (*ptr1 == *ptr3 && *ptr2 == *ptr3)
        {
            ptr1++;
            ptr2++;
            ptr3++;

            if (*ptr1 == *ptr3)
            {
                ptr2--;
                ptr3--;
            }
            else if (*ptr2 == *ptr3)
            {
                ptr1--;
                ptr3--;
            }
        }
        else if (*ptr1 == *ptr3)
            ptr1++;
        else if (*ptr2 == *ptr3)
            ptr2++;
        else
        {
            formable = false;
            break;
        }

        ptr3++;
    }

    if (formable && *ptr1 == '\0' && *ptr2 == '\0')
        cout << "true";
    else
        cout << "false";

    return 0;
}