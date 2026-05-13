#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "ENTER THE NUMBER OF FAMILY MEMBERS:" << endl;
    cin >> a;

    int age[a];
    string name[a];
    int low =0;
    int high = a-1;
    int middle;
    bool found = false;

    for (int i = 0; i < a; i++) {
        cout << "ENTER THE NAME OF MEMBER " << (i + 1) << ":" << endl;
        cin >> name[i];

        cout << "ENTER THE AGE OF MEMBER " << (i + 1) << ":" << endl;
        cin >> age[i];
    }
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {

            if (name[j] > name[j + 1]) {

                string tempName = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tempName;

                int tempAge = age[j];
                age[j] = age[j + 1];
                age[j + 1] = tempAge;
            }
        }
    }

    cout << "FAMILY MEMBERS IN ALPHABETICAL ORDER:" << endl;
    for (int i = 0; i < a; i++) {
        cout << name[i] << " - " << age[i] << " years" << endl;
    }

    string target;
    cout << "ENTER THE KEY WORD TO SEARCH FOR:  " << endl;
    cin >> target;

    while(low<=high){
        middle = (low + high) / 2;
        if (name[middle] == target) {
            cout << "MEMBER FOUND AT INDEX " << middle << endl;
            cout<<"NAME: "<<name[middle]<<" AGE: "<<age[middle]<<endl;
            found = true;
            break;
        } else if (name[middle] < target) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }
    if(!found){
        cout << "MEMBER NOT FOUND!" << endl;
    }

    return 0;
}