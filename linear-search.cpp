#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string name[100];
    int age[100];
    string key;

    cout << "Enter number of family members: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter name of member " << (i + 1) << ": ";
        cin >> name[i];
        cout << "Enter age of member " << (i + 1) << ": ";
        cin >> age[i];
    }

  
    cout << "Enter key name to search: ";
    cin >> key;

   for (int i=0;i<n;i++){
    if (key==name[i]){
    cout<<"THE KEY WORD WAS FOUND!"<<endl;
    cout<<"NAME: "<<name[i]<<"AGE: "<<age[i]<<endl;
    break;
    }else{ 
    cout<<"Not found "<<endl;
    }
}

    return 0;
}