#include <stdio.h>

int main(){
    struct arquivo
    {
        char nome[50];
        char data[11];
        char team1[50];
        char team2[50];
        int p1, p2;
    };
    
    struct arquivo aposta;   

    int op,jogos;
    int nome_arquivo[50]; 
    FILE *dados;
    while (op != -1)
    {
    printf("\n[1]  - Nova aposta\n[0]  - Excluir aposta\n[-1] - Sair\n");
    scanf("%d",&op);

    if (op == 1)
    {

        printf("Nome arquivo(.txt no final): ");
        scanf("%s",&nome_arquivo);
        dados = fopen(nome_arquivo,"w");
        if (dados == NULL)
        {
            printf("Arquivo nao pode ser aberto");
            return 0;
        }
        else
        {
            printf("Nome: ");
            getchar();
            gets(aposta.nome);
            fprintf(dados,"Nome: %s\n",aposta.nome);
            printf("Data: ");
            gets(aposta.data);
            fprintf(dados,"Data: %s\n",aposta.data);
            printf("Em quantos jogos deseja apostas? ");
            scanf("%d",&jogos);
            for (int i = 0; i < jogos; i++)
            {
                printf("Aposta %d\n",i+1);
                printf("Time 1: ");
                getchar();
                gets(aposta.team1);
                printf("Time 2: ");
                gets(aposta.team2);
                printf("Gols %s: ",aposta.team1);
                scanf("%d",&aposta.p1);
                printf("Gols %s: ",aposta.team2);
                scanf("%d",&aposta.p2);
                fprintf(dados,"Times: %s X %s\n",aposta.team1,aposta.team2);
                fprintf(dados,"Placar: %s:%d e %s:%d\n",aposta.team1,aposta.p1,aposta.team2,aposta.p2);                
            }
            fclose(dados);
        }        
    }
    else if (op == 0)
    {
        char remove_arquivo[50];
        printf("Digite o nome do arquivo(.txt no final): ");
        scanf("%s",&remove_arquivo);
        
        if (remove(remove_arquivo)!= -1)
        {
            remove(remove_arquivo);
            printf("Aposta removida com sucesso.\n\n");
        }
        else
            printf("Arquivo nao encontrado!.\n");
          
    }
    else{
        return 0;
    }
    } 
}