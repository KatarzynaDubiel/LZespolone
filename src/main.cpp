#include <iostream>
#include "BazaTestu.hh"
#include "WyrazenieZesp.hh"
#include "stats.hh"

using namespace std;

int main(int argc, char **argv)
{
  Statystyka stats;

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

    char znaczek;
      switch(WyrZ_PytanieTestowe.Op){
        case 0:
        znaczek='+';
        break;

        case 1:
        znaczek='-';
        break;

        case 2:
        znaczek='*';
        break;

        case 3:
        znaczek='/';
        break;

        case 4:
        znaczek='%';
        break;
            }
    stats.LWszystkichOdp++;   

    std::cout << ":? Podaj wynik operacji: (" << WyrZ_PytanieTestowe.Arg1.re << "+" << WyrZ_PytanieTestowe.Arg1.im << "i)"<<znaczek<<"(" << WyrZ_PytanieTestowe.Arg2.re << "+" << WyrZ_PytanieTestowe.Arg2.im << "i)=" << std::endl;

    LZespolona odpowiedzUzytkownika;

    std::cout << "   Twoja odpowiedz: ";

  for(int i=0; i<3; i++){
    std::cin >> odpowiedzUzytkownika;
    if(cin.fail()){
      std::cout<<std::endl<<"  Blad zapisu liczby zespolonej. Sprobuj jeszcze raz."<<std::endl;
      cin.clear();
      cin.ignore(1000, '\n');
      cout<<"  ";
    }
    else break;
  }

    if (odpowiedzUzytkownika == Oblicz(WyrZ_PytanieTestowe)){    
      stats.PoprOdp++;
      std::cout<<":) Odpowiedz poprawna"<<std::endl<<std::endl;
    }
    else{
      std::cerr<<":( Blad. Prawidlowym wynikiem jest: "<<Oblicz(WyrZ_PytanieTestowe)<<std::endl<<std::endl;
    }
  }

  std::cout<<"Ilosc dobrych  odpowiedzi: "<<stats.PoprOdp<<std::endl;
  std::cout<<"Ilosc blednych odpowiedzi: "<<stats.LWszystkichOdp-stats.PoprOdp<<std::endl;

  std::cout<<"Wynik procentowy poprawnych odpowiedzi: "<< (stats.PoprOdp/stats.LWszystkichOdp)*100<<"%"<<std::endl;
  std::cout << std::endl;
  std::cout << " Koniec testu" << std::endl;
  std::cout << std::endl;
}