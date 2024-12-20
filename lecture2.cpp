#include<iostream>
using namespace std;

//implicit conversion 
//char --> int (small to large)

int main ()
{
    char grade ='a';
    int value = grade ;

    cout << value << "\n";
    return 0 ;
}

//explicit convertion 
// double --> int(large to small)

int main ()
{
    double value = 100.99;
    int newprice = (int)value ;

    cout << newprice << "\n";
    return 0 ;
}