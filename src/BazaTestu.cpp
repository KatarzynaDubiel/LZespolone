#include <iostream>
#include <cstring>
#include <cassert>
#include "BazaTestu.hh"

using namespace std;

static WyrazenieZesp  TestLatwy[] =
  { {{2,1}, Op_Dodaj, {1,2}},
    {{1,0}, Op_Odejmij, {0,1}},
    {{3,0}, Op_Mnoz, {0,3}},
    {{4,8}, Op_Dziel, {1,0}},
    {{7,3}, Op_Modulo, {2,1}},
  };

static WyrazenieZesp  TestTrudny[] =
  { {{2.1,1.4}, Op_Dodaj, {1.5,2.3}},
    {{1.4,0.6}, Op_Odejmij, {0.9,1.5}},
    {{3.5,0.3}, Op_Mnoz, {0.8,3.2}},
    {{4.5,8.2}, Op_Dziel, {1.2,0.3}},
    {{7.0,3.5}, Op_Modulo, {2.4,1.8}},
  };
 
void UstawTest( BazaTestu *wskBazaTestu, WyrazenieZesp *wskTabTestu, unsigned int IloscPytan )
{
  wskBazaTestu->wskTabTestu = wskTabTestu;
  wskBazaTestu->IloscPytan = IloscPytan;
  wskBazaTestu->IndeksPytania = 0;
}

bool InicjalizujTest( BazaTestu  *wskBazaTestu, const char *sNazwaTestu )
{
  if (!strcmp(sNazwaTestu,"latwy")) {
    UstawTest(wskBazaTestu,TestLatwy,sizeof(TestLatwy)/sizeof(WyrazenieZesp));
    return true;
  }

  else if (!strcmp(sNazwaTestu,"trudny")) {
    UstawTest(wskBazaTestu,TestTrudny,sizeof(TestTrudny)/sizeof(WyrazenieZesp));
    return true;
  }

  cerr << "Otwarcie testu '" << sNazwaTestu << "' nie powiodlo sie." << endl;
  return false;
}

bool PobierzNastpnePytanie( BazaTestu  *wskBazaTestu, WyrazenieZesp *wskWyrazenie )
{
  if (wskBazaTestu->IndeksPytania >= wskBazaTestu->IloscPytan) return false;

  *wskWyrazenie = wskBazaTestu->wskTabTestu[wskBazaTestu->IndeksPytania];
  ++wskBazaTestu->IndeksPytania;
  return true;
}