#include <iostream>

using namespace std;

int main()
{
    int x,i,count=0;
    cout << "____Program Pencari Bilangan Prima atau Bukan_____ \n \n";
    cout <<"Masukkan Angka    = ";
    cin >>x;
    cout <<"\n \n";
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        count++;
    }
    if (count>0|| x<2)
        cout<<x<<"   Bukan Bilangan Prima\n \n";
    else
        cout <<x<<"   Merupakan Bilangan Prima \n \n";
}
