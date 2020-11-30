#include "controladorasApresentacao.h"

// Implementações dos métodos da classe controladora apresentação controle.

void CntrApresentacaoControle::executar(){

    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Acessar sistema.";
    char texto3[]="2 - Cadastrar usuario.";
    char texto4[]="3 - Acessar dados sobre produtos financeiros.";
    char texto5[]="4 - Encerrar execucao do sistema.";

    // Mensagens a serem apresentadas na tela de seleção de serviço.

    char texto6[]="Selecione um dos servicos : ";
    char texto7[]="1 - Selecionar servicos de pessoal.";
    char texto8[]="2 - Selecionar servicos relacionados a produtos financeiros.";
    char texto9[]="3 - Encerrar sessao.";

    char texto10[]="Falha na autenticacao. Digite algo para continuar.";                          // Mensagem a ser apresentada.
    int campo;                                                                                  // Campo de entrada.
    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    echo();                                                                                     // Habilita eco.

    bool apresentar = true;                                                                     // Controle de laço.

    while(apresentar){

        // Apresenta tela inicial.

        clear();                                                                                    // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                 // Imprime nome do campo.                                                              // Apresentar tela inicial.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.
        echo();

        switch(campo){
            case 1: if(cntrApresentacaoAutenticacao->autenticar(&cpf)){                         // Solicita autenticação.
                        bool apresentar = true;                                                 // Controle de laço.
                        while(apresentar){

                            // Apresenta tela de seleção de serviço.

                            clear();                                                           // Limpa janela.
                            mvprintw(linha/4,coluna/4,"%s",texto6);                            // Imprime nome do campo.
                            mvprintw(linha/4 + 2,coluna/4,"%s",texto7);                        // Imprime nome do campo.
                            mvprintw(linha/4 + 4,coluna/4,"%s",texto8);                        // Imprime nome do campo.
                            mvprintw(linha/4 + 6,coluna/4,"%s",texto9);                        // Imprime nome do campo.                                    // Apresenta tela de seleção de serviço.
                            noecho();
                            campo = getch() - 48;                                               // Leitura do campo de entrada e conversão de ASCII.
                            echo();

                            switch(campo){
                                case 1: cntrApresentacaoPessoal->executar(cpf);                 // Solicita serviço de pessoal.
                                        break;
                                case 2: cntrApresentacaoProdutosFinanceiros->executar(cpf);     // Solicita serviço de produto financeiro.
                                        break;
                                case 3: apresentar = false;
                                        break;
                            }
                        }
                    }
                    else {
                        clear();                                                                // Limpa janela.
                        mvprintw(linha/4,coluna/4,"%s",texto10);                                  // Imprime mensagem.
                        noecho();                                                               // Desabilita eco.
                        getch();                                                                // Leitura de caracter digitado.
                        echo();                                                                 // Habilita eco.
                    }
                    break;
            case 2: cntrApresentacaoPessoal->cadastrar();
                    break;
            case 3: cntrApresentacaoProdutosFinanceiros->executar();
                    break;
            case 4: apresentar = false;
                    break;
        }
    }
    return;
}

//--------------------------------------------------------------------------------------------
// Implementações dos métodos da classe controladora apresentação autenticação.

bool CntrApresentacaoAutenticacao::autenticar(Cpf *cpf){

    // Mensagens a serem apresentadas na tela de autenticação.

    char texto1[]="Digite o CPF  : ";
    char texto2[]="Digite a senha: ";
    char texto3[]="Dado em formato incorreto. Digite algo.";

    // Campos de entrada.

    char campo1[80];
    char campo2[80];

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    Senha senha;                                                                                // Instancia a classe Senha.

    echo();                                                                                     // Habilita eco.

    while(true){

        // Apresenta tela de autenticação.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        getstr(campo1);                                                                         // Lê valor do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        getstr(campo2);                                                                         // Lê valor do campo.

        try{
            cpf->setCpf(string(campo1));                                                      // Atribui valor ao CPF.
            senha.setSenha(string(campo2));                                                     // Atribui Valor à senha.
            break;                                                                              // Abandona laço em caso de formatos corretos.
        }
        catch(invalid_argument &exp){                                                           // Captura exceção devido a formato incorreto.
            clear();                                                                            // Limpa janela.
            mvprintw(linha/4,coluna/4,"%s",texto3);                                             // Informa formato incorreto.
            noecho();
            getch();                                                                            // Lê caracter digitado.
            echo();
        }
    }
    return (cntr->ComandoAutenticar(*cpf, senha));                                                     // Solicita serviço de autenticação.
}

//--------------------------------------------------------------------------------------------
// Implementações dos métodos da classe controladora apresentação pessoal.

void CntrApresentacaoPessoal::executar(Cpf cpf){

    // Mensagens a serem apresentadas na tela de seleção de serviço..

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar dados pessoais.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    bool apresentar = true;                                                                     // Controle de laço.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela de selação de serviço.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.
        echo();

        switch(campo){
            case 1: consultarDadosPessoais(cpf);
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::cadastrar(){

    // Mensagens a serem apresentadas na tela de cadastramento.

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Nome            :";
    char texto3[] ="Endereco        :";
    char texto4[] ="CEP             :";
    char texto5[] ="CPF             :";
    char texto6[] ="Senha           :";
    char texto7[] ="Numero de conta :";
    char texto8[] ="Agencia         :";
    char texto9[] ="Banco           :";
    char texto10[]="Dados em formato incorreto. Digite algo.";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];                                                    // Cria campos para entrada dos dados.

    // Instancia os domínios.

    Nome nome;
    Endereco endereco;
    Cep cep;
    Cpf cpf;
    Senha senha;
    Numero numero;
    CodAgencia agencia;
    CodBanco banco;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    // Apresenta tela de cadastramento.

    clear();                                                                                    // Limpa janela.

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    getstr(campo2);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
    getstr(campo3);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                 // Imprime nome do campo.
    getstr(campo4);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                                // Imprime nome do campo.
    getstr(campo5);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                                // Imprime nome do campo.
    getstr(campo6);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 14,coluna/4,"%s",texto8);                                                // Imprime nome do campo.
    getstr(campo7);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 16,coluna/4,"%s",texto9);                                                // Imprime nome do campo.
    getstr(campo8);                                                                             // Lê valor do campo.

    try{
        nome.setNome(string(campo1));
        endereco.setEndereco(string(campo2));
        cep.setCep(stoi(campo3));
        cpf.setCpf(string(campo4));
        senha.setSenha(string(campo5));
        numero.setNumero(string(campo6));
        agencia.setAgencia(string(campo7));
        banco.setValor(string(campo8));
    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto10);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }

    // Instancia e inicializa entidades.

    Usuario usuario;

    usuario.setNome(nome);
    usuario.setEndereco(endereco);
    usuario.setCep(cep);
    usuario.setCpf(cpf);
    usuario.setSenha(senha);

    Conta conta;

    conta.setNumero(numero);
    conta.setAgencia(agencia);
    conta.setBanco(banco);

    // Cadastra usuário e conta.

    if(cntrServicoPessoal->ComandoCadastrarUsuario(usuario))
        if(cntrServicoProdutosFinanceiros->ComandoCadastrarConta(conta)){
            mvprintw(linha/4 + 18,coluna/4,"%s",texto11);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;
        }

    mvprintw(linha/4 + 18,coluna/4,"%s",texto12);                                                       // Informa falha.
    noecho();
    getch();
    echo();

    return;
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoPessoal::consultarDadosPessoais(Cpf cpf){

    // Mensagens a serem apresentadas na tela de apresentação de dados pessoais.

    char texto1[] ="Informações do usuário";
    char texto2[] ="Nome            :";
    char texto3[] ="Endereco        :";
    char texto4[] ="CEP             :";
    char texto5[] ="CPF             :";
    char texto6[]="Digite algo para retornar.";

    string campo1, campo2, campo3, campo4;                            // Cria campos para entrada dos dados.

    Usuario usuario;

    usuario = cntrServicoPessoal->ComandoInformacoesUsuario(cpf);

    campo1 = usuario.getNome().getNome();
    campo2 = usuario.getEndereco().getEndereco();
    campo3 = usuario.getCep().getCep();
    campo4 = usuario.getCpf().getCpf();

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    clear();

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",campo1);
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",campo2);
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",campo3);
    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                 // Imprime nome do campo.
    mvprintw(linha/4 + 8,coluna/4,"%s",campo4);
    mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                                // Imprime nome do campo.

    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(){

    // Mensagens a serem apresentadas na tela simplificada de produtos financeiros.

    char texto1[]="Selecione um dos servicos : ";
    char texto2[]="1 - Consultar produto de investimento.";
    char texto3[]="2 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    echo();                                                                                     // Habilita eco.

    bool apresentar = true;                                                                     // Controle de laço.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela simplificada de produtos financeiros.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.
        echo();

        switch(campo){
            case 1: consultarProdutoInvestimento();
                    break;
            case 2: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::executar(Cpf cpf){

    // Mensagens a serem apresentadas tela completa de produtos financeiros.

    char texto1[] ="Selecione um dos servicos : ";
    char texto2[] ="1 - Consultar conta corrente.";
    char texto3[] ="2 - Cadastrar produto de investimento.";
    char texto4[] ="3 - Descadastrar produto de investimento.";
    char texto5[] ="4 - Consultar produto de investimento.";
    char texto6[] ="5 - Realizar aplicacao em produto de investimento.";
    char texto7[] ="6 - Listar aplicacoes em produto de investimento.";
    char texto8[] ="7 - Retornar.";

    int campo;                                                                                  // Campo de entrada.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    echo();                                                                                     // Habilita eco.

    bool apresentar = true;                                                                     // Controle de laço.

    echo();                                                                                     // Habilita eco.

    while(apresentar){

        // Apresenta tela completa de produtos financeiros.

        clear();                                                                                // Limpa janela.
        mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
        mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                             // Imprime nome do campo.
        mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                            // Imprime nome do campo.
        mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                            // Imprime nome do campo.
        mvprintw(linha/4 + 14,coluna/4,"%s",texto8);                                            // Imprime nome do campo.
        noecho();
        campo = getch() - 48;                                                                   // Leitura do campo de entrada e conversão de ASCII.
        echo();

        switch(campo){
            case 1: consultarConta(cpf);
                    break;
            case 2: cadastrarProdutoInvestimento();
                    break;
            case 3: descadastrarProdutoInvestimento();
                    break;
            case 4: consultarProdutoInvestimento();
                    break;
            case 5: realizarAplicacao();
                    break;
            case 6: listarAplicacoes();
                    break;
            case 7: apresentar = false;
                    break;
        }
    }
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarConta(Cpf cpf){

    char texto1[] ="Dados sobre a conta corrente:";
    char texto2[] ="Numero de conta :";
    char texto3[] ="Agencia         :";
    char texto4[] ="Banco           :";
    char texto5[] ="Digite algo para retornar.";

    string campo1, campo2, campo3;

    Conta conta;

    conta = cntr->ComandoConsultarConta(cpf);

    campo1 = conta.getNumero().getNumero();
    campo2 = conta.getAgencia().getAgencia();
    campo3 = conta.getBanco().getValor();

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    clear();

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                 // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",campo1);
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",campo2);
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",campo3);                                                                                    // Limpa janela.
    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);

    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::cadastrarProdutoInvestimento(){

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Código do Produto     :";
    char texto3[] ="Classe do Investimento:";
    char texto4[] ="Emissor               :";
    char texto5[] ="Prazo                 :";
    char texto6[] ="Data de Vencimento    :";
    char texto7[] ="Taxa de Rendimento    :";
    char texto8[] ="Horário de Aplicação  :";
    char texto9[] ="Valor Mínimo de Aplicação:";
    char texto10[]="Dados em formato incorreto. Digite algo.";
    char texto11[]="Sucesso no cadastramento. Digite algo.";
    char texto12[]="Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];                            // Cria campos para entrada dos dados.
    char campo6[80], campo7[80], campo8[80];                                                    // Cria campos para entrada dos dados.

    CodProduto codigoproduto;
    Classe classe;
    Emissor emissor;
    Prazo prazo;
    Data data;
    Taxa taxa;
    Horario horario;
    ValorMinimo valorminimo;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.

    getmaxyx(stdscr,linha,coluna);

    clear();                                                                                    // Limpa janela.

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    getstr(campo2);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
    getstr(campo3);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 8,coluna/4,"%s",texto5);                                                 // Imprime nome do campo.
    getstr(campo4);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 10,coluna/4,"%s",texto6);                                                // Imprime nome do campo.
    getstr(campo5);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 12,coluna/4,"%s",texto7);                                                // Imprime nome do campo.
    getstr(campo6);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 14,coluna/4,"%s",texto8);                                                // Imprime nome do campo.
    getstr(campo7);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 16,coluna/4,"%s",texto9);                                                // Imprime nome do campo.
    getstr(campo8);                                                                             // Lê valor do campo.

    try{
        codigoproduto.setProduto(string(campo1));
        classe.setClasse(string(campo2));
        emissor.setEmissor(string(campo3));
        prazo.setPrazo(stoi(campo4));
        data.setData(string(campo5));
        taxa.setTaxa(stoi(campo6));
        horario.setHorario(string(campo7));
        valorminimo.setValorMinimo(stoi(campo8));
    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto10);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }

    // Instancia e inicializa entidades.

    Produto produto;

    produto.setProduto(codigoproduto);
    produto.setClasse(classe);
    produto.setEmissor(emissor);
    produto.setPrazo(prazo);
    produto.setData(data);
    produto.setTaxa(taxa);
    produto.setHorario(horario);
    produto.setValorMinimo(valorminimo);

     // Cadastra usuário e conta.

    if(cntr->ComandoCadastrarProduto(produto)){
            mvprintw(linha/4 + 18,coluna/4,"%s",texto11);                                               // Informa sucesso.
            noecho();
            getch();
            echo();
            return;
    }

    mvprintw(linha/4,coluna/4,"%s",texto12);                                                      // Informa falha.
    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::descadastrarProdutoInvestimento(){

    char texto1[]="Digite o código do produto que deve ser descadastrado: ";
    char texto2[]="Código do Produto     :";
    char texto3[]="Dados em formato incorreto. Digite algo.";
    char texto4[]="Sucesso no descadastramento. Digite algo.";
    char texto5[]="Falha no cadastramento. Digite algo.";

    char campo1[80];

    CodProduto codigo;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    clear();                                                                                    // Limpa janela.

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);

    try{
        codigo.setProduto(string(campo1));
    }
    catch(invalid_argument &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto3);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }

    if(cntr->ComandoRemoverProduto(codigo)){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto4);                                               // Informa sucesso.
        noecho();
        getch();
        echo();
        return;
    }

    mvprintw(linha/4,coluna/4,"%s",texto5);                                                      // Informa falha.
    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::consultarProdutoInvestimento(){


    char texto1[] ="Digite a Classe dos produtos: ";
    char texto2[] ="Classe dos Produtos   :";

    char campo1[80];


    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    clear();                                                                                    // Limpa janela.

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);                                                                             // Lê valor do campo.

    Produto produto;
    Classe classe;

    classe.setClasse(campo1);

    produto = cntr->ComandoConsultarProduto(classe);


    char texto3[] ="Dados sobre o produto :";
    char texto4[] ="Código do Produto     :";
    char texto5[] ="Classe do Investimento:";
    char texto6[] ="Emissor               :";
    char texto7[] ="Prazo                 :";
    char texto8[] ="Data de Vencimento    :";
    char texto9[] ="Taxa de Rendimento    :";
    char texto10[] ="Horário de Aplicação  :";
    char texto11[] ="Valor Mínimo de Aplicação:";
    char texto12[] ="Digite algo para retornar.";

    string campo2, campo3, campo4, campo5;                            // Cria campos para entrada dos dados.
    string campo6, campo7, campo8, campo9;                                        // Cria campos para entrada dos dados.

    campo2 = produto.getProduto().getProduto();
    campo3 = produto.getClasse().getClasse();
    campo4 = produto.getEmissor().getEmissor();
    campo5 = produto.getPrazo().getPrazo();
    campo6 = produto.getData().getData();
    campo7 = produto.getTaxa().getTaxa();
    campo8 = produto.getHorario().getHorario();
    campo9 = produto.getValorMinimo().getValorMinimo();

    clear();

    mvprintw(linha/4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto4);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",campo2);
    mvprintw(linha/4 + 4,coluna/4,"%s",texto5);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",campo3);
    mvprintw(linha/4 + 6,coluna/4,"%s",texto6);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",campo4);                                                                                    // Limpa janela.
    mvprintw(linha/4 + 8,coluna/4,"%s",texto7);
    mvprintw(linha/4 + 8,coluna/4,"%s",campo5);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 10,coluna/4,"%s",texto8);
    mvprintw(linha/4 + 10,coluna/4,"%s",campo6);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 12,coluna/4,"%s",texto9);
    mvprintw(linha/4 + 12,coluna/4,"%s",campo7);                                             // Imprime nome do campo.
    mvprintw(linha/4 + 14,coluna/4,"%s",texto10);                                                                                    // Limpa janela.
    mvprintw(linha/4 + 14,coluna/4,"%s",campo8);
    mvprintw(linha/4 + 14,coluna/4,"%s",texto11);
    mvprintw(linha/4 + 14,coluna/4,"%s",campo9);
    mvprintw(linha/4 + 14,coluna/4,"%s",texto12);

    noecho();
    getch();
    echo();
}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::realizarAplicacao(){

    char texto1[] ="Preencha os seguintes campos: ";
    char texto2[] ="Código da Aplicação   :";
    char texto3[] ="Valor da Aplicação    :";
    char texto4[] ="Data                  :";
    char texto5[]="Dados em formato incorreto. Digite algo.";
    char texto6[]="Sucesso na realização da aplicação. Digite algo.";
    char texto7[]="Falha na realização da aplicação. Digite algo.";

    char campo1[80], campo2[80], campo3[80];

    CodAplicacao codigo;
    ValorAplicacao valor;
    Data data;

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.
    clear();

    mvprintw(linha/4,coluna/4,"%s",texto1);                                                     // Imprime nome do campo.
    mvprintw(linha/4 + 2,coluna/4,"%s",texto2);                                                 // Imprime nome do campo.
    getstr(campo1);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 4,coluna/4,"%s",texto3);                                                 // Imprime nome do campo.
    getstr(campo2);                                                                             // Lê valor do campo.
    mvprintw(linha/4 + 6,coluna/4,"%s",texto4);                                                 // Imprime nome do campo.
    getstr(campo3);                                                                             // Lê valor do campo.                                                       // Imprime nome do campo.

    try{
        codigo.setAplicacao(string(campo1));
        valor.setValor(stoi(campo2));
        data.setData(string(campo3));
    }
     catch(invalid_argument &exp){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto5);                                           // Informa formato incorreto.
        noecho();                                                                               // Desabilita eco.
        getch();                                                                                // Leitura de caracter digitado.
        echo();                                                                                 // Habilita eco.
        return;
    }

    Aplicacao aplicacao;

    aplicacao.setAplicacao(codigo);
    aplicacao.setValor(valor);
    aplicacao.setData(data);

    if(cntr->ComandoRealizarAplicacao(aplicacao)){
        mvprintw(linha/4 + 18,coluna/4,"%s",texto6);                                               // Informa sucesso.
        noecho();
        getch();
        echo();
        return;
    }

    mvprintw(linha/4,coluna/4,"%s",texto7);                                                      // Informa falha.
    noecho();
    getch();
    echo();

}

//--------------------------------------------------------------------------------------------

void CntrApresentacaoProdutosFinanceiros::listarAplicacoes(){

    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------
    // Substituir código seguinte pela implementação do método.
    //--------------------------------------------------------------------------------------------
    //--------------------------------------------------------------------------------------------


    // Mensagens a serem apresentadas.

    int linha,coluna;                                                                           // Dados sobre tamanho da tela.
    getmaxyx(stdscr,linha,coluna);                                                              // Armazena quantidade de linhas e colunas.

    char texto[]="Servico listar aplicacoes nao implementado. Digite algo.";                    // Mensagem a ser apresentada.
    clear();                                                                                    // Limpa janela.
    mvprintw(linha/4,coluna/4,"%s",texto);                                                      // Imprime nome do campo.
    noecho();
    getch();
    echo();
}
