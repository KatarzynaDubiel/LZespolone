#include <iostream>
#include "BazaTestu.hh"

#include "WyrazenieZesp.hh"//DOPISALAM 

using namespace std;




int main(int argc, char **argv)
{
  //////////////////////wczytaj//////////////?????????????????????????????????????tu czy do bazytestu czy gdzie i po co

  WyrazenieZesp Pom;
  Wczytaj(Pom);
  Wyswietl(Pom);//TO ROBI PRZESTOJ APKI PRZED STARTEM - WCZYT I WYSWIETL WYRAZENIE- sprawdza czy dobrze wczytane

            //void WczytajWyrZesp(Arg1, Op, Arg2){//USUNELAM
              //cin>>Arg1>>Op>>Arg2;
              //cout<<endl;
            //}//USUNELAM
  //wcyztajwyrzespolone(pierwsza)
  //std::cin>>Arg1
  //znak
  //druga
  //ogolem przecizenie zamist tego,a ale powoli

  //////////////////////wczytaj//////////////

  if (argc < 2) {
    cout << endl;
    cout << " Brak opcji okreslajacej rodzaj testu." << endl;
    cout << " Dopuszczalne nazwy to:  latwy, trudny." << endl;
    cout << endl;
    return 1;
  }


  BazaTestu   BazaT = { nullptr, 0, 0 };

  if (InicjalizujTest(&BazaT,argv[1]) == false) {
    cerr << " Inicjalizacja testu nie powiodla sie." << endl;
    return 1;
  }


  
  cout << endl;
  cout << " Start testu arytmetyki zespolonej: " << argv[1] << endl;
  cout << endl;

  WyrazenieZesp   WyrZ_PytanieTestowe;
  
  while (PobierzNastpnePytanie(&BazaT,&WyrZ_PytanieTestowe)) {
    cout << " Wyrazenia: ";
    //cout << " Czesc rzeczywista pierwszego argumentu: ";
    cout << "(" << WyrZ_PytanieTestowe.Arg1.re << "znak!" << WyrZ_PytanieTestowe.Arg1.im << ")znak!(" << WyrZ_PytanieTestowe.Arg2.re << "znak!" << WyrZ_PytanieTestowe.Arg2.im << ")" << endl;
  }

  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}
