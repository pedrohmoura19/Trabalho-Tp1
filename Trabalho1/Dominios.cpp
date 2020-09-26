#include "Dominios.h"
#include <string>
#include <ctype.h>

//Metodos da classe Cep
void Cep::validar(int cep){
    if((LIMITE_MIN_SP1 <= cep) && (cep <= LIMITE_MAX_SP1));
    else if ((LIMITE_MIN_SP2 <= cep) && (cep <= LIMITE_MAX_SP2));
    else if((LIMITE_MIN_RJ <= cep) && (cep <= LIMITE_MAX_RJ));
    else if((LIMITE_MIN_BSB <= cep) && (cep <= LIMITE_MAX_BSB));
    else if((LIMITE_MIN_SLV <= cep) && (cep <= LIMITE_MAX_SLV));
    else if((LIMITE_MIN_FORT <= cep) && (cep <= LIMITE_MAX_FORT));
    else
        throw invalid_argument("CEP invalido");

}

void Cep::setCep(int cep){
    validar(cep);
    this->cep = cep;
}

int Cep::getCep(){
    return cep;
}

//Metodos da classe Classe
void Classe::validar(string classe){
    if( (classe == "LCA") || (classe == "CDB") || (classe == "LC") || (classe == "LCI") || (classe == "LF") );
    else
        throw invalid_argument("Entrada invalida");
}

void Classe::setClasse(string classe){
    validar(classe);
    this->classe = classe;
}

string Classe::getClasse(){
    return classe;
}

//Metodos da classe CodAgencia
void CodAgencia::validar(string agencia){
    if ( (agencia.size()) != FORMATO )
        throw invalid_argument("Codigo invalido");
    try{
        stoi(agencia);
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Codigo invalido");
    }
    if(stoi(agencia) == 0)
        throw invalid_argument("Codigo invalido");
}

void CodAgencia::setAgencia(string agencia){
    validar(agencia);
    this->agencia = agencia;
}

string CodAgencia::getAgencia(){
    return agencia;
}

//Metodos da classe CodProduto
void CodProduto::validar(string produto){
    if ((produto.size()) != FORMATO)
        throw invalid_argument("Formato incorreto");
    try{
        stoi(produto);
    }
    catch(invalid_argument &exp){
        throw invalid_argument("Codigo invalido");
    }
    if(stoi(produto) == 0)
        throw invalid_argument("Codigo invalido");
}

void CodProduto::setProduto(string produto){
    validar(produto);
    this->produto = produto;

}

string CodProduto::getProduto(){
    return produto;
}

//Metodos da classe Data
void Data::validar(string data){
    bool bissexto = false;
    string dia,mes,ano;
    int iDia,iMes,iAno;

    dia[0] = data[0];
    dia[1] = data[1];
    iDia = stoi(dia);

    mes[0] = data[3];
    mes[1] = data[4];
    iMes = stoi(mes);

    ano[0] = data[6];
    ano[1] = data[7];
    ano[2] = data[8];
    ano[3] = data[9];
    iAno = stoi(ano);


    if((iAno % 4) == 0){
        if((iAno % 100) != 0){
            bissexto = true;
        }

    }else{
        if(iAno % 400 == 0){
            bissexto = true;
        }
    }


    if((data[2] != '/')||(data[5] != '/') ||(data.size() != FORMATO)){
        throw invalid_argument("Deve se inserir a entrada em formato DD/MM/AAAA");
    }

    if( 2020 > iAno || iAno > 2099 ){
        throw invalid_argument("O ano deve ser da faixa de 2020 a 2099");
    }

    if( 1 > iMes || iMes > 12 ){
        throw invalid_argument("Mes Invalido");
    }

    if((iMes == 1 || iMes == 3 || iMes == 5 || iMes == 7 || iMes == 8 || iMes == 10 || iMes == 12 ) && iDia > 31){
        throw invalid_argument("Dia Invalido");
    }

    if((iMes == 4 || iMes == 6 || iMes == 9 || iMes == 11 ) && iDia > 30){
        throw invalid_argument("Dia Invalido");
    }

    if( bissexto == false ){
        if((iMes == 2) && iDia > 28){
        throw invalid_argument("Dia Invalido");
        }
    }else{
        if((iMes == 2) && iDia > 29){
        throw invalid_argument("Dia Invalido");
        }
    }

}

void Data::setData(string data){
    validar(data);
    this->data = data;

}

string Data::getData(){
    return data;
}


void Nome::validar(string nome){
    int letras = 0;
    if ((nome.size()) < LIMITE_MIN || (nome.size()) > LIMITE_MAX )
        throw length_error("O nome deve conter entre 5 e 30 caracteres");

    for(int i=0;i < nome.size();i++){
        if(isalpha(nome[i]))
           letras++;

        if( isalpha(nome[i]) || nome[i] == ' ');
        else
            throw invalid_argument("O nome deve conter apenas letras");

        if( i != 0 && nome[i] == ' ' && nome[i-1] == ' ')
            throw invalid_argument("Nao eh permitido espacos em sequencia");

        if( i != (nome.size()-1) &&  nome[i]==' ' && islower(nome[i+1]) )
            throw invalid_argument("Apos um espaco deve conter letra maiuscula");
    }
    if (letras < 5)
        throw invalid_argument("O nome deve conter no minimo 5 letras");
}

void Nome::setNome(string nome){
    validar(nome);
    this->nome = nome;

}

string Nome::getNome(){
    return nome;
}

void Numero::validar(string numero){
    if(numero.size() > TAMANHO){
        throw invalid_argument("Argumento invalido");
    }

    if(numero[6] != '-'){
        throw invalid_argument("Formato invalido");
    }

    int i = 0;

    for(i=0;i<numero.size();i++){
        if(isdigit(numero[i]) == false && numero[i] != '-'){
            throw invalid_argument("Formato invalido");
        }
    }

    string digito1, digito2, digito3, digito4, digito5, digito6 , digito8;
    int iDigito1, iDigito2, iDigito3, iDigito4, iDigito5, iDigito6 , iDigito8;
    int digitoVerificador, somaNum;
    digito1 = numero[0];
    iDigito1 = (stoi(digito1)*1);

    digito2 = numero[1];
    iDigito2 = (stoi(digito2)*2);

    digito3 = numero[2];
    iDigito3 = (stoi(digito3)*3);

    digito4 = numero[3];
    iDigito4 = (stoi(digito4)*4);

    digito5 = numero[4];
    iDigito5 = (stoi(digito5)*5);

    digito6 = numero[5];
    iDigito6 = (stoi(digito6)*6);

    digito8 = numero[7];
    iDigito8 = stoi(digito8);

    somaNum = iDigito1+ iDigito2+ iDigito3 + iDigito4 + iDigito5 + iDigito6;
    digitoVerificador = (9-(somaNum%6));

    if(digitoVerificador != iDigito8){
        throw invalid_argument("Digito verificador errado");
    }
}

void Numero::setNumero(string numero){
    validar(numero);
    this->numero = numero;
}

string Numero::getNumero(){
    return numero;
}


void Prazo::validar(int prazo){
    if ((prazo == 6 ) || (prazo == 12) || (prazo == 18) || (prazo == 24) || (prazo == 30)|| (prazo == 36)
        || (prazo == 42) || (prazo == 48) || (prazo == 54) || (prazo == 60) || (prazo == 66) || (prazo == 72));
    else
        throw invalid_argument("Valor invalido");

}

void Prazo::setPrazo(int prazo){
    validar(prazo);
    this->prazo = prazo;

}

int Prazo::getPrazo(){
    return prazo;
}


void Taxa::validar(int taxa){
    if ((LIMITE_MIN > taxa) || (taxa > LIMITE_MAX))
        throw invalid_argument("Taxa invalida");
}

void Taxa::setTaxa(int taxa){
    validar(taxa);
    this->taxa = taxa;
}

int Taxa::getTaxa(){
    return taxa;
}


void ValorAplicacao::validar(int valor){
    if ((LIMITE_MIN > valor) || (valor > LIMITE_MAX))
        throw invalid_argument("Valor de aplicacao deve ser de 0 a 1000000 reais");
}

void ValorAplicacao::setValor(int valor){
    validar(valor);
    this->valor = valor;
}

int ValorAplicacao::getValor(){
    return valor;
}

void CodAplicacao::validar(string valor){
    if ((valor.size()) != TAMANHO ){
        throw length_error("Tamanho excedido");
    }
    if(valor == "00000"){
        throw invalid_argument("Entrada Invalida");
    }
    try{
        stoi(valor);
    }
    catch(invalid_argument &exp){

    }
}

void CodAplicacao::setAplicacao(string valor){
    validar(valor);
    this->valor = valor;
}

string CodAplicacao::getAplicacao(){
    return valor;
}


void CodBanco::validar(string valor){
    if ( tamanhoValor != TAMANHO ){
        throw invalid_argument("Tamanho invalido");
    }
    if((valor == "341") || (valor == "001") || (valor == "237") || (valor == "104") || (valor == "033"));
    else{
        throw invalid_argument("Entrada invalida");
    }
}

void CodBanco::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

string CodBanco::getValor(){
    return valor;
}


void Senha::validar(string senha){
    if( senha.size() != TAMANHO){
        throw invalid_argument("Tamanho excedido");
    }
    for (int i = 0; i < senha.size() ; i++){
        if(senha[i] >= 48 && senha[i] <= 57);
        else{
            throw invalid_argument("Senha invalida");
        }

    }
    for(int i = 0; i < senha.size(); i++){
        for(int j = i + 1; j < TAMANHO - 1; j++){
            if(senha[i] != senha[j]);
            else{
                throw invalid_argument("Senha invalida");
            }
            
        }
    }
}

void Senha::setSenha(string senha){
    validar(senha);
    this->senha = senha;
}

string Senha::getSenha(){
    return senha;
}

// Metodos da classe CPF

void Cpf::validar(string valor){
    if( valor.size() != TAMANHO){
        throw invalid_argument("Tamanho inválido");
    }
    for(int i = 0; i < valor.size(); i++){
        if(valor[i] >= 48 && valor[i] <= 57 && i != 3 && i != 7 && i != 11);
        else if( (i == 3 || i == 7) && valor[i] == 46);
        else if(i == 11 && valor[i] == '-');
        else{
            throw invalid_argument("Formato inválido");
        }
    }   
    int aux[11];
    for(int i = 0, j = 0; i < valor.size(); i++){
        if( i != 3 && i != 7 && i != 11){
            aux[j] = (valor[i] - 48);
            j++;
        }
    }


    int digito1, digito2, temp = 0;

    for(int i = 0; i < 9; i++){
        temp += ( aux[i] * (10 - i));
    }
    
    temp %= 11;
    if(temp < 2){
        digito1 = 0;
    }
    else{
        digito1 = 11 - temp;
    }
    
    temp =0;

    for(int i = 0; i < 10; i++){
        temp += (aux[i] * (11 - i));
    }
        
    temp %= 11;

    if(temp < 2){
        digito2 = 0;
    }
    else{
        digito2 = 11 - temp;
    }
    if(digito1 == aux[9] && digito2 == aux[10]);
    else{
        throw invalid_argument("CPF invalido");
    }
}

void Emissor::validar(string emissor){
    int letras = 0;
    if ((emissor.size()) < LIMITE_MIN || (emissor.size()) > LIMITE_MAX )
        throw length_error("O emissor deve conter entre 5 e 30 caracteres");

    for(int i=0;i < emissor.size();i++){
        if(isalpha(emissor[i]))
           letras++;

        if( isalpha(emissor[i]) || emissor[i] == ' ');
        else
            throw invalid_argument("O emissor deve conter apenas letras");

        if( i != 0 && emissor[i] == ' ' && emissor[i-1] == ' ')
            throw invalid_argument("Nao eh permitido espacos em sequencia");

        if( i != (emissor.size()-1) &&  emissor[i]==' ' && islower(emissor[i+1]) )
            throw invalid_argument("Apos um espaco deve conter letra maiuscula");
    }
    if (letras < 5)
        throw invalid_argument("O emissor deve conter no minimo 5 letras");
}

void Emissor::setEmissor(string emissor){
    validar(emissor);
    this->emissor = emissor;

}

string Emissor::getEmissor(){
    return emissor;
}

void Endereco::validar(string endereco){
    int letras = 0;
    if ((endereco.size()) < LIMITE_MIN || (endereco.size()) > LIMITE_MAX )
        throw length_error("O endereco deve conter entre 5 e 30 caracteres");

    for(int i=0;i < endereco.size();i++){
        if(isalpha(endereco[i]))
           letras++;

        if( isalpha(endereco[i]) || endereco[i] == ' ');
        else
            throw invalid_argument("O endereco deve conter apenas letras");

        if( i != 0 && endereco[i] == ' ' && endereco[i-1] == ' ')
            throw invalid_argument("Nao eh permitido espacos em sequencia");

        if( i != (endereco.size()-1) &&  endereco[i]==' ' && islower(endereco[i+1]) )
            throw invalid_argument("Apos um espaco deve conter letra maiuscula");
    }
    if (letras < 5)
        throw invalid_argument("O endereco deve conter no minimo 5 letras");
}

void Endereco::setEndereco(string endereco){
    validar(endereco);
    this->endereco = endereco;

}

string Endereco::getEndereco(){
    return endereco;
}

void Horario::validar(string horario){
    string horas, min;
    int horas_num, min_num;

    if((horario.size()) < LIMITE_MIN){
        throw invalid_argument("O horario deve ter 5 caracteres");
    }

    for(int i = 0; i < LIMITE_MIN; i++){
        if(horario[i] >= 48 && horario[i] <= 57 && i != 2);
        else if( (i == 2) && (horario[i] == ':'));
        else{
            throw invalid_argument("Formato inválido");
        }
    } 
    horas[0] = horario[0];
    horas[1] = horario[1];
    min[0] = horario[3];
    min[1] = horario[4];
    horas_num = stoi(horas);
    min_num = stoi(min);

    if(horas_num >= 13 && horas_num < 17 && min_num >= 0 && min_num <= 59);
    else if(horas_num == 17 && min_num == 0);
    else{
        throw invalid_argument("Horário inválido");
    }
}

void Horario::setHorario(string horario){
    validar(horario);
    this->horario = horario;

}

string Horario::getHorario(){
    return horario;
}

void ValorMinimo::validar(int valorMinimo){
    if(valorMinimo == 1000 || valorMinimo == 5000 || valorMinimo == 10000 || valorMinimo == 50000);
    else{
        throw invalid_argument("Valor minimo invalido");
    }
}

void ValorMinimo::setValorMinimo(int valorMinimo){
    validar(valorMinimo);
    this->valorMinimo = valorMinimo;
}

int ValorMinimo::getValorMinimo(){
    return valorMinimo;
}
