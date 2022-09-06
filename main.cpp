#include <iostream>

using namespace std;

int main()
{   float a, b, c, objem;
    const int j = 30;
    int i;
    char pokracovat;
    for(i=1; i<= j; i++){

        cout << "*";
    }
    cout << "\n*        Objem kvadru        *\n";
    for(i=1; i<= j; i++){

        cout << "*";
    }
    do{
    cout << "\n      Zadejte sirku kvadru " << endl;
    cin  >> a;
    cout << "\n      Zadejte delku kvadru" << endl;
    cin  >> b;
    cout << "\n      Zadejte vysku kvadru" << endl;
    cin  >> c;
    if(a > 0 && b > 0 && c > 0){


                    objem = a*b*c;

                    cout << "\nObjem je " << objem << " ve Vami zadanych jednotkach" << endl;


                    }else{

                    cout << "\nJednen, ci vice zadanych rozmeru je neplatnych" << endl;

                    }
        cout << "\nPokracovat? (Ne - N, Ano - A )" << endl;
        cin >> pokracovat;
        } while (pokracovat == 'A' || pokracovat == 'a');

          return 0;
}
