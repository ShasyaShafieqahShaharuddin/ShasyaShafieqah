// PROGRAM 2      //! do not remove this line

// Mid Term Test SECJ1013  MOCK TEST 2 

// Student's name: SHASYA SHAFIEQAH BINTI SHAHARUDDIN Matric Number: A25CS0350

#include <iostream>
using namespace std;

float itemPrice(int code){
    int price;
    if (code == 101)
            return 9.90;

        else if (code == 201)
            return 6.90;

        else if (code == 305)
            return 7.99;

        else if (code == 404)
           return 5.99;

        else
           return 0;        
}


int getsInput(){
    int code;

    cout <<"\nEnter item's code=>";
    cin >> code;

    while (code != 101 && code != 201 && code != 305 && code!= 404 && code !=0){
        cout << "Invalid code. Please try again!\n";

        cout <<"\nEnter item's code=>";
        cin >> code;
    }

    return code;

}
int main()
{
    int code, amount;
    float total, price;

    for (int n =0; n>=0 ; n++){

        code = getsInput();

        if (code ==0){
            break;
        }

        price = itemPrice(code);
   
   
        cout << "Enter amount of items=>" ;
        cin >> amount ;
        
        total += amount*price;

    }

    cout << " \nTotal amount to pay: "<< total << endl;

    system("pause");
    return 0;
}
