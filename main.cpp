#include <iostream>
#include <cstdlib>

using namespace std;

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}

int add(int a, int b) {
    return a + b;
}

int reduce(int a, int b) {
    return a - b;
}

int main() {
    clear_screen();
    cout << "Hello, I am learning C++\n" << endl;
    cout << "=================" << endl;
    cout << "Simple Calculator" << endl;
    cout << "=================" << endl;
    cout << "1. Add" << endl;
    cout << "2. Reduce" << endl;
    cout << "\nChoose an option: ";
    string option;
    cin >> option;
    if (option == "1") {
        cout << "Enter two numbers with spaces: ";
        int a, b;
        cin >> a >> b;
        cout << "Sum: " << add(a, b) << endl;
    }else if (option == "2") {
        cout << "Enter two numbers with spaces: ";
        int a, b;
        cin >> a >> b;
        cout << "Reduce: " << reduce(a, b) << endl;
    }else {
        cout << "Invalid Input! Exiting..." << endl;
        exit(1);
    }
    return 0;
}

