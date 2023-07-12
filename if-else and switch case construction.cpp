// Harsharan Singh Gill   102106096   2EC5   PL2
#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // if statement
    if (num > 0) 
    {
        cout << "The number is positive." <<endl;
    }

    // if-else statement
    if (num % 2 == 0) 
    {
        cout << "The number is even." <<endl;
    } else 
    {
        cout << "The number is odd." <<endl;
    }

    // else-if ladder
    if (num > 100) 
    {
        cout << "The number is greater than 100." <<endl;
    } else if (num > 50) 
    {
        cout << "The number is between 51 and 100 (inclusive)." <<endl;
    } else if (num > 0) 
    {
        cout << "The number is between 1 and 50 (inclusive)." <<endl;
    } else 
    {
        cout << "The number is less than or equal to 0." <<endl;
    }

    // switch-case construct
    switch (num) 
    {
        case 1:
            cout << "The number is 1." <<endl;
            break;
        case 2:
        case 3:
            cout << "The number is either 2 or 3." <<endl;
            break;
        case 4:
        case 5:
            cout << "The number is either 4 or 5." <<endl;
            break;
        default:
            cout << "The number is not 1, 2, 3, 4, or 5." <<endl;
    }

    return 0;
}
