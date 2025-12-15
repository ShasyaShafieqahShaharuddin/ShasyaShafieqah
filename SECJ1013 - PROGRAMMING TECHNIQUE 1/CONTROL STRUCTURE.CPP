#include<iostream>
using namespace std;

int main () {
     bool b = false;   // b initially is false
     cout << boolalpha;
     cout << b << endl;
     int number = 0;  
     b = -10;          // Now, b is true  
     cout << b << endl;    
     b = number;       // Here, b is false again
     cout << b << endl;
     
     cout << "--------------------------\n";

     //bool b;
     int p;
     int q = 5;   

     b = q;          //5 become true
     p = b;          // true become 1
     cout << "The value of p is " << p << endl; 

     cout << "--------------------------\n";

     int a=10;

     cout << a << endl;

     cout << (a==1) << endl; 

     cout << (a>1) << endl;

     cout << (a=5) << endl;

     a = (a != 5) ;
     cout << a << endl;

     cout << "--------------------------\n";

     int x =0;

     if ((0<x) && (x<10))
         cout << x << endl;

     x=1;
     if ( 2 < x < 9 );
         cout << "first " << x << endl;

     if ( ( 2 < x ) && ( x , 9 ))
         cout << "second " << x << endl;

     cout << "--------------------------\n";

     int n=-5;

     if (n)
         cout << "yes\n";
     else 
         cout << "no\n";

     cout << "--------------------------\n";

     int z = 0;

     if (z = 0)
         cout << "Yes\n";
     else 
         cout << "No\n";

     cout << "--------------------------\n";

     x =1;
     if ( x < 3 )
         cout << "Yes \n";
     else
         cout << "No\n";

     ( x < 3 )? cout << "Yes\n" : cout << "No\n";

     cout << ( x < 3 ? "Yes\n" : "No\n");

     //if x =1 output Yes, if x = 2 output No, else output other

     bool h = true;

     switch (h)
    {
        case true: 
        cout << "Yes\n";
        break;

        case false:
        cout << "No\n";
        break;

        default:
        cout << "Other\n";
        break;
    }

     cout << "--------------------------\n";

     #define DEFINE 1
     const int const2=2;
     int var3 = 3;
     int value;

     switch (value)
     {
        case 0 : 
        cout << "Four\n";
        break;

        case DEFINE:
        cout << "One\n";
        break;

        case const2:
        cout << "Two\n";
        break;

        //case var3:
        //cout << "Three\n";
        //break;
     }

     cout << "--------------------------\n";

     for ( n = 10 ; n > 0 ; n-- )
     {
        cout << n << "  " ;
     }

     cout << "\n--------------------------\n";

     for ( n = 10 ; n > 0 ; n--)
     {
        if (n < 8)
             break;
        cout << n << "  ";
     }

     cout << "\n--------------------------\n";

     for ( n = 10 ; n > 0 ; n--)
     {
        if ( n % 2 ==1 )
            continue;
        cout << n << "  ";
     }

     return 0;
}