//This program demonstrate basic C++ input and output
//It uses variables, identifiers, cin and cout

#include <iostream> //We need this preprocessor directive to use cin and cout
using namespace std; //This namespace tells what we are using the standard namespace 

int main() {
    //We must define variables before using it
    string firstName;
    int userAge;
    double favouriteNum;
    char lastNameInitial;

    //Always display a prompt before using cin
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your age: ";
    cin >> userAge;

    cout << "Enter your favourite number (can be in decimal): ";
    cin >> favouriteNum;

    cout << "Enter your first initial of your name: ";
    cin >> lastNameInitial;

    //Display a blank line for spacing
    cout << "\n--- Your Profile Summary ---\n";

    //Display the stored values from variabless 
    cout << "Name: \t\t"<< firstName << endl;
    cout<< "Age: \t\t" << userAge << endl;
    cout << "Favourite #: \t" << favouriteNum << endl;
    cout << "Initial: \t" << lastNameInitial<< endl;

    //send 0 back to OS to indicate succcess
    return 0; 
}