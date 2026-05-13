#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[] = {"Zuck", "Shayd", "Emely", "Amjed", "Esther", "Anne","Manar"};
    int n = 7;
    string temp;

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (names[i]>names[j]) {
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    cout << "NAMES IN ALPHABETICAL ORDER:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }
    cout << endl;

    return 0;
}