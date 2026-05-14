#include <iostream>
#include <string>

using namespace std;

void userInfo(string name, int age, string city) {
    cout<< "Name: " << name <<endl;
    cout<< "Age: " << age <<endl;
    cout<< "City: " << city <<endl;
}

int main() {
    userInfo("Iyabivuze", 20, "kigali");

    return 0;
}