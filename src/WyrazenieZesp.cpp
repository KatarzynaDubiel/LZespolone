#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

using namespace std;

void Wyswietl(LZespolona){

cout<<'('<<Arg.re<<showpos<<Arg.im<<"i)/n";
};

LZespolona Oblicz(WyrazenieZesp  WyrZ){

//do zrobienia
//Oblicz(WyrZesp)
//LZesp tmp
LZespolona tmp;

switch (WyrZ.Op)
{//skad te wyr1 wyr2???????????????????????????????????????/
case '+':
    tmp Dodaj (Skl1, Skl2);
    break;

case '-':
    tmp Odejmij (Skl1, Skl2);
    break;

case '*':
    tmp Mnoz (Skl1, Skl2);
    break;

case '/':
    tmp Dziel (Skl1, Skl2);
    break;

default: 
///ie wiem 
    break;
}
// switch(wyr.zank);
//case '+' tmp Dodaj (wyr pierwsze, wyrd drugie);
//break
//...
//return tmp;

};
