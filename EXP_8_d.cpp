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

    cout << "Diagonal addition of matrix 1 and 2: " << "\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i == j || i + j == 2)
                m5[i][j] = m1[i][j] + m2[i][j];
            else
                m5[i][j] = 0;
           
            cout << m5[i][j] << "\t";
        }
        cout << "\n";
    }
}

/*
Output:
Enter matrix 1 here: 
Enter 00 element here: 1
Enter 01 element here: 2
Enter 02 element here: 3
Enter 10 element here: 4
Enter 11 element here: 5
Enter 12 element here: 6
Enter 20 element here: 7
Enter 21 element here: 8
Enter 22 element here: 9
1       2       3
4       5       6
7       8       9
Enter matrix 2 here:
Enter 00 element here: 1
Enter 01 element here: 2
Enter 02 element here: 3
Enter 10 element here: 4
Enter 11 element here: 5
Enter 12 element here: 6
Enter 20 element here: 7 
Enter 21 element here: 8
Enter 22 element here: 9
1       2       3
4       5       6
7       8       9
Diagonal addition of matrix 1 and 2:
2       0       6
0       10      0
14      0       18

*/