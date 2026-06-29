/* ****** ORIENTAÇOES SOBRE O PROGRAMA ****** 
     ESTE É UM CÓDIGO SIMPLES UTILIZANDO RECURSOS DE ESTRUTURAS DE DECISÃO IF, IF-ELSE E TAMBÉM 
                EXPLORANDO O  SWITCH. 
                
                A ideia deste programa é montar uma estrutura de código similar a um caixa eletrônico de banco
                em que é oferecido ao usuário as opções de consulta de saldo (este já predeterminado), 
                depositar valor em conta de terceiro e sacar um determinado valor. 
                Comentários também disponibilizados no decorrer do programa.*/

#include <stdio.h>
#include <string.h>

int main (){

    // CAMPO PARA DECLARAÇAO DE VARIÁVEIS DO PROGRAMA //

    float saldo = 2800.00;
    int banco, opcao, confirmacao, numeroConta;
    float valorDepositado, valorSaque;
    
    // DISPLAY DA TELA INICIAL DO PROGRAMA 
    printf("\n\nBem vindo ao banco Money!\n\n");
    printf("Digite uma opção:\n"
            "1. Consultar saldo\n"
            "2. Depositar em conta de terceiro\n"
            "3. Sacar valor\n");
    scanf("%d", &opcao);

    // SWITCH PRINCIPAL - COM A VARIÁVEL OPÇÃO PARA OPERAÇÃO DO USUÁRIO 

    switch (opcao){
case 1: // EXIBIÇAO DOS DADOS PARA OPÇAO 1 - MOSTRAR SALDO
        if (saldo > 0){
            printf("Seu saldo é R$ %.2f.\n", saldo);
        } else if (saldo == 0){
            printf("Você não tem valores em sua conta.\n");
        } else if (saldo < 0){
            printf("Você está no negativo. Contate a central do banco pelo telefone 0800 100 1001.\n");
        }
        break;
case 2: // EXIBIÇAO DOS DADOS PARA OPÇÃO 2 - DEPOSITAR VALOR EM CONTA DE TERCEIRO
        printf("Digite o banco que deseja despositar\n"
            "1. InterM\n"
            "2. SuBank\n"
            "3. Ubaú\n"
            "4. Faixa\n");
        scanf("%d", &banco); // ARMAZENA O VALOR PARA VARIÁVEL BANCO 

        // ESTRUTURA DE UM NOVO SWITCH DA VARIÁVEL BANCO PARA OPERAR O DEPÓSITO DE ACORDO COM A OPÇÃO ESCOLHIDA
                switch (banco){
            case 1: // EXIBIÇAO DOS BLOCOS DE CÓDIGO IF E IF-ELSE PARA OPERAR DEPÓSITO PELO BANCO INTERM
                    printf("Digite o número da conta com 4 dígitos.\n");
                    scanf("%d", &numeroConta);
                    if (numeroConta >= 1000 && numeroConta < 10000) {
                    printf("Digite o valor que deseja depositar:\n");
                    scanf("%f", &valorDepositado);
                    if (valorDepositado > 0 && valorDepositado < saldo) {
                    printf("Você deseja confirmar o valor de R$ %.2f para depositar? Digite '1' para sim e '2' para não:\n", valorDepositado);
                    scanf("%d", &confirmacao);
                    if (confirmacao == 1){
                        //CRIAÇAO DA VARIÁVEL DE VALOR EM CONTA APÓS OPERAÇÃO
                        float valorEmConta = saldo - valorDepositado; 
                    printf("O valor de R$ %.2f foi depositado com sucesso para a conta %d do banco InterM.\nSeu saldo agora é de R$ %.2f.\n", valorDepositado, numeroConta, valorEmConta);
                } else if (confirmacao == 2){
                    printf("Operação Encerrada.\n");
                }
                } else {
                    printf("Valor insuficiente.\nTente novamente.\n");
                }
                } else {
                printf("Número da conta inválido.\nTente novamente.\n");
                }
                break;
            case 2: // EXIBIÇAO DOS BLOCOS DE CÓDIGO IF E IF-ELSE PARA OPERAR DEPÓSITO PELO BANCO SUBANK
                    printf("Digite o número da conta com 4 dígitos.\n");
                    scanf("%d", &numeroConta);
                    if (numeroConta >= 1000 && numeroConta < 10000) {
                    printf("Digite o valor que deseja depositar:\n");
                    scanf("%f", &valorDepositado);
                    if (valorDepositado > 0 && valorDepositado < saldo) {
                    printf("Você deseja confirmar o valor de R$ %.2f para depositar? Digite '1' para sim e '2' para não:\n", valorDepositado);
                    scanf("%d", &confirmacao);
                    if (confirmacao == 1){
                        //CRIAÇAO DA VARIÁVEL DE VALOR EM CONTA APÓS OPERAÇÃO
                        float valorEmConta = saldo - valorDepositado;
                    printf("O valor de R$ %.2f foi depositado com sucesso para a conta %d do banco SuBank.\nSeu saldo agora é de R$ %.2f.\n", valorDepositado, numeroConta, valorEmConta);
                } else if (confirmacao == 2){
                    printf("Operação Encerrada.\n");
                }
                } else {
                    printf("Valor insuficiente.\nTente novamente.\n");
                }
                } else {
                printf("Número da conta inválido.\nTente novamente.\n");
                }
                break;
            case 3: // EXIBIÇAO DOS BLOCOS DE CÓDIGO IF E IF-ELSE PARA OPERAR DEPÓSITO PELO BANCO UBAÚ
                    printf("Digite o número da conta com 4 dígitos.\n");
                    scanf("%d", &numeroConta);
                    if (numeroConta >= 1000 && numeroConta < 10000) {
                    printf("Digite o valor que deseja depositar:\n");
                    scanf("%f", &valorDepositado);
                    if (valorDepositado > 0 && valorDepositado < saldo) {
                    printf("Você deseja confirmar o valor de R$ %.2f para depositar? Digite '1' para sim e '2' para não:\n", valorDepositado);
                    scanf("%d", &confirmacao);
                    if (confirmacao == 1){
                        //CRIAÇAO DA VARIÁVEL DE VALOR EM CONTA APÓS OPERAÇÃO
                        float valorEmConta = saldo - valorDepositado;
                    printf("O valor de R$ %.2f foi depositado com sucesso para a conta %d do banco Ubaú.\nSeu saldo agora é de R$ %.2f.\n", valorDepositado, numeroConta, valorEmConta);
                } else if (confirmacao == 2){
                    printf("Operação Encerrada.\n");
                }
                } else {
                    printf("Valor insuficiente.\nTente novamente.\n");
                }
                } else {
                printf("Número da conta inválido.\nTente novamente.\n");
                }
                break;

            case 4: // EXIBIÇAO DOS BLOCOS DE CÓDIGO IF E IF-ELSE PARA OPERAR DEPÓSITO PELO BANCO FAIXA
            printf("Digite o número da conta com 4 dígitos.\n");
            scanf("%d", &numeroConta);
            if (numeroConta >= 1000 && numeroConta < 10000) {
                    printf("Digite o valor que deseja depositar:\n");
                    scanf("%f", &valorDepositado);
                    if (valorDepositado > 0 && valorDepositado < saldo) {
                    printf("Você deseja confirmar o valor de R$ %.2f para depositar? Digite '1' para sim e '2' para não:\n", valorDepositado);
                    scanf("%d", &confirmacao);
                    if (confirmacao == 1){
                        //CRIAÇAO DA VARIÁVEL DE VALOR EM CONTA APÓS OPERAÇÃO
                        float valorEmConta = saldo - valorDepositado;
                    printf("O valor de R$ %.2f foi depositado com sucesso para a conta %d do banco Faixa.\nSeu saldo agora é de R$ %.2f.\n", valorDepositado, numeroConta, valorEmConta);
                    } else if (confirmacao == 2){
                    printf("Operação Encerrada.\n");
                }
                } else {
                    printf("Valor insuficiente.\nTente novamente.\n");
                }
                } else {
                printf("Número da conta inválido.\nTente novamente.\n");
                }
                break;

            default:
            printf("Digite uma opção de banco válido.\n");
            break;
            }
            break;
    
    // CONTINUAÇAO DO SWITCH PRINCIPAL DA ESCOLHA DE OPERAÇÃO
case 3: // EXIBIÇAO DOS DADOS PARA OPÇÃO 3 - SACAR VALOR
        printf("Digite o valor que você deseja sacar:\n");
        scanf("%f", &valorSaque);
        if (valorSaque > 0 && valorSaque < saldo){
            printf("Você deseja confirmar o valor de R$ %.2f? (Digite '1' para sim e '2' para não:\n", valorSaque);
            scanf("%d", &confirmacao);
                if (confirmacao == 1){
                    // CRIAÇAO DA VARIÁVEL VALOR REMANESCENTE PARA ARMAZENAR SALDO RESTANTE APÓS OPERAÇÃO
                    float valorRemanescente = saldo - valorSaque;
                    printf("Saque de R$ %.2f realizado com sucesso. Seu saldo agora é R$ %.2f.\n", valorSaque, valorRemanescente);
                } else if (confirmacao == 2){
                    printf("Operação Encerrada.\n");
                }
        } else {
            printf("Valor de saque inválido.\nTente novamente.\n");
        }
        break;
    default:
        printf("Digite uma opção válida.\n");
        break;
    }    // ENCERRAMENTO DA ESCOLHA DE OPÇOES DO USUÁRIO 

    return 0; 
}
