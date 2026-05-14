#include <iostream>
using namespace std;

long factorial(int n) {
    if (n <= 1) {
        return 1;
    } 
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "ENTER NUMBER FOR FACTORIAL: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "FACTORIAL OF " << n << " IS: " << factorial(n) << endl;
    }

    return 0;
}