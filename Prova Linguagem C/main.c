#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    typedef struct Email {
    char remetente[50];
    char destinatario[50];
    char mensagem[50];
    struct Email*proximo;
    }Email
    //funcao para criar um novo email
    Email*criar Email(char*remetente, char*destinatario, char*mensagem){
    Email*novoEmail= (Email)malloc(sizeof(Email));
    strcpy(novoEmail->remetente, remetente);
    strcpy(novoEmail->destinatario, destinatario);
    strcpy(novoEmail->mensagem, mensagem};
    novoEmail->proximo = NULL
    return novoEmail
   }
   void adicionarEmail(Email**cabeca, char remetente, destinatario, mensagem);
   {
    Email*novoEmail = criarEmail(remetente,destinatario,mensagem);
    if(*cabeca == NULL){
        cabeca == novoEmail
    } else{
      Email temp = cabeca
      while (temp->proximo != NULL){

      }
      temp->proximo = novoEmail;
     }
    }
    void removerEmail(Email**cabeca){
    if(cabeca == NULL){
      printf(" A cadeia de emails esta vazia./n");
      return;
    }
    Email*temp = *cabeca;
    cabeca = (cabeca)->proximo;
    free(temp);
    }
   int main(){
   Email*cabeca = NULL

   adicionarEmail(&cabeca,
    "joao@exemple.com","maria@exemple.com", "Ola joao!");
     adicionarEmail(&cabeca,
    "lucas@exemple.com","felipe@exemple.com", "Oi lucas!");
     adicionarEmail(&cabeca,
    "amanda@exemple.com","rita@exemple.com", "Eae amanda!");
     adicionarEmail(&cabeca,
    "pedro@exemple.com","cleber@exemple.com", "Ola pedro!");
    printf("Cadeia de emails apos adicionar email/n");
    imprimirEmails(cabeca);
    removerEmails(cabeca);

    printf("cadeia de emails apos remover o email mais antigo");
    imprimirEmails(cabeca);

    while(cabeca !=NULL)
     removerEmail(&cabeca);
   }
   return 0
   }



   }





    return 0;
}
