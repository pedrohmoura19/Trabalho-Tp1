#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>
#include <stdexcept>

using namespace std;

/// @class Cep
///
/// @brief C&oacute;digo destinado a armazenar o CEP.
///
/// C&oacute;digo v&aacute;lido caso o valor esteja entre as seguintes faixas:
///
/// -1000000 a 5999999 e 8000000 a 8499999 : S&atilde;o Paulo
/// -20000000 a 26600999 : Rio de Janeiro
/// -70000000 a 70999999 : Bras&iacute;lia.
/// -40000000 a 41999999 : Salvador.
/// -60000000 a 60999999 : Fortaleza.
///

class Cep{
    private:
        static const int LIMITE_MIN_SP1 = 1000000;
        static const int LIMITE_MAX_SP1 = 5999999;  // Limites 1 do CEP da cidade de São Paulo.
        static const int LIMITE_MIN_SP2 = 8000000;
        static const int LIMITE_MAX_SP2 = 8499999;  // Limites 2 do CEP da cidade de São Paulo.
        static const int LIMITE_MIN_RJ  = 20000000;
        static const int LIMITE_MAX_RJ  = 26600999; // Limites do CEP da cidade do Rio de Janeiro.
        static const int LIMITE_MIN_BSB = 70000000;
        static const int LIMITE_MAX_BSB = 70999999; // Limites do CEP da cidade de Brasília.
        static const int LIMITE_MIN_SLV = 40000000;
        static const int LIMITE_MAX_SLV = 41999999; // Limites do CEP da cidade de Salvador.
        static const int LIMITE_MIN_FORT = 60000000;
        static const int LIMITE_MAX_FORT = 60999999; // Limites do CEP da cidade de Fortaleza.
        int cep;
        void validar(int valor);

    public:

///
/// Inicializa o objeto com o valor 0.
///

        Cep();

///
/// Inicializa o objeto com CEP informado caso o mesmo seja v&aacute;lido.
///
/// @param valor do CEP a ser inserido.
///

        Cep(int);

///
/// Met&oacute;do para dar set no CEP.
///
///@param
///

        void setCep(int);

///
/// Met&oacute;do para dar get no CEP
///
///
///@return

        int getCep();
};

/// @class Classe
///
/// @brief C&oacute;digo destinado a armazenar o Classe do investimento.
///
/// As classes de investimento podem ser CDB, LCA, LCI, LF ou LC.

class Classe{
    private:
        string classe;
        void validar(string valor);

    public:
///
/// Inicializa o objeto com o valor 0.
///
        Classe();

///
/// Inicializa o objeto com a Classe informada caso a mesma seja v&aacute;lido.
///
/// @param string da Classe a ser inserida.
///
        Classe(string);

///
/// Met&oacute;do para dar set na Classe.
///
///@param
///

        void setClasse(string);

///
/// Met&oacute;do para dar get na Classe.
///
///
///@return

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
        string data;
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
        int taxa;
        void validar(int taxa);

    public:
        Taxa();
        Taxa(int);
        void setTaxa(int);
        int getTaxa();

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
