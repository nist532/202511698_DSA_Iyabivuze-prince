#include<iostream>

using namespace std;

int main(){

    int NumbersList[4] = {77, 35, 103, 29};


    cout << "ARRAY BEFORE SORTING:" << endl;
    for(int i = 0; i < 4; i++){
        cout << NumbersList[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4 - i - 1; j++){
            if(NumbersList[j] > NumbersList[j + 1]){
            
                int temp = NumbersList[j];
                NumbersList[j] = NumbersList[j + 1]; 
                NumbersList[j + 1] = temp;
            }
        }
    }

    cout << "ARRAY AFTER SORTING:" << endl;
    for(int i = 0; i < 4; i++){
        cout << NumbersList[i] << " ";
    }
    cout << endl;

    return 0;
}
