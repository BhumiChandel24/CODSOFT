#include <iostream>
using namespace std;
int main()
{
    int n;
    int x = 24, count = 0;
    cout << "Number Guessing Game." << endl;
    int i = 1;

    do
    {
        cout << "Guess a number between 1 to 99. " << endl;
        cin >> n;
        if (n > x)
        {
            cout << "The guess is too high!" << endl;
        }
        else if (n < x)
        {
            cout << "The guess is too low!" << endl;
        }
        else
        {
            cout << "correct guess , the number is " << n << "  and the Attempts made are " << count;
        }
        count++;
    } while (n != x);

    return 0;
}