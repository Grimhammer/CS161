#include <iostream>

using namespace std;

/* this function will prompt the user for their age as an integer
    and their name as a string and then return the results. */

int main()
{
    int age;
    string name;
    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "Thank you, please enter your name: " << endl;
    cin >> name;
    cout << "Thank you. Your name is " << name << ", and your age is " << age << "." << endl;
    return 0;
}
