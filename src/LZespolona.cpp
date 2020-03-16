#include "LZespolona.hh"

#include <cmath.h>


/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;

  Wynik.re =(Skl1.re*Skl2.re)+(Skl1.re*Skl2.im)+(Skl1.im*Skl2.re)+(Skl1.im*Skl2.im);
  //czy + a - trzeba jakoś inaczej rozpatrywac?
  
  return Wynik;
}

///i na double 



LZespolona Sprzezenie(Arg2){
  //na minus, ale co
  LZespolona SprzArg2;
  SprzArg2=(Arg2.re+(-Arg2.im));

  return SprzArg2;
};

double Modul2(Arg2){
  //na kwadrat, ale co
  LZespolona ModulArg2;

    ModulArg2=sqrt((Arg2.re)*(Arg2.re))+((Arg2.im)*(Arg2.im));

  return ModulArg2;
};



LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
//tutaj cos chyba inaczej
  Wynik=(Arg1*SprzArg2)/((ModulArg2)*(ModulArg2))
  return Wynik;
}
