#include <iostream>
#include <string>
using namespace std;

int main()
{
    string enrollment, name, branch, keyword;
    string first, last;

    cout << "****************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "****************************************" << endl;

  M :  cout << "Enter Enrollment Number : ";
    cin >> enrollment;

    cout << "Enter Student Name : ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Branch : ";
    getline(cin, branch);


// Student Reference
    cout << "\n----------------------------------------" << endl;
    cout << "Student Reference" << endl;
    cout << name << "-" << enrollment << endl;


// First and Last Name
    int pos = name.find(' ');

    if (pos != -1)
    {
        first = name.substr(0, pos);
        last = name.substr(pos + 1);
    }
    else
    {
        first = name;
        last = "";
    }

    cout << "\n----------------------------------------" << endl;
    cout << "First Name" << endl;
    cout << first << endl;

    cout << "Last Name" << endl;
    cout << last << endl;


// Search Keyword
    cout << "\n----------------------------------------" << endl;
    cout << "Enter Keyword : ";
    cin >> keyword;

    if (name.find(keyword) != string::npos)
        cout << "Keyword Found." << endl;
    else
    {
        cout << "Keyword Not Found." << endl;
        goto M;
    }


    // Student Report
    cout << "\n----------------------------------------" << endl;
    cout << "Student Report" << endl;

    cout << "Enrollment Number : " << enrollment << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Branch            : " << branch << endl;


    return 0;
}
