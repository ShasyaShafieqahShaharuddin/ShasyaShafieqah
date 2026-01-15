//LAB EXERCISE 4
// DATE: 26/12/2025
// NAME: SHASYA SHAFIEQAH BINTI SHAHARUDDIN
// MATRICS NUMBER: A25CS0350

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readFile (double[], int&);
void computeC (double[], double[], int);
double average (double[], int);
char grade (double);
void writeFile ( double[], double[], int);

int main ()
{
    const int SIZE = 8;
    double F[SIZE], C[SIZE], avg;
    int high=0, medium=0, low=0, count=0;
    char grades[SIZE];

    readFile(F,count);

    computeC(F, C, count);

    avg = average (C, count);

    for (int i=0; i<count ; i++)
    {
        grades[i] = grade (C[i]);
    }

    writeFile (F, C, count);

    for (int n=0 ; n < count ; n++)
    {
        switch (grades[n]){
            case 'H' : high++ ;
                       break;
            case 'M' : medium++ ;
                       break;
            case 'L' : low++ ;
                       break;
        }
    }

    cout << "Average of the temperature in Celcius: " << fixed << setprecision(1) << avg << endl;
    cout << "Number of high temperature: " << high << endl;
    cout << "Number of medium temperature: " << medium << endl;
    cout << "Number of low temperature: " << low << endl;

    return 0;
}

void readFile (double F [], int& count)
{    
    ifstream inFile("input.txt");

    if (!inFile)
    {
        cout << "Error: Cannot open input file" << endl;
        exit(1);
    }

    count = 0;
    while (inFile >> F[count])
    {
        count++;
    }
    
    inFile.close();
}

void computeC (double F [], double C [], int count)
{
    for (int i=0 ; i < count ; i++)
    {
        C[i] = (5.0/9.0)*(F[i]-32);
    }
}

double average (double C[], int count)
{
    double avg,total=0;
    for (int i=0; i<count ; i++)
    {
        total += C[i];
    }
    avg = total/count;
    return avg;
}

char grade (double C)
{
    if (C>=35)
        return 'H';
    else if (C>=20)
        return 'M';
    else 
        return 'L';
}

void writeFile ( double F [], double C [], int count)
{
    ofstream outFile ("output.txt");

    outFile << fixed << setprecision(2);

    outFile << setw(15) << "C(Celcius)" 
            << setw(20) << "F(Farenheit)" 
            << setw(20) << "Description" << endl;
    outFile << setw(15) << "==========" 
            << setw(20) << "============" 
            << setw(21) << "=========== " << endl;
    
    for (int i=0 ; i<count ; i++)
    {
        outFile << setw(12) << C[i] 
                << setw(20) << F[i] 
                << setw(18) << grade(C[i]) << endl;
    }

    outFile.close();
}





