#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>
#include <stdexcept>

using namespace std;

class Cep{
    private:
        static const int LIMITE_MIN_SP1 = 1000000;
        static const int LIMITE_MAX_SP1 = 5999999;
        static const int LIMITE_MIN_SP2 = 8000000;
        static const int LIMITE_MAX_SP2 = 8499999;
        static const int LIMITE_MIN_RJ  = 20000000;
        static const int LIMITE_MAX_RJ  = 26600999;
        static const int LIMITE_MIN_BSB = 70000000;
        static const int LIMITE_MAX_BSB = 70999999;
        static const int LIMITE_MIN_SLV = 40000000;
        static const int LIMITE_MAX_SLV = 41999999;
        static const int LIMITE_MIN_FORT = 60000000;
        static const int LIMITE_MAX_FORT = 60999999;
        int cep;
        void validar(int valor);

    public:
        Cep();
        Cep(int);
        void setCep(int);
        int getCep();
};

class Classe{
    private:
        static const int LIMITE = 3;
        string classe;
        void validar(string valor);

    public:
        Classe();
        Classe(string);
        void setClasse(string);
        string getClasse();
};

class CodAgencia{
    private:
        static const int FORMATO = 4;
        string valor;
        int tamanhoValor = valor.size();
        void validar(string valor);

    public:
        CodAgencia();
        CodAgencia(string);
        void setValor(string);
        string getValor();
};

class CodProduto{
    private:
        static const int FORMATO = 3;
        string valor;
        int tamanhoValor = (valor.size()) ;
        void validar(string valor);

    public:
        CodProduto();
        CodProduto(string);
        void setValor(string);
        string getValor();
};

class Data{
    private:
        static const int FORMATO = 10;
        string valor;
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
        string nome;
        void validar(string nome);

    public:
        Nome();
        Nome(string);
        void setNome(string);
        string getNome();
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
        static const int LIMITE_MIN = 0;
        static const int LIMITE_MAX = 200;
        int valor;
        void validar(int valor);

    public:
        Taxa();
        Taxa(int);
        void setValor(int);
        int getValor();

};

class ValorAplicacao{
    private:
        static const int LIMITE_MIN = 0;
        static const int LIMITE_MAX = 1000000;
        int valor;
        void validar(int valor);

    public:
        ValorAplicacao();
        ValorAplicacao(int);
        void setValor(int);
        int getValor();
};



#endif // DOMINIOS_H_INCLUDED
