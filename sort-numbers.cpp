#include <iostream>
using namespace std;

int main() {
    int numbers[] = {109, 99, 23, 45, 23, 2, 5, 1};
    int n = 8;
    int temp;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (numbers[j] < numbers[i]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "NUMBERS IN ASCENDING ORDER:" << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}