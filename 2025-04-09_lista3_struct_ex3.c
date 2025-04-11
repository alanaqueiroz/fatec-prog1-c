// 3. Fazer um programa para simular uma agenda de telefones. Para cada pessoa deverá constar os seguintes dados: 
// • Código 
// • Nome 
// • E-mail 
// • Endereço (contendo campos para Rua, numero, complemento, bairro, cep, cidade, estado, país). 
// • Telefone (contendo campo para DDD e numero) 
// • Data de aniversario (contendo campo para dia, mês, ano). 
// • Observações: Uma linha (string) para alguma observação especial. 
// a) Definir a estrutura acima. 
// b) Declarar a variável agenda (vetor) com capacidade de agendar até 50 cadastros (usar for para preencher as 50 posições).
// c) Possibilitar a visualização dos dados (usar for para visualizar tudo de uma única vez).


#include <stdio.h>
#include <string.h>

struct Endereco {
    char rua[100];
    int numero;
    char complemento[50];
    char bairro[50];
    char cep[10];
    char cidade[50];
    char estado[3];
    char pais[50];
};

struct Telefone {
    int ddd;
    char numero[15];
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Contato {
    int codigo;
    char nome[100];
    char email[100];
    struct Endereco endereco;
    struct Telefone telefone;
    struct Data aniversario;
    char observacoes[200];
};

int main() {
    struct Contato agenda[50];

    for(int i = 0; i < 50; i++) {
        printf("\nContato %d:\n", i+1);
        agenda[i].codigo = i+1;
        
        printf("Nome: ");
        scanf(" %[^\n]", agenda[i].nome);
        printf("Email: ");
        scanf(" %[^\n]", agenda[i].email);
        
        printf("Endereço:\n");
        printf("Rua: ");
        scanf(" %[^\n]", agenda[i].endereco.rua);
        printf("Número: ");
        scanf("%d", &agenda[i].endereco.numero);
        printf("Complemento: ");
        scanf(" %[^\n]", agenda[i].endereco.complemento);
        printf("Bairro: ");
        scanf(" %[^\n]", agenda[i].endereco.bairro);
        printf("CEP: ");
        scanf(" %[^\n]", agenda[i].endereco.cep);
        printf("Cidade: ");
        scanf(" %[^\n]", agenda[i].endereco.cidade);
        printf("Estado (sigla): ");
        scanf(" %[^\n]", agenda[i].endereco.estado);
        printf("País: ");
        scanf(" %[^\n]", agenda[i].endereco.pais);
        
        printf("Telefone:\n");
        printf("DDD: ");
        scanf("%d", &agenda[i].telefone.ddd);
        printf("Número: ");
        scanf(" %[^\n]", agenda[i].telefone.numero);
        
        printf("Data de aniversário (dia mês ano): ");
        scanf("%d %d %d", &agenda[i].aniversario.dia, 
              &agenda[i].aniversario.mes, &agenda[i].aniversario.ano);
        
        printf("Observações: ");
        scanf(" %[^\n]", agenda[i].observacoes);
    }
    
    // c) Visualização dos dados
    printf("\nAGENDA DE CONTATOS:\n");
    for(int i = 0; i < 50; i++) {
        printf("\nContato %d:\n", agenda[i].codigo);
        printf("Nome: %s\n", agenda[i].nome);
        printf("Email: %s\n", agenda[i].email);
        printf("Endereço: %s, %d, %s, %s, %s, %s-%s, %s\n", 
               agenda[i].endereco.rua, agenda[i].endereco.numero,
               agenda[i].endereco.complemento, agenda[i].endereco.bairro,
               agenda[i].endereco.cep, agenda[i].endereco.cidade,
               agenda[i].endereco.estado, agenda[i].endereco.pais);
        printf("Telefone: (%d) %s\n", agenda[i].telefone.ddd, agenda[i].telefone.numero);
        printf("Aniversário: %d/%d/%d\n", agenda[i].aniversario.dia,
               agenda[i].aniversario.mes, agenda[i].aniversario.ano);
        printf("Observações: %s\n", agenda[i].observacoes);
    }
    
    return 0;
}