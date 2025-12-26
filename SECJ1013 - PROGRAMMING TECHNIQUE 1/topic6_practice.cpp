#include <iostream> 
#include <iomanip> 
#include <fstream> 
using namespace std; 

int main() 
{
    string name; 
    int id; 
    double fee; 

    cout << "Enter student name: ";
    getline (cin, name);
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter total fee paid: ";
    cin >> fee;
    
    ofstream outFile;
    outFile.open ("payment.txt");

    cout << "----------------------------------------" << endl; 
    cout << "Student Payment Summary" << endl; 
    cout << "----------------------------------------" << endl; 
    cout << "Name       : " << name << endl ;
    cout << "ID         : " << id << endl ;
    cout << "Total Fee  : " << right << setw(10) << fixed << setprecision(2) << fee << endl ;  
    cout << "----------------------------------------" << endl; 
    
    outFile << "----------------------------------------" << endl; 
    outFile << "Student Payment Summary" << endl; 
    outFile << "----------------------------------------" << endl; 
    outFile << "Name       : " << name << endl;
    outFile << "ID         : " << id << endl ;
    outFile << "Total Fee  : " << right << setw(10) << fixed << setprecision(2) << fee;
    outFile << "----------------------------------------" << endl; 

    outFile.close();

    return 0; 
} 