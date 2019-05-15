#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int input_num;
    cin >> input_num;
    int invert_num{~input_num};
    int complement{invert_num + 1};
    cout << "This is the number you inputted:            " << setfill('0') << hex << setw(8) << input_num << endl;
    cout << "This is the number inverted:                " << setfill('0') << hex << setw(8) << invert_num << endl;
    cout << "This is the number inverted with on added:  " << setfill('0') << hex << setw(8) << complement << endl;
    cout << "This is the number you inputted:            " << dec << input_num << endl;
    cout << "This is the number inverted:               " << dec << invert_num << endl;
    cout << "This is the number inverted with on added: " << dec << complement << endl;
    return 0;
}