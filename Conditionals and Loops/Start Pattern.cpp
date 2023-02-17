/*Print the following pattern

Pattern for N = 4
         Image here
The dots represent spaces.

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1 :
3

Sample Output 1 :
   *
  ***
 *****

Sample Input 2 :
4

Sample Output 2 :
    *
   ***
  *****
 *******

-----------------------------------------------------------------------------------------*/

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
        k = 1;
        for (int x = n - i; x != 0; x--)
        {
            cout << " ";
        }

        while (j < i)
        {
            j++;
            cout << "*";
        }

        while (k < i)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
}