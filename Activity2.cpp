#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string fullName, courseYearSec, birthday, motto;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your course, year & section: ";
    getline(cin, courseYearSec);

    cout << "Enter your birthday (e.g., MM/DD/YYYY): ";
    getline(cin, birthday);

    cout << "Enter your motto or motivation in life: ";
    getline(cin, motto);

    cout << "\nHi! I'm " << fullName << " of " << courseYearSec << ". Welcome to Data Structures and Algorithm!" << endl;
    cout << "My Birthday is on " << birthday << ". and my motto/motivation in life is " << motto << endl;

    return 0;

}
