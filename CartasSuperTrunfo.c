#include <stdio.h>

int main() {
    char Estado1[20];// Utilizado o 'Char' para que fosse utilizado as Strings
    char Codigo1[20];// Utilizado o 'Char' para que fosse utilizado as Strings
    char cidade1[20];// Utilizado o 'Char' para que fosse utilizado as Strings
    int Populacao1;// Utilizado o 'Int' para colocar numeros inteiros
    float area1;// Utilizado o 'Float' para colocar numeros "quebrados"
    float Pib1;// Utilizado o 'Float' para colocar numeros "quebrados"
    int Turismo1;// Utilizado o 'Int' para colocar numeros inteiros

    char Estado2[20];// Utilizado o 'Char' para que fosse utilizado as Strings
    char Codigo2[20];// Utilizado o 'Char' para que fosse utilizado as Strings
    char cidade2[20];// Utilizado o 'Char' para que fosse utilizado as Strings
    int Populacao2;// Utilizado o 'Int' para colocar numeros inteiros
    float area2;// Utilizado o 'Float' para colocar numeros "quebrados"
    float Pib2;// Utilizado o 'Float' para colocar numeros "quebrados"
    int Turismo2;// Utilizado o 'Int' para colocar numeros inteiros

    
    printf("DESAFIO NIVEL NOVATO \n");
    
    printf("Carta 1 \n"); // Utilizado o 'printf' para a impressão da informação
    
    printf("Insira o Estado:  \n"); // Utilizado o 'printf' para a impressão da informação
    fgets(Estado1, sizeof Estado1, stdin); // Utilizado o 'fgets' para captar informações em formato de string
    printf("Insira o Codigo da Carta:    \n");// Utilizado o 'printf' para a impressão da informação
    fgets(Codigo1, sizeof Codigo1, stdin); // Utilizado o 'fgets' para captar informações em formato de string
    printf("Insira a Cidade:    \n");// Utilizado o 'printf' para a impressão da informação
    fgets(cidade1, sizeof cidade1, stdin);// Utilizado o 'fgets' para captar informações em formato de string
    printf("Insira a populacao:          \n");// Utilizado o 'printf' para a impressão da informação
    scanf("%d", &Populacao1); // Utilizado o 'scanf' para captar as informações em 'INT'
    getchar(); // para retirar os resquicios do '\n'
    printf("Insira a area:     \n");// Utilizado o 'printf' para a impressão da informação
    scanf("%f", &area1); // Utilizado o 'scanf' para captar as informações em 'FLOAT'
    getchar(); // para retirar os resquicios do '\n'
    printf("Insira o PIB:         \n");// Utilizado o 'printf' para a impressão da informação
    scanf("%f", &Pib1);// Utilizado o 'scanf' para captar as informações em 'FLOAT'
    getchar();  // para retirar os resquicios do '\n'
    printf("Insira a quantidade de Pontos turisticos:      \n");// Utilizado o 'printf' para a impressão da informação
    scanf("%d", &Turismo1); // Utilizado o 'scanf' para captar as informações em 'INT'
    getchar(); // para retirar os resquicios do '\n'
    
    printf("Carta 2 \n");// Utilizado o 'printf' para a impressão da informação
    
    printf("Insira o Estado: \n");// Utilizado o 'printf' para a impressão da informação
    fgets(Estado2, sizeof Estado2, stdin);// Utilizado o 'fgets' para captar informações em formato de string
    printf("Insira o Codigo da Carta: \n");// Utilizado o 'printf' para a impressão da informação
    fgets(Codigo2, sizeof Codigo2, stdin);// Utilizado o 'fgets' para captar informações em formato de string
    printf("Insira a Cidade:    \n");// Utilizado o 'printf' para a impressão da informação
    fgets(cidade2, sizeof cidade2, stdin);// Utilizado o 'fgets' para captar informações em formato de string
    printf("Insira a populacao:          \n");// Utilizado o 'printf' para a impressão da informação
    scanf("%d", &Populacao2);// Utilizado o 'scanf' para captar as informações em 'INT'
    getchar(); // para retirar os resquicios do '\n'
    printf("Insira a area:     \n");// Utilizado o 'printf' para a impressão da informação
    scanf("%f", &area2); // Utilizado o 'scanf' para captar as informações em 'FLOAT'
    getchar(); // para retirar os resquicios do '\n'
    printf("Insira o PIB:         \n"); // Utilizado o 'printf' para a impressão da informação
    scanf("%f", &Pib2); // Utilizado o 'scanf' para captar as informações em 'FLOAT'
    getchar(); //para retirar os resquicios do '\n'
    printf("Insira a quantidade de Pontos turisticos:      \n"); // Utilizado o 'printf' para a impressão da informação
    scanf("%d", &Turismo2);// Utilizado o 'scanf' para captar as informações em 'INT'
    getchar(); //para retirar os resquicios do '\n'

    printf("Carta 1\n");// Utilizado o 'printf' para a impressão da informação
    printf("Estado: %s\n", Estado1);// Utilizado o 'printf' para a impressão da informação
    printf("Codigo: %s\n", Codigo1);// Utilizado o 'printf' para a impressão da informação
    printf("Cidade: %s\n", cidade1);// Utilizado o 'printf' para a impressão da informação
    printf("Populacao: %d \n", Populacao1);// Utilizado o 'printf' para a impressão da informação
    printf("Area: %.2f  \n", area1);// Utilizado o 'printf' para a impressão da informação
    printf("PIB: %.2f \n", Pib1);// Utilizado o 'printf' para a impressão da informação
    printf("Numero de pontos Turisticos: %d \n", Turismo1);// Utilizado o 'printf' para a impressão da informação
    
    printf("Carta 2\n");// Utilizado o 'printf' para a impressão da informação
    printf("Estado: %s\n", Estado2);// Utilizado o 'printf' para a impressão da informação
    printf("Codigo: %s\n", Codigo2);// Utilizado o 'printf' para a impressão da informação
    printf("Cidade: %s\n", cidade2);// Utilizado o 'printf' para a impressão da informação
    printf("Populacao: %d \n", Populacao2);// Utilizado o 'printf' para a impressão da informação
    printf("Area: %.2f  \n", area2);// Utilizado o 'printf' para a impressão da informação
    printf("PIB: %.2f \n", Pib2);// Utilizado o 'printf' para a impressão da informação
    printf("Numero de pontos Turisticos: %d \n", Turismo2);// Utilizado o 'printf' para a impressão da informação

    return 0; // Utilizado para verificar a funcionalidade do programa, para ver se esta finalizando corretamente 

}
