#include <iostream>

using namespace std;

int fibonacciSeries(int n) {

    if(n == 0) {
        return 0;
    }else if (n ==1){
        return 1;
    }else {
        return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    }
}

int main () {
    int x;
    cout << "ENTER NUMBER OF YOUR NUMBERS: "<<endl;
    cin >> x;
    
    cout<< "FIBANOCCI SERIES OF" << x << "NUMBERS:" <<endl;
    for(int i=0; i<=x; i++){

        cout <<fibonacciSeries(i)<<" ";

    }



    return 0;
}