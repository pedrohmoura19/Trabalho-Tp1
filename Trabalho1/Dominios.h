///@file Dominios.h
///@author Pedro Henrique e Roberto Caixeta
///@brief Biblioteca simples de Classes de Dominios
///@version 0.1
///@date 2020-10-17




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
///
/// -20000000 a 26600999 : Rio de Janeiro
///
/// -70000000 a 70999999 : Bras&iacute;lia.
///
/// -40000000 a 41999999 : Salvador.
///
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
///@return CEP do us&uacute;ario

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
///@param string que sera inserida no objeto.
///
///@throw invalid_argument Em caso de argumento inv&acute;lido,&eacute lancado
/// um objeto explicando o erro.
///

        void setClasse(string);

///
/// Met&oacute;do para dar get na Classe.
///
///
///@return string Retorna a classe do investimento

        string getClasse();
};

/// @class CodAgencia
///
/// @brief C&oacute;digo destinado a armazenar o C&oacute;digo da Agencia.
///
/// O c&oacute;digo de Agencia v&aacute;lido informado deve ser no formato XXXX em que X &eacute; um d&iacute;gito de 0 a 9.
/// N&atildeo; &eacute; permitido o c&oacute;digo 0000.


class CodAgencia{
    private:
        static const int FORMATO = 4;       // Tamanho do formato válido.
        string agencia;
        void validar(string agencia);

    public:
///
/// Met&oacute;do para dar set no C&oacute;digo da Agencia.
///
/// @param string a ser inserida no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
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

/// @class CodProduto
///
/// @brief C&oacute;digo destinado a armazenar o C&oacute;digo do Produto.
///
/// O c&oacute;digo do Produto v&aacute;lido informado deve ser no formato XXX em que X &eacute; um d&iacute;gito de 0 a 9.
/// N&atilde;o &eacute; permitido o c&oacute;digo 000.
///

class CodProduto{
    private:
        static const int FORMATO = 3;       //Tamanho do formato valido.
        string produto;
        void validar(string produto);

    public:
///
/// Met&oacute;do para dar set no C&oacute;digo do Produto.
///
/// @param string com o produto a ser inserido no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&acute;lido,&eacute lancado
/// um objeto explicando o erro.
///
        void setProduto(string);

///
/// Met&oacute;do para dar get no C&oacute;digo do Produto.
///
///
///@return string Retorna o c&oacute;digo do Produto.
///

        string getProduto();
};

/// @class Data
///
/// @brief C&oacute;digo destinado a armazenar a Data.
///
/// A Data v&aacute;lida informada deve ser no formato DD/MM/AAAA, com DD representando os dias v&aacute;lidos
/// levando em consideracao anos bissextos e os respectivos meses MM que devem ser da faixa de 01 a 12.J&aacute;
/// o AAAA representa o ano que deve ser inserido na faixa de 2020 a 2099.
///

class Data{
    private:
        static const int FORMATO = 10;
        string data;
        void validar(string data);

    public:
///
/// Met&oacute;do para dar set na Data.
///
/// @param string no formato DD/MM/AAAA a ser inserido no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
/// um objeto explicando o erro.
///
        void setData(string);

///
/// Met&oacute;do para dar get na Data.
///
///
///@return string Retorna a Data.
///
        string getData();
};

/// @class Nome
///
/// @brief C&oacute;digo destinado a armazenar o Nome do usu&aacute;rio.
///
/// O nome &eacute; um texto composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
/// espaco, h&aacute; pelo menos 5 letras, n&atilde;o h&aacute; espacos em sequencia e a primeira letra de cada termo &eacute;
/// letra mai&uacute;scula.
///

class Nome{
    private:
        static const int LIMITE_MIN = 5;
        static const int LIMITE_MAX = 30;
        string nome;
        void validar(string nome);

    public:
///
/// Met&oacute;do para dar set no Nome.
///
/// @param string com 5 a 30 caracteres a ser inserido no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
/// um objeto explicando o erro.
///
        void setNome(string);
///
/// Met&oacute;do para dar get no Nome.
///
///
///@return string Retorna o Nome.
///

        string getNome();
};

/// @class Numero
///
/// @brief C&oacute;digo destinado a armazenar a conta corrente do usu&aacute;rio.
///
/// A conta corrente &eacute; um n&uacute;mero no formato XXXXXX-Y, onde cada X &eacute digito (0 – 9) e Y é
/// um dígito verificador calculado por meio do seguinte algoritmo:
///
///  &ndash; O digito verificador &eacute; igual a nove menos o resto da divisao por seis da soma de todos os digitos multiplicados
///  por sua respectiva posic&atilde;o (Primeiro digito multiplicado por 1, Segundo por dois e assim por diante).
///
///

class Numero{
    private:
        static const int TAMANHO = 8;
        string numero;
        void validar(string numero);
    public:
///
/// Met&oacute;do para dar set no Numero da conta corrente.
///
/// @param string com 6 digitos e 1 digito verificador separados com '-' a ser inserido no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
/// um objeto explicando o erro.
///
        void setNumero(string);
///
/// Met&oacute;do para dar get no Numero.
///
///
/// @return string Retorna o Numero.
///
        string getNumero();

};

/// @class Prazo
///
/// @brief C&oacute;digo destinado a armazenar o Prazo da aplicacao em meses.
///
/// O Prazo v&aacute;lido inserido deve ser um valor igual a 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72 meses.
///
class Prazo{
    private:
        int prazo;
        void validar(int prazo);

    public:
///
/// Met&oacute;do para dar set no Prazo.
///
/// @param int Valor a ser inserido no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
/// um objeto explicando o erro.
///
        void setPrazo(int);
///
/// Met&oacute;do para dar get no Prazo.
///
///
///@return int Retorna o valor do Prazo.
///
        int getPrazo();

};

/// @class Taxa
///
/// @brief C&oacute;digo destinado a armazenar a Taxa de rendimento do produto em porcentagem.
///
/// A Taxa v&aacute;lida inserida deve ser um valor na faixa de 0 a 200%(ao ano).
///

class Taxa{
    private:
        static const int LIMITE_MIN = 0;
        static const int LIMITE_MAX = 200;
        int taxa;
        void validar(int taxa);

    public:
///
/// Met&oacute;do para dar set na Taxa.
///
/// @param int Valor a ser inserido no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
/// um objeto explicando o erro.
///
        void setTaxa(int);
///
/// Met&oacute;do para dar get na Taxa.
///
///
///@return int Retorna o valor da Taxa.
///
        int getTaxa();

};

/// @class ValorAplicacao
///
/// @brief C&oacute;digo destinado a armazenar o Valor da Aplicac&atilde;o do usu&aacute;rio.
///
/// O Valor de Aplicac&atilde;o v&aacute;lido inserido deve ser um valor na faixa de 0 a 1000000(reais).
///

class ValorAplicacao{
    private:
        static const int LIMITE_MIN = 0;
        static const int LIMITE_MAX = 1000000;
        int valor;
        void validar(int valor);

    public:
///
/// Met&oacute;do para dar set no Valor da Aplicac&atilde;o.
///
/// @param int Valor a ser inserido no objeto.
///
/// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
/// um objeto explicando o erro.
///
        void setValor(int);
///
/// Met&oacute;do para dar get no Valor.
///
///
///@return int Retorna o valor de aplicac&atilde;o.
///
        int getValor();
};

/// @class CodAplicacao
///
/// @brief C&oacute;digo destinado a armazenar o C&oacute;digo da Aplicac&atilde;o.
///
/// O C&oacute;digo da Aplicac&atilde;o v&aacute;lido informado deve ser no formato XXXXX em que X &eacute; um d&iacute;gito de 0 a 9.
/// N&atildeo; &eacute; permitido o c&oacute;digo 00000.
///

class CodAplicacao{
    private:

        static const int TAMANHO = 5;
        string valor;
        int tamanhoValor = valor.size();
        void validar(string valor);

    public:
        ///
        /// Met&oacute;do para dar set na Classe.
        ///
        /// @param string a ser inserida no objeto.
        ///
        /// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
        /// um objeto explicando o erro.
        ///
        void setAplicacao(string);

        ///
        /// Met&oacute;do para dar get no  C&oacute;digo da Aplicac&atilde;o.
        ///
        ///
        ///@return string Retorna o  C&oacute;digo da Aplicac&atilde;o.
        ///
        string getAplicacao();
};


/// @class CodBanco
///
/// @brief C&oacute;digo destinado a armazenar o C&oacute;digo do Banco.
///
/// O C&oacute;digo de Banco v&aacute;lido informado deve ser no formato XXX e os c&oacute;digos aceitos devem corresponder
/// aos c&oacute;digos dos 5 maiores bancos brasileiros por ativos totais que s&atilde;o :
///
/// -001: Banco do Brasil
///
/// -033: Banco Santander
///
/// -104: Caixa Economica Federal
///
/// -237: Banco Bradesco
///
/// -341: Itau Unibanco
///

class CodBanco{
    private:

        static const int TAMANHO = 3;
        string valor;
        void validar(string valor);

    public:
        ///
        /// Met&oacute;do para dar set na Classe.
        ///
        /// @param string a ser inserida no objeto.
        ///
        /// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
        /// um objeto explicando o erro.
        ///
        void setValor(string);
        ///
        /// Met&oacute;do para dar get no  C&oacute;digo do Banco.
        ///
        ///
        ///@return string Retorna o  C&oacute;digo do Banco.
        ///
        string getValor();

};

/// @class Cpf
///
/// @brief C&oacute;digo destinado a armazenar o CPF.
///
/// O CPF (Cadastro de Pessoa Fisica) v&aacute;lido informado deve ser no formato XXX.XXX.XXX-XX  em que X &eacute;
/// um d&iacute;gito de 0 a 9.Cada CPF inclui d&iacute;gitos verificadores calculados por meio de algor&iacute;timo apropriado.
///

class Cpf{
    private:
        static const int TAMANHO = 14;
        string cpf;
        void validar(string cpf);
    public:
        ///
        /// Met&oacute;do para dar set no C&oacute;digo do Banco..
        ///
        /// @param string a ser inserida no objeto.
        ///
        /// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
        /// um objeto explicando o erro.
        ///
        void setCpf(string);
        ///
        /// Met&oacute;do para dar get no C&oacute;digo do Banco.
        ///
        ///
        ///@return string Retorna o  C&oacute;digo do Banco.
        ///
        string getCpf();
};
/// @class Emissor
///
/// @brief C&oacute;digo destinado a armazenar o Emissor.
///
/// O Emissor &eacute; um texto composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
/// espaco, h&aacute; pelo menos 5 letras, n&atilde;o h&aacute; espacos em sequencia e a primeira letra de cada termo &eacute;
/// letra mai&uacute;scula. Esse texto representa o emissor do produto do investimento desejado.
///


class Emissor{
    private:
        static const int LIMITE_MIN = 5;
        static const int LIMITE_MAX = 30;
        string emissor;
        void validar(string emissor);
    public:
        ///
        /// Met&oacute;do para dar set no Emissor.
        ///
        /// @param string a ser inserida no objeto.
        ///
        /// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
        /// um objeto explicando o erro.
        ///
        void setEmissor(string);
        ///
        /// Met&oacute;do para dar get no  Emissor.
        ///
        ///
        ///@return string Retorna o  Emissor.
        ///
        string getEmissor();
};

/// @class Endereco
///
/// @brief C&oacute;digo destinado a armazenar o Endereco do usuario.
///
/// O Endereco &eacute; um texto composto por 5 a 20 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
/// espaco, h&aacute; pelo menos 5 letras, n&atilde;o h&aacute; espacos em sequencia e a primeira letra de cada termo &eacute;
/// letra mai&uacute;scula. Representa o local de residencia do usuario.
///

class Endereco{
    private:
        static const int LIMITE_MIN = 5;
        static const int LIMITE_MAX = 20;
        string endereco;
        void validar(string endereco);
    public:
        ///
        /// Met&oacute;do para dar set no Endereco.
        ///
        /// @param string a ser inserida no objeto.
        ///
        /// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
        /// um objeto explicando o erro.
        ///
        void setEndereco(string);
        ///
        /// Met&oacute;do para dar get no Endereco.
        ///
        ///
        ///@return string Retorna o Endereco.
        ///
        string getEndereco();
};

/// @class Horario
///
/// @brief C&oacute;digo destinado a armazenar o Hor&aacute;rio.
///
/// O Hor&aacute;rio v&aacute;lido informado deve ser no formato XY:ZW para representar hor&aacute;rio  entre 13:00 e 17:00 horas.
///

class Horario{
    private:
        string horario;
        static const int LIMITE_MIN = 5;
        void validar(string horario);
    public:
        ///
        /// Met&oacute;do para dar set no Horario.
        ///
        /// @param string a ser inserida no objeto.
        ///
        /// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
        /// um objeto explicando o erro.
        ///
        void setHorario(string);
        ///
        /// Met&oacute;do para dar get no Hor&aacute;rio .
        ///
        ///
        ///@return string Retorna o hor&aacute;rio .
        ///
        string getHorario();
};

/// @class Senha
///
/// @brief C&oacute;digo destinado a armazenar a Senha.
///
/// A Senha deve ser criada pelo usu&aacute;rio e seu formato v&aacute;lido informado deve ser no Formato XXXXXX
/// onde cada X &eacute; d&iacute;gito (0 – 9) e não h&aacute; d&iacute;gito repetido.
///

class Senha{
    private:
        static const int TAMANHO = 6;
        string senha;
        void validar(string valor);
    public:
        ///
        /// Met&oacute;do para dar set na Senha.
        ///
        /// @param string a ser inserida no objeto.
        ///
        /// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
        /// um objeto explicando o erro.
        ///
        void setSenha(string);
        ///
        /// Met&oacute;do para dar get na Senha .
        ///
        ///
        ///@return string Retorna a Senha .
        ///
        string getSenha();
};

/// @class ValorMinimo
///
/// @brief C&oacute;digo destinado a armazenar o Valor Minimo.
///
/// Valor Minimo investido deve ser 1.000,00, 5.000,00, 10.000 ou 50.000,00 (reais)
///

class ValorMinimo{
    private:
        int valorMinimo;
        void validar(int valorMinimo);
    public:
        ///
        /// Met&oacute;do para dar set na Classe.
        ///
        /// @param int a ser inserido no objeto.
        ///
        /// @throw invalid_argument Em caso de argumento inv&aacute;lido,&eacute; lancado
        /// um objeto explicando o erro.
        ///
        void setValorMinimo(int);
        ///
        /// Met&oacute;do para dar get no Valor Minimo .
        ///
        ///
        ///@return int Retorna o Valor Minimo .
        ///
        int getValorMinimo();
};




#endif // DOMINIOS_H_INCLUDED
