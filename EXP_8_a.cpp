//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    int m1[3][3], m2[3][3], m3[3][3], m4[3][3], m5[1][3], m6[3][3], m7[3][3];
    cout << "Enter matrix 1 here: " << "\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter " << i << j << " element here: ";
            cin >> m1[i][j];
        }
       
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << m1[i][j] << "\t";
        cout << "\n";
    }

    cout << "Enter matrix 2 here: " << "\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
        {
            cout << "Enter " << i << j << " element here: ";
            cin >> m2[i][j];
        }
       
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << m2[i][j] << "\t";
        cout << "\n";
    }
}