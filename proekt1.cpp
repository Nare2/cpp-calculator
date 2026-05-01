#include <iostream>
using namespace std;
int main() {
    system("color 0B");
    int choice;
    double a, b;
    while (true) {
        cout << "\n===========================\n";
        cout << "       CALCULATOR        \n";
        cout << "===========================\n";
        cout << "1️ Add (+)\n";
        cout << "2️ Subtract (-)\n";
        cout << "3️ Multiply (*)\n";
        cout << "4️ Divide (/)\n";
        cout << "5 Modul (%) \n";
        cout << "6 Exit\n";
        cout << "\n Choose option: ";
        cin >> choice;
        if (cin.fail()) {
            cout << " Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if (choice == 6) {
            cout << " Bye!\n";
            break;
        }
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "\n---------------------------\n";
        switch (choice) {
        case 1:
            cout << " Result: " << a + b << endl;
            break;

        case 2:
            cout << " Result: " << a - b << endl;
            break;

        case 3:
            cout << " Result: " << a * b << endl;
            break;

        case 4:
            if (b == 0) {
                cout << "❌ Error: Cannot divide by zero!\n";
            }
            else {
                cout << " Result: " << a / b << endl;
            }
            break;
        case 5:
            if (b == 0) {
                cout << "❌ Error: Cannot modulo by 0!\n";
            }
            else {
                cout << " Result: " << (int)a % (int)b << endl;
            }
            break;

        default:
            cout << " Invalid choice!\n";
        }
    }

    return 0;
}