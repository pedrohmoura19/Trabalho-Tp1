#ifndef CONTROLADORASSERVICO_H_INCLUDED
#define CONTROLADORASSERVICO_H_INCLUDED

#include <list>
#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "sqlite3.h"

using namespace std;

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------
// Implementar as controladoras de serviço.
//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//Classe EErroPersistencia.

class EErroPersistencia {
private:
        string mensagem;
public:
        EErroPersistencia(string);
        string what();
};

//Classe ElementoResultado.

class ElementoResultado {
private:
        string nomeColuna;
        string valorColuna;
public:
        void setNomeColuna(const string&);
        string getNomeColuna() const;
        void setValorColuna(const string&);
        string getValorColuna() const;
};

//Classe ComandoSQL.

class ComandoSQL {
private:
        const char *nomeBancoDados;
        sqlite3 *bd;
        char *mensagem;
        int rc;
        void conectar() throw (EErroPersistencia);
        void desconectar() throw (EErroPersistencia);
        static int callback(void *, int, char **, char **);

protected:
        string comandoSQL;
        static list<ElementoResultado> listaResultado;
public:
        ComandoSQL() {
             //Informa o nome do banco de dados.
             nomeBancoDados = "testedb";
        }
        void executar() throw (EErroPersistencia);
};


//---------------------------------------------------------------------------
//Classe ComandoLerSenha.

class ComandoAutenticar:public ComandoSQL {
public:
        ComandoAutenticar(Cpf);
        string getResultado() throw (EErroPersistencia);
};

//---------------------------------------------------------------------------
//Classe ComandoCadastrarUsuario.

class ComandoCadastrarUsuario:public ComandoSQL {
public:
        ComandoCadastrarUsuario(Usuario);
};

//---------------------------------------------------------------------------
//Classe ComandoCadastrarProduto.

class ComandoCadastrarProduto:public ComandoSQL {
public:
        ComandoCadastrarProduto(Produto);
};

//Classe ComandoPesquisarProdutos.

class ComandoPesquisarProdutos:public ComandoSQL {
public:
        ComandoPesquisarProdutos(Classe);
        Produto getResultado() throw (EErroPersistencia);
};

//---------------------------------------------------------------------------
//Classe ComandoRemoverUsuario.

class ComandoRemoverUsuario:public ComandoSQL {
public:
        ComandoRemoverUsuario(Cpf);
};

//---------------------------------------------------------------------------
//Classe ComandoCadastrarConta.

class ComandoCadastrarConta:public ComandoSQL {
public:
        ComandoCadastrarConta(Conta);
};

//---------------------------------------------------------------------------
//Classe ComandoConsultarConta.

class ComandoConsultarConta:public ComandoSQL {
public:
        ComandoConsultarConta(Conta);
        Conta getResultado() throw (EErroPersistencia);
};


//---------------------------------------------------------------------------
//Classe ComandoRemoverProduto.

class ComandoRemoverProduto:public ComandoSQL {
public:
        ComandoRemoverProduto(CodProduto);
};

//Classe ComandoRealizarAplicacao.

class ComandoRealizarAplicacao:public ComandoSQL {
public:
        ComandoRealizarAplicacao(Aplicacao);
};


//Classe ElementoResultado.

inline string ElementoResultado::getNomeColuna() const {
        return nomeColuna;
}

inline string ElementoResultado::getValorColuna() const {
        return valorColuna;
}



//--------------------------------------------------------------------------------------------
// Classes controladoras da camada de serviços.

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço autenticação.

class CntrServicoAutenticacao:public IServicoAutenticacao{
    public:
        bool ComandoAutenticar(Cpf,Senha) override;
        Usuario ComandoDadosAutenticados() override;
};

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço pessoal.

class CntrServicoPessoal:public IServicoPessoal{
    public:
        bool ComandoCadastrarUsuario(Usuario) override;
        Usuario ComandoInformacoesUsuario(Cpf&) override;
        bool ComandoRemoverUsuario(Usuario) override;
};

//--------------------------------------------------------------------------------------------
// Classe controladora de serviço produtos financeiros.

class CntrServicoProdutosFinanceiros:public IServicoProdutosFinanceiros{
    public:
        bool ComandoCadastrarConta(Conta) override;
        Conta ComandoConsultarConta(Cpf) override;
        bool ComandoCadastrarProduto(Produto) override;
        Produto ComandoConsultarProduto(Classe) override;
        bool ComandoRemoverProduto(CodProduto) override;
        bool ComandoRealizarAplicacao(Aplicacao) override;
        Aplicacao ComandoListarAplicacoes() override;
};


#endif // CONTROLADORASSERVICO_H_INCLUDED
