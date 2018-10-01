#include <iostream>
using namespace std;

int main()
{
    unsigned int yards{}, feet{}, inches{};
    cout << "Enter a distance in yards, feet and inches"
         << "with the three values separated by spaces" << endl;
    cin >> yards >> feet >> inches;
    const unsigned feet_per_yard{3};
    const unsigned inches_per_foot{12};
    unsigned total_inches{};
    total_inches = inches + inches_per_foot * (yards * feet_per_yard + feet);
    cout << "The distance corresponds to " << total_inches << " inches.\n";
    cout << "Enter a distance in inches: ";
    cin >> total_inches;
    feet = total_inches / inches_per_foot;
    inches = total_inches % inches_per_foot;
    yards = feet / feet_per_yard;
    feet = feet % feet_per_yard;
    cout << "The distance corresponds to "
         << yards << " yards "
         << feet << " feet "
         << inches << " inches." << endl;
    return 0;
}
