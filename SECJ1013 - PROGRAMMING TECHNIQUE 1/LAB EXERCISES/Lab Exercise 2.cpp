// NAME: SHASYA SHAFIEQAH BINTI SHAHARUDDIN
// MATRICS NUMBER: A25CS0350
// DATE: 11/11/2025
// SET NUMBER: 2

#include <iostream>
using namespace std;

int main() {

    int num, digit = 0, sum = 0;

    cout << "Enter an integer number: ";
    cin >> num;

    while ( num > 0){

        digit = num % 10;
        cout << digit ;
        num = num / 10;

        if ( num > 0 ){

            cout << " + ";

        }
        else {

            cout << " = ";

        }

        sum += digit;

        if ( num == 0 ){

            cout << sum << endl;

        }

    }

    if ( sum % 2 == 0 ){

        cout << sum << " is even number " ;

    } 
    else {

        cout << sum << " is odd number " ;

    }
    
    if ( sum % 4 == 0 ){

        cout << "&  multiples of 4" ;

        if ( sum % 5 == 0 ){
            cout << " and 5" ;
        }        

    } 
    else {

        if ( sum % 5 == 0 ){
            cout << "& multiples of 5" ;
        }

    }

    return 0;
}