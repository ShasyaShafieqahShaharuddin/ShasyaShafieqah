#include <iostream>
using namespace std;

int main() {

    const int SIZE = 10;
    int values[SIZE] , smallest, largest ; 

    cout << "Enter 10 values: \n";

    for (int count = 0; count < SIZE ; count++){
        cin >> values[count];
    }

    smallest = values[0];
    largest = values[0];

    for (int n=1; n < SIZE ; n++){

        if (values[n]< smallest){
            smallest = values[n];
        }

        if (values[n] > largest){
            largest = values[n];
        }
    }

    cout << "Largest values = " << largest;
    cout << "\nSmallest values = " << smallest;

    return 0;
}