#include <iostream>
#include "BazaTestu.hh"

#include "WyrazenieZesp.hh"//DOPISALAM 
#include "stats.hh"

using namespace std;




int main(int argc, char **argv)
{
  //////////////////////wczytaj//////////////?????????????????????????????????????tu czy do bazytestu czy gdzie i po co

  //WyrazenieZesp Pom;
  //Wczytaj(Pom);
  //Wyswietl(Pom);//TO ROBI PRZESTOJ APKI PRZED STARTEM - WCZYT I WYSWIETL WYRAZENIE- sprawdza czy dobrze wczytane

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
    //string Odp;
      //int ile=0;
    //cout << " Wyrazenia: ";
    //cout << " Czesc rzeczywista pierwszego argumentu: ";

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

          
             

    cout << "(" << WyrZ_PytanieTestowe.Arg1.re << "+" << WyrZ_PytanieTestowe.Arg1.im << ")"<<znaczek<<"(" << WyrZ_PytanieTestowe.Arg2.re << "+" << WyrZ_PytanieTestowe.Arg2.im << ")" << endl;

              //Do każdego operatora enum przypisuje liczbę 0-3 i można to łatwo zrobić switchem, że jeśli zmienna operator w wyrażeniu ma wartość np 0, to jakiś dodatkowy char ustawiasz sobie na +, i go wypisujesz pomiędzy dwoma liczbami zespolonymi

              //Znaczy się można też tak przypisać że Z1.Op==Operator::Op_Dodaj


    //cin >> Odp;//ZROBIC ODPOWIEDI DO TESTOW W FORMIE STRUKTURY/TABLICY?
    //if(Odp==#######TABLICOWA ODP#######)
      //Statystyka ile.PoprOdp++;
    //cout<<"elo"<<endl;
      //Statystyka ile.LWszystkichOdp++;
    //cout<<ile<<endl;
                                                                    //    WyrazenieZesp Pom;
                                                                    //    Wczytaj(Pom);
                                                                    //    (Pom.re==LZespolona.wynik.re)
                                                                    //    //if(Pom==wynik){
                                                                    //        cout<<"jest ok"<<endl;

                //am w pliku nagłówkowym była taka funkcja "Solve", która miała rozwiązywać to działanie z bazy. Ja po prostu przy każdym działaniu porównywałam wynik zwracany przez tę funkcję  wartością wpisaną przez użytkownika
    
    
    //Wyswietl(Pom);
  }

  
  cout << endl;
  cout << " Koniec testu" << endl;
  cout << endl;

}
