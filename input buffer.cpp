#include <iostream>
#include <string>
#include <limits> // Required for std::numeric_limits
using namespace std;

int main() {
    int number;
    string name;

    cout << "Enter a number: ";
    cin >> number;
    //cin.ignore(std::numeric_limits<streamsize>::max(), '\n'); // Consume the newline left-over or stop buffering



    cout << "Enter your name: ";
     cin >> ::ws;
    getline(cin, name);

    cout << "Number = " << number << endl;
    cout << "Name = " << name << endl;

    return 0;
}

