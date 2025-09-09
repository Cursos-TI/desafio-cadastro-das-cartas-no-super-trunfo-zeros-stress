
   #include <stdio.h>

int main() {
    
    int codigocidade1 = 48;
    char letra1 = 'f';
    char cidade1[50] = "florianópolis";
    int populacao1 = 587486;
    float area1 = 675.4;
    float pib1 = 23.550;
    int pontoturisticos1 = 30;


    int codigocidade2 = 42;
    char letra2 = 'c';
    char cidade2[30] = "criciuma";
    int populacao2 = 227438;
    float area2 = 235.6;
    float pib2 = 10.1;
    int pontoturisticos2 = 15;
 
    char cidade[50];
    int codigocidade;
    char letra;
    int populacao;
    float area;
    float pib;
    int pontoturisticos;

    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o codigocidade: \n");
    scanf("%d", &codigocidade);

    printf("Digite a letra: \n");
    scanf("%s", &letra);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite o pontoturistico: \n");
    scanf("%d", &pontoturisticos);
    

    return 0;
}
