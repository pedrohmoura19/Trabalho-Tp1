#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>
#include <stdexcept>

using namespace std;

class CEP{
    private:
        static const int LIMITE_MIN_BSB = 70000000;
        static const int LIMITE_MAX_BSB = 70999999;
        static const int LIMITE_MIN_SLV = 40000000;
        static const int LIMITE_MAX_SLV = 41999999;
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
        static const int FORMATO = 4;
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
        static const int LIMITE_MIN = 0;
        static const int LIMITE_MAX = 200;
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
        static const int LIMITE_MIN = 0;
        static const int LIMITE_MAX = 1000000;
        int valor;
        bool validar(int valor);

    public:
        ValorAplicacao();
        ValorAplicacao(int);
        void setValor(int);
        int getValor();
};

class CodAplicacao{
    private:
        static const int FORMATO = 5;
        string valor;
        int tamanhoValor = valor.size();
        void validar(string valor);

    public:
        CodAplicacao();
        CodAplicacao(string);
        void setValor(string);
        string getValor();
};

class CodBanco{
    private:
        static const int FORMATO = 3;
        string valor;
        int tamanhoValor = valor.size();
        void validar(string valor);

    public:
        CodBanco();
        CodBanco(string);
        void setValor(string);
        string getValor();
};

class Cpf{
    private:
        static const int TAMANHO = 14;
        string valor;
        int tamanhoValor = valor.size();
        void validar(string valor);
    public:
        Cpf();
        Cpf(string);
        void setValor(string);
        string getValor();
        ~Cpf();
};

class Emissor{
    private:
        static const int LIMITE_MIN = 5;
        static const int LIMITE_MAX = 30;
        string valor;
        void validar(string valor);
    public:
        Emissor();
        Emissor(string);
        void setValor(string);
        string getValor();
        ~Emissor();
};

class Endereço{
    private:
        static const int LIMITE_MIN = 5;
        static const int LIMITE_MAX = 20;
        string valor;
        void validar(string valor);
    public:
        Endereço();
        Endereço(string);
        void setValor(string);
        string getValor();
        ~Endereço();
};

class Horario{
    private:
        string valor;
        void validar(string valor);
    public:
        Horario();
        Horario(string);
        void setValor();
        string getValor();
        ~Horario();
};

class Numero{
    private:
        static const int TAMANHO = 8;
        string valor;
        int tamanhoValor = valor.size();
        void validar(string valor);
    public:
        Numero();
        Numero(string);
        void setValor(string);
        string getValor();
        ~Numero();
};

class Senha{
    private:
        static const int TAMANHO = 6;
        int valor;
        void validar(int valor);
    public:
        Senha();
        Senha(int);
        void setValor(int);
        int getValor();
        ~Senha();
};

class ValorMinimo{
    private:
        int valor;
        void validar(int valor);
    public:
        ValorMinimo();
        ValorMinimo(int);
        void setValor(int);
        int getValor();
        ~ValorMinimo();
};




#endif // DOMINIOS_H_INCLUDED
