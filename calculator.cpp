#include <iostream>
#include <cmath>    // for pow() function
using namespace std;

int main() {
    double num1, num2;
    char op;
    char choice;
    cout << "------ C++ Calculator --------\n";

    do {
        cout << "\nEnter first number: ";
        cin >> num1;

        cout << "Enter operator (+, -, *, /, %, ^): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        double result;
        bool valid = true;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    cout << "Error: Division by zero not allowed!\n";
                    valid = false;
                }
                break;
            case '%':
                if (num2 != 0)
                    result = fmod(num1, num2); // handles floating-point modulus
                else {
                    cout << "Error: Modulus by zero not allowed!\n";
                    valid = false;
                }
                break;
            case '^':
                result = pow(num1, num2);
                break;
            default:
                cout << "Invalid operator!\n";
                valid = false;
        }

        if (valid)
            cout << "Result: " << result << endl;

        cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you for using the calculator. Goodbye!\n";
    return 0;
}
