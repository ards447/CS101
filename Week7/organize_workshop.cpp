#include <iostream>
using namespace std;

int main()
{
    int rest, m;
    cin >> rest >> m;

    char workshop[m];
    for (int i = 0; i < m; i++)
        cin >> workshop[i];

    int num[26] = {};
    for (int i = 0; i < m; i++)
        num[workshop[i] - 'A']++;
    
    int days;
    
}