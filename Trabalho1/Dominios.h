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
        static const int LIMITE_MAX_SP1 = 5999999;  // Limites 1 do CEP da cidade de S�o Paulo.
        static const int LIMITE_MIN_SP2 = 8000000;
        static const int LIMITE_MAX_SP2 = 8499999;  // Limites 2 do CEP da cidade de S�o Paulo.
        static const int LIMITE_MIN_RJ  = 20000000;
        static const int LIMITE_MAX_RJ  = 26600999; // Limites do CEP da cidade do Rio de Janeiro.
        static const int LIMITE_MIN_BSB = 70000000;
        static const int LIMITE_MAX_BSB = 70999999; // Limites do CEP da cidade de Bras�lia.
        static const int LIMITE_MIN_SLV = 40000000;
        static const int LIMITE_MAX_SLV = 41999999; // Limites do CEP da cidade de Salvador.
        static const int LIMITE_MIN_FORT = 60000000;
        static const int LIMITE_MAX_FORT = 60999999; // Limites do CEP da cidade de Fortaleza.
        int cep;
        void validar(int cep);

    public:

///
/// Met&oacute;do para dar set no CEP.
///
///@param int que representa o CEP que ser&aacute; inserido.
///
///@throw invalid_argument Em caso de argumento inv&acute;lido,&eacute lancado
/// um objeto explicando o erro.
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
/// @brief C&oacute;digo destinado a armazenar a Classe do investimento.
///
/// As classes de investimento podem ser CDB, LCA, LCI, LF ou LC.

class Classe{
    private:
        string classe;
        void validar(string valor);

    public:

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

/// @class CodAgencia
///
/// @brief C&oacute;digo destinado a armazenar o C&oacute;digo da Agencia.
///
/// O c&oacute;digo de Agencia v&aacute;lido informado deve ser no formato XXXX em que X &eacute um d&igito de 0 a 9.
/// N&atildeo; &eacute; permitido o c&oacute;digo 0000.


class CodAgencia{
    private:
        static const int FORMATO = 4;       // Tamanho do formato v�lido.
        string agencia;
        void validar(string agencia);

    public:
///
/// Met&oacute;do para dar set na Classe.
///
/// @param string a ser inserida no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&acute;lido,&eacute lancado
/// um objeto explicando o erro.
///

        void setAgencia(string);

///
/// Met&oacute;do para dar get no c&oacute;digo de agencia.
///
///
///@return string Retorna o c&oacute;digo de agencia.
///

        string getAgencia();
};

class CodProduto{
    private:
        static const int FORMATO = 3;
        string produto;
        void validar(string produto);

    public:
        CodProduto();
        CodProduto(string);
        void setProduto(string);
        string getProduto();
};

class Data{
    private:
        static const int FORMATO = 10;
        string data;
        void validar(string valor);

    public:
        Data();
        Data(string);
        void setData(string);
        string getData();
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
        int prazo;
        void validar(int prazo);

    public:
        void setPrazo(int);
        int getPrazo();

};


class Taxa{
    private:
        static const int LIMITE_MIN = 0;
        static const int LIMITE_MAX = 200;
        int taxa;
        void validar(int taxa);

    public:
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
        void setValor(int);
        int getValor();
};

class CodAplicacao{
    private:
        static const int FORMATO = 5;
        string aplicacao;
        void validar(string aplicacao);

    public:
        void setAplicacao(string);
        string getAplicacao();
};

class CodBanco{
    private:
        static const int FORMATO = 3;
        string banco;
        void validar(string banco);

    public:
        void setBanco(string);
        string getBanco();
};

class Cpf{
    private:
        static const int TAMANHO = 14;
        string cpf;
        void validar(string cpf);
    public:
        void setCpf(string);
        string getCpf();
};

class Emissor{
    private:
        static const int LIMITE_MIN = 5;
        static const int LIMITE_MAX = 30;
        string emissor;
        void validar(string emissor);
    public:
        void setEmissor(string);
        string getEmissor();
};

class Endereco{
    private:
        static const int LIMITE_MIN = 5;
        static const int LIMITE_MAX = 20;
        string endereco;
        void validar(string endereco);
    public:
        void setEndereco(string);
        string getEndereco();
};

class Horario{
    private:
        string horario;
        void validar(string horario);
    public:
        Horario(string);
        void setHorario();
        string getHorario();
};

class Numero{
    private:
        static const int TAMANHO = 8;
        string numero;
        void validar(string numero);
    public:
        void setNumero(string);
        string getNumero();

};

class Senha{
    private:
        static const int TAMANHO = 6;
        int senha;
        void validar(int senha);
    public:
        void setSenha(int);
        int getSenha();
};

class ValorMinimo{
    private:
        int valor;
        void validar(int valor);
    public:
        void setValor(int);
        int getValor();
};




#endif // DOMINIOS_H_INCLUDED
