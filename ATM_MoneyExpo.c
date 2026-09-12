/* ****** ORIENTAÇOES SOBRE O PROGRAMA ****** 
     ESTE É UM CÓDIGO SIMPLES UTILIZANDO RECURSOS DE ESTRUTURAS DE DECISÃO IF, IF-ELSE E TAMBÉM 
                EXPLORANDO O  SWITCH E A ESTRUTURA DE REPETIÇAO DO-WHILE. 
                
                A ideia deste programa é montar uma estrutura de código similar a um caixa eletrônico de banco
                em que é oferecido ao usuário as opções de consulta de saldo (este zerado ao iniciar o programa), 
                depositar valor em conta própria e sacar um determinado valor. 
                Comentários também disponibilizados no decorrer do programa.
**** CÓDIGO ESCRITO TOTALMENTE EM INGLÊS **** 
*/

#include <stdio.h>
#include <string.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);


int main (){

    // CAMPO PARA DECLARAÇAO DE VARIÁVEIS DO PROGRAMA //

    int choice = 0; 
    float balance = 0.0f;
        
    // DISPLAY DA TELA INICIAL DO PROGRAMA 
    printf("\n\nWelcome to Money! Bank\n");

    do{
        printf("\nSelect an option:\n"
            "1. Check balance\n"
            "2. Deposit money\n"
            "3. Withdraw money\n"
            "4. Exit\n");
        printf("\nEnter your choice: ");
        scanf(" %d", &choice);
        
    // SWITCH PRINCIPAL - COM A VARIÁVEL OPÇÃO PARA OPERAÇÃO DO USUÁRIO 
    switch (choice){
        case 1: // EXIBIÇAO DOS DADOS PARA OPÇAO 1 - MOSTRAR SALDO
            checkBalance(balance);
        break;

        case 2: // EXIBIÇAO DOS DADOS PARA OPÇÃO 2 - DEPOSITAR VALOR EM CONTA DE TERCEIRO
            balance += deposit();        
        break;
        
        case 3: // EXIBIÇAO DOS DADOS PARA OPÇÃO 3 - SACAR VALOR
            balance -= withdraw(balance);
        break;

        case 4: 
            printf("\nThank you for using the Money Expo!\n\n");
            break;
    default:
        printf("\nInvalid choice. Please select 1 - 4.\n");
        break;
    }  

    } while(choice != 4);
     // ENCERRAMENTO DA ESCOLHA DE OPÇOES DO USUÁRIO 

    return 0; 
}

void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
}
float deposit(){

    float amount = 0.0f;
    printf("\nEnter amount to deposit: $");
    scanf(" %f", &amount);

    if(amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    }
    else {
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }

    return 0.0f;
}
float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);

    if(amount < 0){
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("Insufficient funds! Your balance is $%.2f\n", balance);
        return 0.0f;
    }
    else {
        printf("Succussfully withdrew $%.2f\n", amount);
        return amount;
    }
}
