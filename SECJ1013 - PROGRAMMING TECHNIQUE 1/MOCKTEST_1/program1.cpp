// PROGRAM 1      //! do not remove this line

// Mid Term Test SECJ1013  MOCK TEST 2 

// Student's name: SHASYA SHAFIEQAH BINTI SHAHARUDDIN   Matric Number: A25CS0350

#include <iostream>
using namespace std;


// (a)
int sum(int m, int n)
{
    int s=0;
    while (n<=m){
        s += n;
        n++;
    }
    return s;
}


// (b)
void swap(int &a,int  &b)
{
    int c =a;
    a=b;
    b=c;

}

int main()
{
    int a, b,c ;
    
    // (c)
    cout << "Enter two numbers=> ";
    cin >> a>> b;

    // (d)
    if (b>a){
        swap (a,b);
    }   
    
    // (e)
    c = sum (a,b);
    
    // (f)
    cout << "The sum is " << c << endl;
    
    system("pause");
    return 0;
}