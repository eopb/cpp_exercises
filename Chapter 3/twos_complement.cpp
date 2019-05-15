#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int input_num;
    cin >> input_num;
    int invert_num{~input_num};
    int complement{invert_num + 1};
    cout << "This is the number you inputted: " << input_num << endl;
    cout << "This is the number inverted: " << invert_num << endl;
    cout << "This is the number inverted with on added: " << complement << endl;
    return 0;
}