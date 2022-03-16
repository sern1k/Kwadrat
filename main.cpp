#include <iostream>

using namespace std;

void Rysowanie(int zew, int wew) //metoda odpowiadajaca za Rysowanie *
{
    for (int i=0; i<zew; i++) //i-rzedy
    {
        for(int j=0; j<zew; j++) //j-kolumny
        {
            if (j>1 && i>1 && j<wew && i<zew-(zew-wew)/2) //wypisywanie spacji w srodku
            {
                for (int k=0;k<wew;k++)
                {
                    cout<<" ";
                    j++;
                }
            }
            cout<<"*";
        }
        cout<<endl; //przejscie do nastepnego rzedu
    }
}

int main()
{
    int zew, wew; //zew - dlugosc boku zewnetrznego, wew - dlugosc boku wewnetrznego

    cout<<"Podaj dlugosc boku zewnetrznego czworokata: ";
    cin>>zew;
    cout<<"Podaj dlugosc boku wewnetrznego czworokata: ";
    cin>>wew;

    if(zew<=0 || wew <=0 || zew <= wew) //zabezpieczenie przed blednymi danymi
    {
        cout<<"Bledne dane\n\n";
        main(); //wywolanie funkcji jeszcze raz w przypadku bledu
    }

    Rysowanie(zew, wew); //wywolanie funcji Rysowanie o podanych parametrach przez uzytkownika

    return 0;
}
