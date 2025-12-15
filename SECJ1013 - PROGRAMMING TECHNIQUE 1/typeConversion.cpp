#include<iostream>
using namespace std;

int main () {
     char c='A'; 
     cout<<6+c<<endl;// int

     int i= 25;
     cout<<6.1+i<<endl;// float

     int x, y =25; 
     float z=2.5;
     x=y+z; //int
     cout << x << endl;

     int y1=50, y2=63, x1=30 ,x2=40;
     cout << (y2 - y1) / (x2 - x1) << endl;

     cout << "------------" << endl;

     int kira = 5;
     int nilai_pertama = 10, nilai_kedua;
     nilai_kedua= 5* kira-- + nilai_pertama;
     cout << kira << endl << nilai_kedua << endl;
     nilai_kedua= 5* --kira + nilai_pertama;
     cout << kira << endl << nilai_kedua << endl;

     cout << "---------" << endl;

     double m;
     m = static_cast<float>(y2-y1)/(x2-x1);
     cout << "m = " << m << endl;

     cout << "--------\n";

     char ch = 'C';
     cout << ch << " is " << static_cast<int>(ch) << endl;

     cout << "-------\n";

     int a= 1;
     double d= 1.0;
     a=46/9;
     cout << "i. a = " << a << endl;
     a= 1,d= 1.0;
     a= 46 % 9 + 4 * 4 -2;
     cout << "ii. a = " << a << endl;
     a= 1,d= 1.0;
     a = 45 + 43 % 5 * (23 * 3 % 2);
     cout << "iii. a = " << a << endl;
     a= 1,d= 1.0;
     a %=3 / a + 3;
     cout << "iv. a = " << a << endl;
     a= 1,d= 1.0;
     d += 1.5 * 3 + (++a);
     cout << "v. d = " << d  << endl;
     a= 1,d= 1.0;
     d -= 1.5 * 3 + a++;
     cout << "vi. d = " << d << endl;

 

     return 0;
}