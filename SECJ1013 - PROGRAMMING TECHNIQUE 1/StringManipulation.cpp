#include <iostream>
#include <cstring>
using namespace std;

int main () {

    const int SIZE = 20;
    char city[SIZE];

    cin.getline (city, SIZE);
    cout << "You entered: " << city << endl;

    cout << "Length of " << city << " is " << strlen(city) << endl;

    char taman[SIZE] = "Tmn U, ";
    cout << "The combined string is " << strcat(taman, city) << endl;

    char copiedAddress[SIZE];
    strcpy (copiedAddress, "Tmn U, Skudai");

    cout << "The copied string is " << copiedAddress << endl;

    cout << strstr(copiedAddress, "U") << endl;

    if (strcmp(copiedAddress, "Tmn U, SkudI"))
        cout << "Different String \n";
    else
        cout << "Same String\n";
    cout << strcmp(copiedAddress, "Tmn U, SkudI") << endl;

    int num;
    num = atoi ("abc23");
    cout << num << endl;
    

    return 0;

}