#include <string.h>
#include <stdexcept>
#include <iostream>

#include "curses.h"
#include "dominios.h"
#include "interfaces.h"
#include "controladorasApresentacao.h"
#include "controladorasServico.h"

using namespace std;

int main()
{
    // Instancia as controladoras de apresenta��o.

    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoPessoal *cntrApresentacaoPessoal;
    IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoProdutosFinanceiros = new CntrApresentacaoProdutosFinanceiros();

    // Instancia as controladoras de servi�o.

    IServicoAutenticacao *cntrServicoAutenticacao;
    IServicoPessoal *cntrServicoPessoal;
    IServicoProdutosFinanceiros *cntrServicoProdutosFinanceiros;

    cntrServicoAutenticacao = new CntrServicoAutenticacao();
    cntrServicoPessoal = new CntrServicoPessoal();
    cntrServicoProdutosFinanceiros = new CntrServicoProdutosFinanceiros();

    // Interliga as controladoras aos stubs.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoProdutosFinanceiros(cntrApresentacaoProdutosFinanceiros);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(cntrServicoAutenticacao);

    cntrApresentacaoPessoal->setCntrServicoPessoal(cntrServicoPessoal);
    cntrApresentacaoPessoal->setCntrServicoProdutosFinanceiros(cntrServicoProdutosFinanceiros);

    cntrApresentacaoProdutosFinanceiros->setCntrServicoProdutosFinanceiros(cntrServicoProdutosFinanceiros);

    initscr();                                                                      // Inicia curses.
    cntrApresentacaoControle->executar();                                           // Solicita servi�o apresentacao.
    endwin();                                                                       // Finaliza curses.

    return 0;
}
