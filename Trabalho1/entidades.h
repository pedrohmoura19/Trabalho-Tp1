#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominios.h"


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
        void setProduto(const CodProduto &codigo);
        CodProduto getProduto();

        void setClasse(const Classe &classe);
        Classe getClasse();

        void setEmissor(const Emissor &emissor);
        Emissor getEmissor();

        void setPrazo(const Prazo &prazo);
        Prazo getPrazo();

        void setData(const Data &vencimento);
        Data getData();

        void setTaxa(const Taxa &taxa);
        Taxa getTaxa();

        void setHorario(const Horario &horario);
        Horario getHorario();

        void setValorMinimo(const ValorMinimo &valor);
        ValorMinimo getValorMinimo();

};


class Usuario{
 private:
        Nome nome;

        Endereco endereco;

        Cep cep;

        Cpf cpf;

        Senha senha;

 public:
        void setNome(const Nome&);
        Nome getNome();

        void setEndereco(const Endereco&);
        Endereco getEndereco() const;

        void setCep(const Cep &cep);
        Cep getCep();

        void setCpf(const Cpf &cpf);
        Cpf getCpf();

        void setSenha(const Senha &senha);
        Senha getSenha();

};


#endif // ENTIDADES_H_INCLUDED
