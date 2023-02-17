/*Given a number N, print sum of all even numbers from 1 to N.

Input Format :
Integer N

Output Format :
Required Sum

Sample Input 1 :
 6

Sample Output 1 :
12
--------------------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, sum;
    sum = 0;
    i = 0;
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << sum;
}