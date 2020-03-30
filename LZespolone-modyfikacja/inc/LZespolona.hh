#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>
#include <ostream>

struct  LZespolona {
  double   re;
  double   im;
};

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator % (LZespolona  Skl1,  LZespolona  Skl2);

LZespolona operator / (LZespolona Skl1, double  skalar);

bool operator==(LZespolona arg1, LZespolona arg2);

void Wyswietl(LZespolona Skl1);
bool Wczytaj(LZespolona &Skl1);

bool PorownajLiczby(LZespolona, LZespolona);

std::ostream & operator << (std::ostream& Strm, LZespolona Skl1);
std::istream & operator >> (std::istream& Strm, LZespolona &Skl1);

#endif