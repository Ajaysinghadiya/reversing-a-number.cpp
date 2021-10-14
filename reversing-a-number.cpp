#include <iostream>
using namespace std;

int main()
{
    int n, num, reverse = 0, remaindar;//initialising and declaing some variables
    cout << "enter a number to revers it :" << endl;
    cin >> n;//taking input from user

    while (n != 0)//starting a while loop ,it will stop when n will be equals to the 0
    {
        remaindar = n % 10;//finding the remaindar
        reverse = reverse * 10 + remaindar;//to print the reverse
        n = n / 10;//removing the last digit of given number
    }

    cout << "the reversed number of is :" << reverse << endl;//pinting the reversed number
    return 0;
}
