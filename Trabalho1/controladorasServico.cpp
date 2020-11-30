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

//Classe ComandoLerSenha.

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

//Classe ComandoConsultarConta
///////////////IMPLEMENTAR//////////

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


