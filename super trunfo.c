#include <stdio.h>

int main(){
    char estado[20], codigo[3], cidade[20];
    int populacao, npts;
    float pib, area;

    printf("Vamos preencher os dados da primeira carta: \n");

    printf("Digite o nome do seu estado: \n");
    scanf("%s", &estado);

    printf("Digite o código de sua carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o tamanho da população de sua cidade: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turisticos de sua cidade: \n");
    scanf("%d", &npts);

    printf("Digite o tamanho do pib de sua cidade: \n");
    scanf("%f", &pib);

    printf("Digite a area total em kilometros quadrados de sua cidade: \n");
    scanf("%f", &area);

     printf("Estado: %s\n", estado);
     printf("Código da carta: %s\n", codigo);
     printf("Nome da cidade: %s\n", cidade);
     printf("População: %d\n", populacao);
     printf("Número de pontos turísticos: %d\n", npts);
     printf("PIB: %.2f\n", pib);
     printf("Tamanho da cidade: %.2f\n", area);

     printf("Vamos preencher os dados da segunda carta: \n");

     char estado2[20], codigo2[3], cidade2[20];
    int populacao2, npts2;
    float pib2, area2;


    printf("Digite o nome do seu estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código de sua carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite o tamanho da população de sua cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turisticos de sua cidade: \n");
    scanf("%d", &npts2);

    printf("Digite o tamanho do pib de sua cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a area total em kilometros quadrados de sua cidade: \n");
    scanf("%f", &area2);

     printf("Estado: %s\n", estado2);
     printf("Código da carta: %s\n", codigo2);
     printf("Nome da cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Número de pontos turísticos: %d\n", npts2);
     printf("PIB: %.2f\n", pib2);
     printf("Tamanho da cidade: %.2f\n", area2);
}
