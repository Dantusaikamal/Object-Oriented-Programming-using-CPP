/* 

Program to print the following pattern:

B
BI
BIE
BIET
BIE
BI
B
*/
#include <iostream>
using namespace std;
int main()
{
    char patten[20];
    int i, j;

    cout << "Enter a string: ";
    cin >> patten;

    for (i = 0; patten[i] != '\0'; i++)
    {
        for (j = 0; j <= i; j++)
            cout << patten[j];
        cout << "\n";
    }

    return 0;
}
