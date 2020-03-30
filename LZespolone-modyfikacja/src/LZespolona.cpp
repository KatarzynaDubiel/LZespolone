#include "LZespolona.hh"
#include <iostream>
#include <ostream>

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

  Wynik.re = Skl1.re * Skl2.re - Skl1.im * Skl2.im;
  Wynik.im = Skl1.re * Skl2.im + Skl2.re * Skl1.im;
  
  return Wynik;
} 

LZespolona  operator / (LZespolona  Skl1,  double  Skl2)
{
  LZespolona  Wynik;
  Wynik.re = Skl1.re/Skl2;
  Wynik.im = Skl1.im/Skl2;
  return Wynik;
}

LZespolona  operator % (LZespolona  Skl1,  LZespolona  Skl2)
{
  LZespolona  Wynik;
  int S1re, S1im, S2re, S2im;

  S1re=Skl1.re;
  S1im=Skl1.im;
  S2re=Skl2.re;
  S2im=Skl2.im;

  Wynik.re=S1re%S2re;
  Wynik.im=S1im%S2im;
                      
  return Wynik;
}

double modul2(LZespolona Skl1){
  
  return Skl1.re*Skl1.re+Skl1.im*Skl1.im;
}

LZespolona Sprzezenie(LZespolona Skl1){
  
  Skl1.im=-Skl1.im;
  return Skl1;
}

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{
  return Skl1*Sprzezenie(Skl2)/modul2(Skl2);
}

void Wyswietl(LZespolona Skl1){
  std::cout<<"("<<Skl1.re<<std::showpos<<Skl1.im<<std::noshowpos<<"i)";
}

std::ostream & operator << (std::ostream& Strm, LZespolona Skl1){
    
    Strm << "("<<Skl1.re<<std::showpos<<Skl1.im<<std::noshowpos<<"i)";
    return Strm;
}

std::istream& operator >> (std::istream& Strm, LZespolona &Skl1){

  char znak;
  Strm>>znak;
  if(znak!='('){
    Strm.setstate(std::ios_base::badbit);
    return Strm;
  }
  Strm>>Skl1.re;
  if(Strm.bad())
  return Strm;

  Strm>>Skl1.im;
  if(Strm.bad())
  return Strm;

  Strm>>znak;
  if(znak!='i'){
      Strm.setstate(std::ios_base::badbit);
      return Strm;
  }

  Strm>>znak;
  if(znak!=')'){
      Strm.setstate(std::ios_base::badbit);
      return Strm;
  }

  return Strm;
}

bool Wczytaj(LZespolona &Skl1){

  char znak;

  std::cin>>znak;
  if(znak!='(')
  return true;

  std::cin>>Skl1.re;
  if(std::cin.bad())
  return true;

  std::cin>>Skl1.im;
  if(std::cin.bad())
  return true;

  std::cin>>znak;
  if(znak!='i')
  return true;

  std::cin>>znak;
  if(znak!=')')
  return true;

  return false;
}

bool PorownajLiczby(LZespolona arg1, LZespolona arg2){
  return ( (arg1.re == arg2.re) && (arg1.im ==arg2.im) );
}

bool operator==(LZespolona arg1, LZespolona arg2){
  return ( (arg1.re == arg2.re) && (arg1.im ==arg2.im) );
}