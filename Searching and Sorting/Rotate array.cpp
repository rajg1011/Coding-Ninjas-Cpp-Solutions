/*You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
 Note:
Change in the input array/list itself. You don't need to return or print the elements.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

First line of each test case or query contains an integer 'N' representing the size of the array/list.

Second line contains 'N' single space separated integers representing the elements in the array/list.

Third line contains the value of 'D' by which the array/list needs to be rotated.

Output Format :
For each test case, print the rotated array/list in a row separated by a single space.

Output for every test case will be printed in a separate line.

Constraints :
1 <= t <= 10^4
0 <= N <= 10^6
0 <= D <= N
Time Limit: 1 sec

Sample Input 1:
1
7
1 2 3 4 5 6 7
2

Sample Output 1:
3 4 5 6 7 1 2

Sample Input 2:
2
7
1 2 3 4 5 6 7
0
4
1 2 3 4
2

Sample Output 2:
1 2 3 4 5 6 7
3 4 1 2
---------------------------------------------------------------------------------------------*/
void rotate(int *arr, int d, int n)
{

    for (int i = 0; i <= n / 2 - 1; i++)
    {                            // Here what we do is-
        int temp = arr[i];       // 1) rotate the whole array.
        arr[i] = arr[n - i - 1]; // 2) then rotate the array only upto n-d.
        arr[n - i - 1] = temp;   // 3) then rotate the remaining d elements.
    }
    for (int j = 0; j <= (n - d) / 2 - 1; j++)
    {
        int temp = arr[j];
        arr[j] = arr[n - d - j - 1];
        arr[n - d - j - 1] = temp;
    }
    for (int p = 0; p <= d / 2 - 1; p++)
    {
        int temp = arr[n - d + p];
        arr[n - d + p] = arr[n - p - 1];
        arr[n - p - 1] = temp;
    }
}
