#include <iostream>

using namespace std;

int a, b, result = 0;
char arifm;

void console() {
    cout << endl << a << arifm << b << "=" << result << endl << "------------------------------" << endl;
}

int main() {
    while (1) {
        cout << "Ivan Alexsandrovich, please, enter your expression: " << endl;
        cin >> a >> arifm >> b;
        switch (arifm) {
            case '+':
                result = a + b;
                console();
                break;
            case '-':
                result = a - b;
                console();
                break;
            case '*':
                result = a * b;
                console();
                break;
            case '/':
                result = a / b;
                console();
                break;
            default:
                cout << "Incorrect expression, please, try again!" << endl << "------------------------------" << endl;
                break;
        }
    }
    return 0;
}

