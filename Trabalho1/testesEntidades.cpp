#include "testesEntidades.h"
#include "entidades.h"
#include "Dominios.h"
#include <string>

//Metodos da Classe TUProduto
void TUProduto::setUp(){
    produto = new Produto();
    estado = true;
}

void TUProduto::tearDown(){
    delete produto;
}

void TUProduto::testarCenarioSucesso(){

    CodProduto codigo;
    codigo.setProduto(VALOR_VALIDO_CODIGO);
    produto->setProduto(codigo);

    Classe classe;
    classe.setClasse(VALOR_VALIDO_CLASSE);
    produto->setClasse(classe);

    Emissor emissor;
    emissor.setEmissor(VALOR_VALIDO_EMISSOR);
    produto->setEmissor(emissor);

    Prazo prazo;
    prazo.setPrazo(VALOR_VALIDO_PRAZO);
    produto->setPrazo(prazo);

    Data vencimento;
    vencimento.setData(VALOR_VALIDO_VENCIMENTO);
    produto->setData(vencimento);

    Taxa taxa;
    taxa.setTaxa(VALOR_VALIDO_TAXA);
    produto->setTaxa(taxa);

    Horario horario;
    horario.setHorario(VALOR_VALIDO_HORARIO);
    produto->setHorario(horario);

    ValorMinimo valor;
    valor.setValorMinimo(VALOR_VALIDO_VALOR);
    produto->setValorMinimo(valor);

    if(produto->getProduto().getProduto() != VALOR_VALIDO_CODIGO){
        estado = false;

    }else if(produto->getClasse().getClasse() != VALOR_VALIDO_CLASSE){
        estado = false;

    }else if(produto->getEmissor().getEmissor() != VALOR_VALIDO_EMISSOR){
        estado = false;

    }else if(produto->getPrazo().getPrazo() != VALOR_VALIDO_PRAZO){
        estado = false;

    }else if(produto->getData().getData() != VALOR_VALIDO_VENCIMENTO){
        estado = false;

    }else if(produto->getTaxa().getTaxa() != VALOR_VALIDO_TAXA){
        estado = false;

    }else if(produto->getHorario().getHorario() != VALOR_VALIDO_HORARIO){
        estado = false;

    }else if(produto->getValorMinimo().getValorMinimo() != VALOR_VALIDO_VALOR){
        estado = false;

    }

}

bool TUProduto::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


//Metodos da Classe de entidade TUUsuario
void TUUsuario::setUp(){
    usuario = new Usuario();
    estado = true;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){

    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    usuario->setNome(nome);

    Endereco endereco;
    endereco.setEndereco(VALOR_VALIDO_ENDERECO);
    usuario->setEndereco(endereco);

    Cep cep;
    cep.setCep(VALOR_VALIDO_CEP);
    usuario->setCep(cep);

    Cpf cpf;
    cpf.setCpf(VALOR_VALIDO_CPF);
    usuario->setCpf(cpf);

    Senha senha;
    senha.setSenha(VALOR_VALIDO_SENHA);
    usuario->setSenha(senha);

    if(usuario->getNome().getNome() != VALOR_VALIDO_NOME){
        estado = false;

    }else if(usuario->getEndereco().getEndereco() != VALOR_VALIDO_ENDERECO){
        estado = false;

    }else if(usuario->getCep().getCep() != VALOR_VALIDO_CEP){
        estado = false;

    }else if(usuario->getCpf().getCpf() != VALOR_VALIDO_CPF){
        estado = false;

    }else if(usuario->getSenha().getSenha() != VALOR_VALIDO_SENHA){
        estado = false;
    }
}

bool TUUsuario::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
