/*Given a binary number as an integer N, convert it into decimal and print.

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100

Sample Output 1 :
12

Sample Input 2 :
111

Sample Output 2 :
7
---------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    long pow = 1;
    long binary = 0;
    while (n > 0)
    {
        int digit = n % 10;
        binary += digit * pow;
        pow *= 2;
        n /= 10;
    }
    cout << binary;
}
