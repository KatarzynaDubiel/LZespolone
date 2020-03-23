#include "WyrazenieZesp.hh"


/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */


void Wyswietl(WyrazenieZesp WyrZ){
    Wyswietl(Wyr.Arg1);

    switch(WyrZ.Op){

        case Op_Dodaj;
        std::cout<<"+";
        break;

        case Op_Odejmij;
        std::cout<<"-";
        break;

        case Op_Mnoz;
        std::cout<<"*";
        break;

        case Op_Dziel;
        std::cout<<"/";
        break;
    }  
    Wyswietl(WyrZ.Arg2);
    std::cout<<"=";  
};

std::ostream & operator << (std::ostream& Strm, WyrazenieZesp WyrZ){
    Strm<<WyrZ Arg1;
    switch(WyrZ.Op){
        case Op_Dodaj:
        Strm<<"+"
        break;

        case Op_Odejmij:
        Strm<<"-"
        break;

        case Op_Mnoz:
        Strm<<"*"
        break;

        case Op_Dziel:
        Strm<<"/"
        break;
    }
    Strm<<WyrZ.Arg2;
    Strm<<"=";
}

bool Wczytaj(WyrazenieZesp &WyrZ){
    char znak;
    if(Wczytaj(WyrZ Arg1))
    return true;
    std::sin>>znak;
    switch(znak){
        case "+":
        WyrZ.Op=Op_Dodaj;
        break;

        case "-":
        WyrZ.Op=Op_Odejmij;
        break;

        case "*":
        WyrZ.Op=Op_Mnoz;
        break;

        case "/":
        WyrZ.Op=Op_Dziel;
        break;
    }

    if(Wczytaj(WyrZ.Arg2))
    return true;

    return false;
}


LZespolona Oblicz(WyrazenieZesp  WyrZ){

//do zrobienia
//Oblicz(WyrZesp)
//LZesp tmp
    LZespolona wynik;
    switch(WyrZ.Op){
        case Op_Dodaj:
        wynik=WyrZ.Arg1+WyrZ.Arg2;
        break;

        case Op_Odejmij:
        wynik=WyrZ.Arg1-WyrZ.Arg2;
        break;

        case Op_Mnoz:
        wynik=WyrZ.Arg1*WyrZ.Arg2;
        break;

        case Op_Dziel:
        wynik=WyrZ.Arg1/WyrZ.Arg2;
        break;
    }

return wynik;

// switch(wyr.zank);
//case '+' tmp Dodaj (wyr pierwsze, wyrd drugie);
//break
//...
//return tmp;

};
