#include "WyrazenieZesp.hh"

void Wyswietl(WyrazenieZesp WyrZ){
    Wyswietl(WyrZ.Arg1);

    switch(WyrZ.Op){

        case Op_Dodaj:
        std::cout<<"+";
        break;

        case Op_Odejmij:
        std::cout<<"-";
        break;

        case Op_Mnoz:
        std::cout<<"*";
        break;

        case Op_Dziel:
        std::cout<<"/";
        break;

        case Op_Modulo:
        std::cout<<"%";
        break;
    }  
    Wyswietl(WyrZ.Arg2);
    std::cout<<"=";  
}

std::ostream & operator << (std::ostream& Strm, WyrazenieZesp WyrZ){
    Strm<<WyrZ.Arg1;
    switch(WyrZ.Op){
        case Op_Dodaj:
        Strm<<"+";
        break;

        case Op_Odejmij:
        Strm<<"-";
        break;

        case Op_Mnoz:
        Strm<<"*";
        break;

        case Op_Dziel:
        Strm<<"/";
        break;

        case Op_Modulo:
        Strm<<"%";
        break;
    }
    Strm<<WyrZ.Arg2;
    Strm<<"=";
    
}

bool Wczytaj(WyrazenieZesp &WyrZ){
    char znak;

    if(!Wczytaj(WyrZ.Arg1))
     return false;

    std::cin>>znak;
    switch(znak){
        case '+':
        WyrZ.Op=Op_Dodaj;
        break;

        case '-':
        WyrZ.Op=Op_Odejmij;
        break;

        case '*':
        WyrZ.Op=Op_Mnoz;
        break;

        case '/':
        WyrZ.Op=Op_Dziel;
        break;
    }

    if(!Wczytaj(WyrZ.Arg2))
        return false;

    return true;
}

LZespolona Oblicz(WyrazenieZesp  WyrZ){

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

        case Op_Modulo:
        wynik=WyrZ.Arg1%WyrZ.Arg2;
        break;
    }

return wynik;

}