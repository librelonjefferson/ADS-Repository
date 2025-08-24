/*
Resumo da Aula - Cadastro de Alunos em C

🟢 Entrada de Dados em C
— Utilizando a função fgets() para ler strings (nome, curso), garantindo leitura de espaços.
—Utilizanção de scanf() para ler inteiros (%d) e string simples (%s).

⚠ Problemas Comuns
1. Buffer de Entrada: Após scanf(), o Enter (\n) fica no buffer e pode ser lido por fgets(), pulando entradas.
- Solução: Usar o getchar() para limpar o buffer.
2. Uso Correto de Ponteiros: Para strings, passe apenas o nome do array (ex: turma), não &turma.
3. Remover Quebra de Linha: fgetes() inclui o \n no final da string. Use strcspn() para remover.

✅ Funções Importantes
• fgets(destino, tamanho, stdin) – lê uma linha do teclado.
• scanf("%d", &variavel) – lê um inteiro.
• scanf("%s", string) – lê uma palavra (sem espaços).
• getchar() – lê um caractere, útil para limpar o buffer.
• strcspn(string, "\n") – encontra a posição do \n para removê-lo.

💎 Boas Práticas
    ◦ Sempre limpar o buffer após scanf() antes de usar fgets().
    ◦ Validar entradas do usuário.
    ◦ Usar nomes de variáveis claros e mensagens informativas.

Exemplo de fluxo do programa:
1. Solicita nome completo (com espaços).
2. Solicita matrícula (número).
3. Solicita idade (número).
4. Solicita turma (palavra).
5. Solicita curso (com espaços).
6. Exibe todos os dados cadastrados.

*/

#include <stdio.h>
#include <string.h>

int main() {
   char nome[50];
   int matricula;
   int idade;
   char turma[6];
   char curso[30];

    printf("Digite seu nome completo:");
    fgets(nome, 50,stdin);
    nome[strcspn(nome, "\n")] = 0;
    printf("Usuário Cadastrado!\n");

    printf("Digite a mátricula do aluno:");
    scanf("%d", &matricula);
    printf("Matricula Cadastrada!\n");

    printf("Digite a idade do aluno:");
    scanf("%d", &idade);
    printf("Idade Cadastrada! \n");

    printf("Digite a turma do aluno:");
    scanf("%s", turma);
    getchar(); // Limpar o buffer do teclado
    printf("Matricula Cadastrada! \n");

    printf("Digite o curso do aluno:");
    fgets(curso, 30,stdin);
    curso[strcspn(curso, "\n")] = 0;
    printf("Curso Cadastrado!\n");

    printf("\n----- Dados do Aluno -----\n");
    printf("Nome: %s\n", nome);
    printf("Matrícula: %d\n", matricula);
    printf("Idade: %d\n", idade);
    printf("Turma: %s\n", turma);
    printf("Curso: %s\n", curso); 
    printf("--------------------------\n");

    printf("Cadastro concluído com sucesso!\n");
    
    return 0;
}