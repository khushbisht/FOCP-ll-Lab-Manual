#include <iostream>
#include <cctype>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
bool isValidPassword(const string& password) {
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;
    string specialChars = "@#$%!&*";

    for (char ch : password) {
        if (isupper(ch)) hasUpper = true;
        else if (islower(ch)) hasLower = true;
        else if (isdigit(ch)) hasDigit = true;
        else if (specialChars.find(ch) != string::npos) hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}
int main() {
    int lower, upper;
    cout << "Enter lower and upper limits to find prime numbers: ";
    cin >> lower >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are:\n";
    for (int num = lower; num <= upper; num++) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;

    string password;
    cout << "Enter a password to validate: ";
    cin >> password;

    if (isValidPassword(password)) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is invalid. It must contain at least one uppercase letter, one lowercase letter, one digit, and one special character (@ # $ % ! & *)." << endl;
    }

    return 0;
}