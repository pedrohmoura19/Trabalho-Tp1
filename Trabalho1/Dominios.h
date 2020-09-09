#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>
#include <stdexcept>

using namespace std;

class CEP{
    private:
        static const int LIMITE_MIN_FORT = 60000000;
        static const int LIMITE_MAX_FORT = 60999999;
        int valor;
        void validar(int valor);

    public:
        CEP();
        CEP(int);
        void setValor(int);
        int getValor();
};

class Classe{
    private:
        static const int LIMITE = 3;
        string valor;
        int TamanhoValor = valor.size();
        void validar(string valor);

    public:
        Classe();
        Classe(string);
        void setValor(string);
        string getValor();
};

class CodAgencia{
    private:
        static const int LIMITE = 4;
        string valor;
        int TamanhoValor = valor.size();
        bool validar(string valor);

    public:
        CodAgencia();
        CodAgencia(string);
        void setValor(string);
        string getValor();
};

class CodProduto{
    private:
        static const int LIMITE = 3;
        string valor;
        int TamanhoValor = (valor.size()) ;
        void validar(string valor);

    public:
        CodProduto();
        CodProduto(string);
        void setValor(string);
        string getValor();
};

class Data{
    private:
        string valor;
        int TamanhoValor = (valor.size()) ;
        void validar(string valor);

    public:
        Data();
        Data(string);
        void setValor(string);
        string getValor();
};

class Nome{
    private:
        static const int LIMITE_MIN = 5;
        static const int LIMITE_MAX = 30;
        string valor;
        int TamanhoValor = (valor.size()) ;
        void validar(string valor);

    public:
        Nome();
        Nome(string);
        void setValor(string);
        string getValor();
};

class Prazo{
    private:
        int valor;
        void validar(int valor);

    public:
        Prazo();
        Prazo(int);
        void setValor(int);
        int getValor();

};


class Taxa{
    private:
        static const int LIMITE = 200;
        int valor;
        bool validar(int valor);

    public:
        Taxa();
        Taxa(int);
        void setValor(int);
        int getValor();

};

class ValorAplicacao{
    private:
        static const int LIMITE = 1000000;
        int valor;
        bool validar(int valor);

    public:
        ValorAplicacao();
        ValorAplicacao(int);
        void setValor(int);
        int getValor();
};



#endif // DOMINIOS_H_INCLUDED
