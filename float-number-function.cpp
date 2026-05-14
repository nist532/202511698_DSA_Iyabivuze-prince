#include <iostream>

using namespace std;

void floatNumber(){
    float num1, num2, num3, num4;
    float sum;

    cout<< "ENTER NUMBER ONE: "<<endl;
    cin>> num1;
    cout<< "ENTER NUMBER TWO: "<<endl;
    cin>> num2;
    cout<< "ENTER NUMBER THREE: "<<endl;
    cin>> num3;
    cout<< "ENTER NUMBER FOUR: "<<endl;
    cin>> num4;

    sum = (num1 + num2 + num3 + num4);

    cout<<"The SUM IS: "<<sum<<endl;
}
int main () {
    floatNumber();

    return 0;

}   

