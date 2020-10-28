///
/// @file entidades.h
/// @author Pedro Henrique e Roberto Caixeta
/// @brief Biblioteca simples de Entidades
/// @version 0.1
/// @date 2020-10-17
///

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominios.h"

/// @class Aplicacao
///
/// @brief C&oacute;digo destinado a representar a classe de entidade Aplicac&atilde;o.
///
/// A entidade Aplicac&atilde;o representa uma aplicac&atilde;o de investimento e ir&aacute; conter codigo de aplicac&atilde;o,
/// valor de aplicac&atilde;o e data.
///
/// @see CodAplicacao
/// @see ValorAplicacao
/// @see Data


class Aplicacao{
private:
       CodAplicacao codigo;
       ValorAplicacao valor;
       Data data;
public:
       /// Metodo para dar set no Codigo de Aplicac&atilde;o
       ///
       /// @param CodAplicacao a ser inserido
       ///
       void setAplicacao(const CodAplicacao &codigo);

       /// Metodo para dar get no Codigo de Aplicac&atilde;o
       ///
       /// @return Codigo de Aplicac&atilde;o
       ///
       CodAplicacao getAplicacao();

       /// Metodo para dar set no Valor de Aplicac&atilde;o
       ///
       /// @param ValorAplicacao a ser inserido
       ///
       void setValor(const ValorAplicacao &valor);

       /// Metodo para dar get no Valor de Aplicac&atilde;o
       ///
       /// @return Valor de Aplicac&atilde;o
       ///
       ValorAplicacao getValor();

       /// Metodo para dar set na Data
       ///
       /// @param Data a ser inserido
       ///
       void setData(const Data &data);

       /// Metodo para dar get na Data
       ///
       /// @return Data
       ///
       Data getData();
};

/// @class Conta
///
/// @brief C&oacute;digo destinado a representar a classe de entidade Conta.
///
/// A entidade Conta representa uma Conta de banco e ir&aacute; conter codigo de Banco, codigo de Agencia e numero.
///
/// @see CodBanco
/// @see CodAgencia
/// @see Numero

class Conta{
private:
       CodBanco banco;
       CodAgencia agencia;
       Numero numero;
public:
       /// Metodo para dar set no Codigo de Banco
       ///
       /// @param CodBanco a ser inserido
       ///
       void setBanco(const CodBanco &banco);

       /// Metodo para dar get no Codigo de Banco
       ///
       /// @return Codigo de Banco
       ///
       CodBanco getBanco();

       /// Metodo para dar set no Codigo de Agencia
       ///
       /// @param CodAgencia a ser inserido
       ///
       void setAgencia(const CodAgencia &agencia);

       /// Metodo para dar get no Codigo de Agencia
       ///
       /// @return Codigo de Agencia
       ///
       CodAgencia getAgencia();

       /// Metodo para dar set no Numero
       ///
       /// @param Numero a ser inserido
       ///
       void setNumero(const Numero &numero);

       /// Metodo para dar get no Numero
       ///
       /// @return Numero
       ///
       Numero getNumero();

};



/// @class Produto
///
/// @brief C&oacute;digo destinado a representar a classe de entidade Produto.
///
/// A entidade Produto representa um produto de investimento e ir&aacute; conter codigo do produto, classe do produto de investimento, emissor,
/// prazo de aplicac&atilde;o em meses, data do vencimento, taxa de rendimento, horario limite para aplicac&atilde;o e
/// valor minimo de aplicac&atilde;
///
/// @see CodProduto
/// @see Classe
/// @see Emissor
/// @see Prazo
/// @see Data
/// @see Taxa
/// @see Horario
/// @see ValorMinimo
///

class Produto{
 private:
        CodProduto codigo;

        Classe classe;

        Emissor emissor;

        Prazo prazo;

        Data vencimento;

        Taxa taxa;

        Horario horario;

        ValorMinimo valor;

 public:
        /// Metodo para dar set no Codigo de Produto
        ///
        /// @param Codigo a ser inserido
        ///
        void setProduto(const CodProduto &codigo);

        /// Metodo para dar get no Codigo de Produto
        ///
        /// @return Codigo do Produto
        ///
        CodProduto getProduto();

        /// Metodo para dar set na Classe de Investimento
        ///
        /// @param Classe de investimento a ser inserida
        ///
        void setClasse(const Classe &classe);

        /// Metodo para dar get na Classe de Investimento
        ///
        /// @return Classe de investimento do Produto
        ///
        Classe getClasse();

        /// Metodo para dar set no Emissor do Produto
        ///
        /// @param Emissor a ser inserido
        ///
        void setEmissor(const Emissor &emissor);

        /// Metodo para dar get no Emissor
        ///
        /// @return Emissor do Produto de investimento
        ///
        Emissor getEmissor();

        /// Metodo para dar set no Prazo
        ///
        /// @param Prazo a ser inserido
        ///
        void setPrazo(const Prazo &prazo);

        /// Metodo para dar get no Prazo
        ///
        /// @return Prazo
        ///
        Prazo getPrazo();

        /// Metodo para dar set na Data de vencimento
        ///
        /// @param Data de vencimento
        ///
        void setData(const Data &vencimento);

        /// Metodo para dar get na Data
        ///
        /// @return Data de vencimento
        ///
        Data getData();

        /// Metodo para dar set na Taxa de rendimento do produto
        ///
        /// @param Taxa a ser inserida
        ///
        void setTaxa(const Taxa &taxa);

        /// Metodo para dar get na Taxa de rendimento
        ///
        /// @return Taxa de rendimento do produto
        ///
        Taxa getTaxa();

        /// Metodo para dar ser no Horario limite para aplicacao
        ///
        /// @param Horario a ser inserido
        ///
        void setHorario(const Horario &horario);

        /// Metodo para dar get no Horario
        ///
        /// @return Horario limite para aplicacao no Produto
        ///
        Horario getHorario();

        /// Metodo para dar set no Valor Minimo investido
        ///
        /// @param Valor Minimo a ser inserido
        ///
        void setValorMinimo(const ValorMinimo &valor);

        /// Metodo para dar get no Valor Minimo
        ///
        /// @return Valor Minimo do investimento
        ///
        ValorMinimo getValorMinimo();

};

/// @class Usuario
///
/// @brief Entidade que deve armazenar dados de um usuario
///
/// Esta entidade &eacute; a representacao de um usuario no programa e possui como
/// atributos um Nome, um Endereco, um Email, um CPF e uma Senha.
///
/// @see Nome
/// @see Endereco
/// @see Cep
/// @see Cpf
/// @see Senha
///

class Usuario{
 private:
        Nome nome;

        Endereco endereco;

        Cep cep;

        Cpf cpf;

        Senha senha;

 public:
        /// Metodo para dar set no Nome do usu&aacute;rio
        ///
        /// @param Nome a ser inserido
        ///
        void setNome(const Nome&);

        /// Metodo para dar get no Nome do usu&aacute;rio
        ///
        /// @return Nome do usu&aacute;rio
        ///
        Nome getNome();

        /// Metodo para dar set no Endereco do usu&aacute;rio
        ///
        /// @param Endereco a ser inserido
        ///
        void setEndereco(const Endereco&);

        /// Metodo para dar get no Endereco do usu&aacute;rio
        ///
        /// @return Endereco do usu&aacute;rio
        ///
        Endereco getEndereco() const;

        /// Metodo para dar set no Cep do usu&aacute;rio
        ///
        /// @param Cep a ser inserido
        ///
        void setCep(const Cep &cep);

        /// Metodo para dar get no Cep do usu&aacute;rio
        ///
        /// @return Cep do usu&aacute;rio
        ///
        Cep getCep();

        /// Metodo para dar set no Cpf do usu&aacute;rio
        ///
        /// @param Cpf a ser inserido
        ///
        void setCpf(const Cpf &cpf);

        /// Metodo para dar get no Cpf do usu&aacute;rio
        ///
        /// @return Cpf do usu&aacute;rio
        ///
        Cpf getCpf();

        /// Metodo para dar set na Senha do usu&aacute;rio
        ///
        /// @param Senha a ser inserido
        ///
        void setSenha(const Senha &senha);

        /// Metodo para dar get na Senha do usu&aacute;rio
        ///
        /// @return Senha do usu&aacute;rio
        ///
        Senha getSenha();

};



#endif // ENTIDADES_H_INCLUDED
