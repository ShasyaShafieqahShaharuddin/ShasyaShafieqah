#include <iostream>
using namespace std;
#include <cmath>
int sum (int num1, int num2);
int diff (int num1, int num2);

int main() {

    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Sum: " << sum(num1, num2) << endl;
    cout << "Difference: " << diff(num1, num2)<< endl;

    return 0;
}

int sum (int num1, int num2) {
    int sum;
    sum = num1 + num2;
    return sum;
}

int diff (int num1, int num2){
    int diff;
    diff = num1-num2;
    return diff;
}