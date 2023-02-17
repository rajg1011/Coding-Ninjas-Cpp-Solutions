/*Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5

Sample Output :
1234554321
1234**4321
123****321
12******21
1********1

--------------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        int y = 1;
        while (y <= n - i + 1)
        {
            cout << y;
            y++;
        }
        for (int stars = 1; stars <= (n - y + 1) * 2; stars++)
        {
            cout << "*";
        }

        for (int j = n - i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}