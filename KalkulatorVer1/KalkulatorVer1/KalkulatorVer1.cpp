

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
   
    
    int liczba1 = 10;
    int liczba2 = 20;

    int dodawanie = liczba1 + liczba1;
    int odejmowanie = liczba1 - liczba1;
    int mnozenie = liczba1 * liczba1;
    float dzielenie = (float)liczba1 / (float)liczba1;
    float pierwiastekLiczba1 = sqrt(liczba1);
    float pierwiastekLiczba2 = sqrt(liczba2);
    double potegaLiczba1 = pow(liczba1, 2);
    double potegaLiczba2 = pow(liczba2, 2);

    cout << "Dodawanie = " << dodawanie << endl;
    cout << "Odejmowanie = " << odejmowanie << endl;
    cout << "Mnozenie = " << mnozenie << endl;
    cout << "Dzielenie = " << dzielenie << endl;
    cout << "Pierwiastek kwadratowy liczby1 = " << pierwiastekLiczba1 << endl;
    cout << "Pierwiastek kwadratowy liczby2 = " << pierwiastekLiczba2 << endl;
    cout << "Potega do 2 liczby1 =" << potegaLiczba1 << endl;
    cout << "Potega do 2 liczby2 =" << potegaLiczba2 << endl;

    system("pause");

    return 0;
}
/*
        przestrzeń nazw:using namespace cot o jest i dlaczego stosujemy
        Typy danych w c++ , proste i złożone 
        Typy proste: Integer int - liczby całkowite, String typ tekstowy, Char typ znakowy, float i double-typ liczb zmiennych

*/
