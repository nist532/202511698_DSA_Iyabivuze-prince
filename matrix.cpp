#include <iostream>

using namespace std;

int main() {

    int matrix[3][3] = {1,2,3,4,5,6};


    cout <<"Matrix: "<<endl;


    for(int i=0; i<=2; i++) {
        for(int k=0; k<=1; k++){
            cout <<matrix[k][i] <<" ";
        }
        cout<<endl;
    }


    return 0;
}