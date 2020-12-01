#include "controladorasServico.h"

list<ElementoResultado> ComandoSQL::listaResultado;

//Classe ErroPersistencia.

EErroPersistencia::EErroPersistencia(string mensagem){
        this->mensagem = mensagem;
}

string EErroPersistencia::what() {
        return mensagem;
}

//Classe ElementoResultado.

void ElementoResultado::setNomeColuna(const string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna){
        this->valorColuna = valorColuna;
}

//Classe ComandoSQL.

void ComandoSQL::conectar() throw (EErroPersistencia) {
      rc = sqlite3_open(nomeBancoDados, &bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar() throw (EErroPersistencia) {
      rc =  sqlite3_close(bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na desconexao ao banco de dados");
}

void ComandoSQL::executar() throw (EErroPersistencia) {
        conectar();
        rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
        if(rc != SQLITE_OK){
                if (mensagem)
                        free(mensagem);
                throw EErroPersistencia("Erro na execucao do comando SQL");
        }
        desconectar();
}

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){
      NotUsed=0;
      ElementoResultado elemento;
      int i;
      for(i=0; i<argc; i++){
        elemento.setNomeColuna(nomeColuna[i]);
        elemento.setValorColuna(valorColuna[i] ? valorColuna[i]: "NULL");
        listaResultado.push_front(elemento);
      }
      return 0;
}

//Classe ComandoAutenticar

ComandoAutenticar::ComandoAutenticar(Cpf cpf) {
        comandoSQL = "SELECT senha FROM usuarios WHERE cpf = ";
        comandoSQL += cpf.getCpf();
}

string ComandoAutenticar::getResultado() throw (EErroPersistencia) {
        ElementoResultado resultado;
        string senha;

        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        senha = resultado.getValorColuna();

        return senha;
}


//Classe ComandoCadastrarUsuario.

ComandoCadastrarUsuario::ComandoCadastrarUsuario(Usuario usuario) {

        comandoSQL = "INSERT INTO usuarios VALUES (";
        comandoSQL += "'" + usuario.getNome().getNome() + "', ";
        comandoSQL += "'" + usuario.getEndereco().getEndereco() + "', ";
        comandoSQL += "'" + to_string(usuario.getCep().getCep()) + "', ";
        comandoSQL += "'" + usuario.getCpf().getCpf() + "', ";
        comandoSQL += "'" + usuario.getSenha().getSenha() + "')";
}

//Classe ComandoCadastrarProduto

ComandoCadastrarProduto::ComandoCadastrarProduto(Produto produto) {

        comandoSQL = "INSERT INTO produtos VALUES (";
        comandoSQL += "'" + produto.getProduto().getProduto() + "', ";
        comandoSQL += "'" + produto.getClasse().getClasse() + "', ";
        comandoSQL += "'" + produto.getEmissor().getEmissor() + "', ";
        comandoSQL += "'" + to_string(produto.getPrazo().getPrazo()) + "', ";
        comandoSQL += "'" + produto.getData().getData() + "', ";
        comandoSQL += "'" + to_string(produto.getTaxa().getTaxa()) + "', ";
        comandoSQL += "'" + produto.getHorario().getHorario() + "', ";
        comandoSQL += "'" + to_string(produto.getValorMinimo().getValorMinimo()) + "')";
}

//Classe ComandpPesquisarProduto

ComandoConsultarProduto::ComandoConsultarProduto(Classe classe){
    comandoSQL = "SELECT * FROM produtos WHERE classe = ";
    comandoSQL += classe.getClasse();
}

list<Produto> ComandoConsultarProduto::getResultado(){
    ElementoResultado resultado;

    Produto produto;
    list<Produto> produtos;

    while(listaResultado.empty() != true){
        CodProduto codigo;
        Classe classe;
        Emissor emissor;
        Prazo prazo;
        Data data;
        Taxa taxa;
        Horario horario;
        ValorMinimo valor;

        resultado = listaResultado.back();
        listaResultado.pop_back();
        codigo.setProduto(resultado.getValorColuna());
        produto.setProduto(codigo);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        classe.setClasse(resultado.getValorColuna());
        produto.setClasse(classe);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        emissor.setEmissor(resultado.getValorColuna());
        produto.setEmissor(emissor);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        prazo.setPrazo(stoi(resultado.getValorColuna()));
        produto.setPrazo(prazo);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        data.setData(resultado.getValorColuna());
        produto.setData(data);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        taxa.setTaxa(stoi(resultado.getValorColuna()));
        produto.setTaxa(taxa);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        horario.setHorario(resultado.getValorColuna());
        produto.setHorario(horario);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        valor.setValorMinimo(stoi(resultado.getValorColuna()));
        produto.setValorMinimo(valor);

        produtos.push_back(produto);
    }

    return produtos;

}

//Classe ComandoInformacoesUsuario

ComandoInformacoesUsuario::ComandoInformacoesUsuario(Cpf cpf){
    comandoSQL = "SELECT * FROM usuarios WHERE cpf = ";
    comandoSQL += cpf.getCpf();
}

Usuario ComandoInformacoesUsuario::getResultado(){
    ElementoResultado resultado;
    Usuario usuario;

    Nome nome;
    Endereco endereco;
    Cep cep;
    Cpf cpf;
    Senha senha;

    if (listaResultado.empty())
            throw EErroPersistencia("Lista de resultados vazia.");
    resultado = listaResultado.back();
    listaResultado.pop_back();
    nome.setNome(resultado.getValorColuna());
    usuario.setNome(nome);

    if (listaResultado.empty())
            throw EErroPersistencia("Lista de resultados vazia.");
    resultado = listaResultado.back();
    listaResultado.pop_back();
    endereco.setEndereco(resultado.getValorColuna());
    usuario.setEndereco(endereco);

    if (listaResultado.empty())
            throw EErroPersistencia("Lista de resultados vazia.");
    resultado = listaResultado.back();
    listaResultado.pop_back();
    cep.setCep(stoi(resultado.getValorColuna()));
    usuario.setCep(cep);

    if (listaResultado.empty())
            throw EErroPersistencia("Lista de resultados vazia.");
    resultado = listaResultado.back();
    listaResultado.pop_back();
    cpf.setCpf(resultado.getValorColuna());
    usuario.setCpf(cpf);

    if (listaResultado.empty())
            throw EErroPersistencia("Lista de resultados vazia.");
    resultado = listaResultado.back();
    listaResultado.pop_back();
    senha.setSenha(resultado.getValorColuna());
    usuario.setSenha(senha);

    return usuario;

}


//Classe ComandoRemoverUsuario.

ComandoRemoverUsuario::ComandoRemoverUsuario(Cpf cpf) {
        comandoSQL = "DELETE FROM usuarios WHERE cpf = ";
        comandoSQL += cpf.getCpf();
}

//Classe ComandoCadastrarConta

ComandoCadastrarConta::ComandoCadastrarConta(Conta conta) {

        comandoSQL = "INSERT INTO contas VALUES (";
        comandoSQL += "'" + conta.getBanco().getValor() + "', ";
        comandoSQL += "'" + conta.getAgencia().getAgencia() + "', ";
        comandoSQL += "'" + conta.getNumero().getNumero() + "')";
}

//Classe ComandoConsultarConta.

ComandoConsultarConta::ComandoConsultarConta(Cpf cpf) {
        comandoSQL = "SELECT * FROM contas WHERE cpf = ";
        comandoSQL += cpf.getCpf();
}

Conta ComandoConsultarConta::getResultado(){
        ElementoResultado resultado;
        Conta conta;

        CodAgencia codagencia;
        CodBanco codbanco;
        Numero numero;

        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        codagencia.setAgencia(resultado.getValorColuna());
        conta.setAgencia(codagencia);

        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        codbanco.setValor(resultado.getValorColuna());
        conta.setBanco(codbanco);

        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        numero.setNumero(resultado.getValorColuna());
        conta.setNumero(numero);

        return conta;

}

//Classe ComandoRemoverProduto.

ComandoRemoverProduto::ComandoRemoverProduto(CodProduto produto) {
        comandoSQL = "DELETE FROM produtos WHERE codigos = ";
        comandoSQL += produto.getProduto();
}

//Classe ComandoRealizarAplicacao

ComandoRealizarAplicacao::ComandoRealizarAplicacao(Aplicacao aplicacao) {

        comandoSQL = "INSERT INTO aplicacao VALUES (";
        comandoSQL += "'" + aplicacao.getAplicacao().getAplicacao() + "', ";
        comandoSQL += "'" + aplicacao.getData().getData() + "', ";
        comandoSQL += "'" + to_string(aplicacao.getValor().getValor()) + "')";
}


//Classe ComandoListarAplicacoes

ComandoListarAplicacao::ComandoListarAplicacao(Cpf cpf) {
        comandoSQL = "SELECT * FROM aplicacao WHERE cpf = ";
        comandoSQL += cpf.getCpf();
}

list<Aplicacao> ComandoListarAplicacao::getResultado(){
    ElementoResultado resultado;

    Aplicacao aplicacao;
    list<Aplicacao> aplicacoes;

    while(listaResultado.empty() != true){
        CodAplicacao codigo;
        ValorAplicacao valor;
        Data data;

        resultado = listaResultado.back();
        listaResultado.pop_back();
        codigo.setAplicacao(resultado.getValorColuna());
        aplicacao.setAplicacao(codigo);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        valor.setValor(stoi(resultado.getValorColuna()));
        aplicacao.setValor(valor);

        resultado = listaResultado.back();
        listaResultado.pop_back();
        data.setData(resultado.getValorColuna());
        aplicacao.setData(data);


        aplicacoes.push_back(aplicacao);

    }
    return aplicacoes;
}
