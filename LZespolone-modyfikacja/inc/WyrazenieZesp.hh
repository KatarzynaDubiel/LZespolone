#ifndef WYRAZENIEZESP_HH
#define WYRAZENIEZESP_HH

#include <iostream>
#include "LZespolona.hh"

enum Operator { Op_Dodaj, Op_Odejmij, Op_Mnoz, Op_Dziel, Op_Modulo };

struct WyrazenieZesp {
  LZespolona   Arg1;
  Operator     Op;
  LZespolona   Arg2;
};

std::ostream & operator << (std::ostream& Strm, WyrazenieZesp WyrZ);
void Wyswietl(WyrazenieZesp  WyrZ);
bool Wczytaj(WyrazenieZesp &WyrZ);
LZespolona Oblicz(WyrazenieZesp  WyrZ);

#endif