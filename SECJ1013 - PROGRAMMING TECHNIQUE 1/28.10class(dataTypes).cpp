//show some examples of datatypes that can be used in C++
#include<iostream>
using namespace std;
#include <string>

int main(){
    cout << "---C++ Data Types Examples---\n\n";

    //integer Types (for whole number)
    int age = 30;
    long population = 4294967295;
    short temperature = -5;
    unsigned int distance = 10;

    //Floating-point Types (for decimal number)
    float price = 19.99f;
    double pi = 3.1416;

    //Charracter Type (for single character)
    char grade = 'A';
    char symbol = '$';

    //Boolean Types (for true/false values)
    bool isStudent = true;
    bool isRaining = false;
    cout <<  boolalpha; //use "boolalpha" to print "true" or "false" instead of 1/0
    cout << "isstudent: " << isStudent << endl;
    cout << "isRaining: " << isRaining << endl << endl;

    //String Types (for text)
    string greeting = "Hello, world!";
    string name = "Shasya";
    cout << "Greeting: " << greeting << endl;
    cout << "Name: " << name << endl;

    int z, y=-5;
    z=8-3+9/2+2*-y;
    cout << z <<endl;
    z=8-(3+9/2)+2*-y;
    cout << z << endl; 

    return 0;
}