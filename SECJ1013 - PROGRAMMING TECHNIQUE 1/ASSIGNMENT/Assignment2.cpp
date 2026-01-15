// DATE: 26/12/2025
// SET NUMBER: 2
// 1. NAME: SHASYA SHAFIEQAH BINTI SHAHARUDDIN
//    MATRICS NUMBER: A25CS0350
// 2. NAME: FARAH AISYA BINTI JAAFAR
//    MATRICS NUMBER: A25CS0218

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
void getInput(int& , int& , int& );
void carInfo(int, int, int, float& );
float getPrice(int, int, int);
void inputPayment(float& , float& , int& );
float calculateMonthlyRepayment(float, float, int);

int main()
{

    int model, variant, region, loanPeriod;
    float price, downPayment, interestRate, monthlyRepayment, totalLoan;
    char choice;

    for (int n = 0; n >= 0; n++)
    {

        cout << "Proton Car Loan Calculator\n";
        getInput(model, variant, region);
        carInfo(model, variant, region, price);
        inputPayment(downPayment, interestRate, loanPeriod);

        while (downPayment / price < 0 || downPayment > price)
        {
            cout << "Invalid Down Payment." << endl;
            cout << "Please re-enter the valid Down Payment: ";
            inputPayment(downPayment, interestRate, loanPeriod);
        }

        totalLoan = price - downPayment;
        monthlyRepayment = calculateMonthlyRepayment(totalLoan, interestRate, loanPeriod);

        cout << endl;
        cout << "MONTHLY INSTALLMENT (MYR): " << monthlyRepayment << endl;

        cout << endl;
        cout << "Do you want to enter other data? [Y @ N]: ";
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            break;
        }
    }

    cout << endl;
    cout << "Thank you :)";

    return 0;
}

void getInput(int& model, int& variant, int& region)
{
    cout << "Model [1-X50, 2-Exora, 3-Persona]: ";
    cin >> model;
    cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT]: ";
    cin >> variant;
    cout << "Region [1-Peninsular Malaysia, 2-East Malaysia]: ";
    cin >> region;
}

void carInfo(int model, int variant, int region, float &price)
{
    cout << endl;
    cout << "Car Info" << endl;

    //Model:
    if (model ==1)
        cout << "Model: X50" << endl;
    else if (model == 2)
        cout << "Model: Exora" << endl;
    else if (model==3)
        cout << "Model: Persona" << endl;

    //Variant:
    if (variant ==1)
        cout << "Variant: 1.6L Standard CVT" << endl;
    else if (variant == 2)
        cout << "Variant: 1.6L Premium CVT " << endl;

    //Region:
    if (region ==1)
        cout << "Region: Peninsular Malaysia" << endl;
    else if (region == 2)
        cout << "Region: East Malaysia" << endl;

    //Paint type:
    if (variant ==1)
        cout << "Paint Type: Solid" << endl;
    else if (variant == 2)
        cout << "Paint Type: Metallic" << endl;

    price = getPrice(model, variant, region);

    cout << fixed << setprecision(2);
    cout << "Price (MYR): " << price << endl;

}

float getPrice(int model, int variant, int region)
{
    float price;
    if (model == 1)
        price = (variant == 1 ? (region == 1 ? 79200 : 81200) : (region == 1 ? 93200 : 95200));
    else if (model == 2)
        price = (variant == 1 ? (region == 1 ? 59800 : 61800) : (region == 1 ? 66800 : 68800));
    else
        price = (variant == 1 ? (region == 1 ? 44600 : 46600) : (region == 1 ? 54600 : 56600));
    return price;
}

void inputPayment(float& downPayment, float& interestRate, int& loanPeriod)
{
    cout << endl;
    cout << "Down Payment (MYR): ";
    cin >> downPayment;
    cout << "Interest Rate (%): ";
    cin >> interestRate;
    interestRate /= 100;
    cout << "Repayment period (in years): ";
    cin >> loanPeriod;
}

float calculateMonthlyRepayment(float totalLoan, float interestRate, int loanPeriod)
{
    float totalRepay, monthlyRepay;
    totalRepay = totalLoan + (totalLoan * interestRate * loanPeriod);
    monthlyRepay = totalRepay / (loanPeriod * 12);
    return monthlyRepay;
}