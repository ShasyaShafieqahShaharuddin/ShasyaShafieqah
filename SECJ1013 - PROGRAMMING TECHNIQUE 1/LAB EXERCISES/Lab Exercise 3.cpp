#include <iostream>
using namespace std;
#include <cstring>
void getInput (int& totalCase, int& newCases, int& totalDeath, int& totalRecovered);
void dispOutput (int activeCases);
void dispStatus (int activeCases);
float calcAverage (int numberOfStates,int totalActiveCases);

int main(){

    string stateName, input, highestState ;
    int totalCases=0, newCases=0, totalDeath=0, totalRecovered=0, activeCases, numOfStates=0, totalActiveCases=0, highestActiveCase=0;
    float avg;

    for ( int n = 1; n > 0 ; n++){
        cout << "\n<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>\n" ;
        cout << "State name      : ";
        getline (cin , stateName);
        
        getInput (totalCases, newCases, totalDeath, totalRecovered);

        activeCases = totalCases + newCases - totalDeath - totalRecovered;
        dispOutput(activeCases);

        totalActiveCases += activeCases;

        if (activeCases > highestActiveCase){
            highestActiveCase = activeCases;
            highestState = stateName; 
        }

        numOfStates++;

        cout << "\nPress <ENTER> to continue... ";
        cin.ignore();
        getline(cin, input);

        if (input != ""){
            break;
        }
    }
    
    avg = calcAverage ( numOfStates, totalActiveCases);

    cout << "\n<<<<<<<<< ACTIVE CASES >>>>>>>>>>\n";
    cout << "Total               : " << totalActiveCases << endl;
    cout << "Highest             : " << highestActiveCase << " ( " << highestState << " )" << endl;
    cout << "Average for " << numOfStates << " states: " << avg << endl;
        
}

void getInput (int& totalCases, int& newCases, int& totalDeath, int& totalRecovered){
    cout << "Total cases     : ";
    cin >> totalCases;
    cout << "New cases       : ";
    cin >> newCases;
    cout << "Total death     : ";
    cin >> totalDeath;
    cout << "Total recovered : ";
    cin >> totalRecovered;
}

void dispOutput (int activeCases){
    cout << "\n\n<<<<<<<<<<<<< SUMMARY >>>>>>>>>>> \n";
    cout << "Active cases    : " << activeCases << endl;
    dispStatus (activeCases);
} 

void dispStatus (int activeCases){
    if (activeCases > 40){
        cout << "Status          : Red zone\n ";
    }
    else if (activeCases >= 21){
        cout << "Status          : Orange zone\n";
    }
    else if (activeCases >= 1){
        cout << "Status          : Yellow zone\n";
    }
    else
        cout << "Status          : Green zone\n";
}

float calcAverage (int numberOfStates,int totalActiveCases){
    return static_cast<float>(totalActiveCases) / numberOfStates;
}

