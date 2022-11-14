#include <iostream>

using namespace std;

int main()
{
    int *adres = new int;
    *adres =10;
    cout<<*adres;

    delete adres;
    return 0;
}
