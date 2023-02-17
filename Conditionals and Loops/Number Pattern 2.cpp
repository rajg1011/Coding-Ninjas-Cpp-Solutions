/*Print the following pattern

Pattern for N = 4
          Image here
The dots represent spaces.

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Sample Input :
5

Sample Output :
     Image here
The dots represent spaces.

----------------------------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    i = 1;
    k = 1;
    cin >> n;
    while (i <= n)
    {
        j = 0;
        k = i;
        for (int x = n - i; x != 0; x--)
        {
            cout << " ";
        }
        while (j < i)
        {
            j++;
            cout << k;
            k++;
        }
        cout << endl;
        i++;
    }
}