#include <iostream>
#include <cstring>
using namespace std;

string monthName (int i){
    switch (i){
        case 0 : return "January"; break;
        case 1 : return "February"; break;
        case 2 : return "March"; break;
        case 3 : return "April"; break;
        case 4 : return "May"; break;
        case 5 : return "Jun"; break;
        case 6 : return "July"; break;
        case 7 : return "August"; break;
        case 8 : return "October"; break;
        case 9 : return "January"; break;
        case 10: return "November"; break;
        case 11: return "December"; break;
    }
}

int main(){
    const int MONTHS = 12;
    double rainfall[MONTHS] , total=0 , highest, lowest, avg; 
    int p, q, count =0;
    string highestMonth, lowestMonth;

    while ( count < MONTHS ){
        cout << "Total rainfall for month " << count + 1 << ":";
        cin >> rainfall[count];
        if (rainfall[count]< 0){
            continue;
        }
        total += rainfall[count];
        count++;
    }

    avg = total / MONTHS;

    highest = rainfall[0];
    lowest = rainfall [0];
    p=0;
    q=0;

    for (int n=1; n < MONTHS ; n++){

        if (rainfall[n]< lowest){
            lowest = rainfall[n];
            p = n;
        }

        if (rainfall[n] > highest){
            highest = rainfall[n];
            q = n;
        }
    }

    highestMonth = monthName(q);
    lowestMonth = monthName (p);

    cout << "Total rainfall for the year = " << total << endl;
    cout << "Average monthly rainfall = " << avg << endl;
    cout << "Month with highest amount rainfall : " << highestMonth << endl;
    cout << "Month with lowest amount of rainfall : " << lowestMonth << endl;
}