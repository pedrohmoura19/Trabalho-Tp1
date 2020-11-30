#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "Dominios.h"
#include "entidades.h"
#include "curses.h"

// Interfaces camada de serviço

class IServicoAutenticacao {
    public:
        virtual bool ComandoAutenticar(Cpf,Senha) = 0;
        virtual Usuario ComandoDadosAutenticados() = 0;
        virtual ~IServicoAutenticacao(){}
};

class IServicoPessoal{
public:
        virtual bool ComandoCadastrarUsuario(Usuario) = 0;
        virtual Usuario ComandoInformacoesUsuario(Cpf&) = 0;
        virtual bool ComandoRemoverUsuario(Usuario) = 0;
        virtual ~IServicoPessoal(){}
};

class IServicoProdutosFinanceiros{
public:
        virtual bool ComandoCadastrarConta(Conta) = 0;
        virtual Conta ComandoConsultarConta(Cpf) = 0;
        virtual bool ComandoCadastrarProduto(Produto) = 0;
        virtual Produto ComandoConsultarProduto(Classe) = 0;
        virtual bool ComandoRemoverProduto(CodProduto) = 0;
        virtual bool ComandoRealizarAplicacao(Aplicacao) = 0;
        virtual Aplicacao ComandoListarAplicacoes() = 0;
        virtual ~IServicoProdutosFinanceiros(){}
};

// Interfaces camada de apresentação

class IApresentacaoAutenticacao {
    public:
        virtual bool autenticar(Cpf*) = 0;
        virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
        virtual ~IApresentacaoAutenticacao(){}
};

class IApresentacaoPessoal{
    public:
        virtual void executar(Cpf) = 0;
        virtual void cadastrar() = 0;
        virtual void setCntrServicoPessoal(IServicoPessoal*) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        virtual ~IApresentacaoPessoal(){}
};

class IApresentacaoProdutosFinanceiros{
    public:
        virtual void executar() = 0;
        virtual void executar(Cpf) = 0;
        virtual void setCntrServicoProdutosFinanceiros(IServicoProdutosFinanceiros*) = 0;
        ~IApresentacaoProdutosFinanceiros(){}
};



#endif // INTERFACES_H_INCLUDED
