#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream> //DOPISALAM
#include <ostream> //DOPISALAM (???)

/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej 
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */


LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator % (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator / (LZespolona Skl1, LZespolona  Skl2);

void Wyswietl(LZespolona Skl1);
bool Wczytaj(LZespolona &Skl1);

std::ostream & operator << (std::ostream& Strm, LZespolona Skl1);
std::istream & operator >> (std::istream& Strm, LZespolona &Skl1);//OST ZMIANA O NA I

#endif
