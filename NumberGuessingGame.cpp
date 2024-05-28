#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand((unsigned int) time(NULL));
    int num = (rand() % 100) + 1; 
    int count = 0;
    cout << "Number Guessing Game." << endl;

    do
    {
        cout << "Guess a number between 1 to 99. " << endl;
        cin >> count;
        if (num > count)
        {
            cout << "guess higher!" << endl;
        }
        else if (num < count)
        {
            cout << "guess lower!" << endl;
        }
        else
        {
            cout << "correct guess , the number is " << num <<endl <<"YOU WON !!";
        }
         
    } while (count != num);

    return 0;
}
