
   #include <stdio.h>

int main() {
    
    int codigocidade1 = 48;
    char letra1 = 'f';
    char cidade1[50] = "florianópolis";
    int populacao1 = 587486;
    float area1 = 675.4;
    float pib1 = 23.550;
    int pontoturisticos1 = 30;
    float densidadepopulacional1 = populacao1 / area1;
    float pibpercapita1 = populacao1 / pib1


    int codigocidade2 = 42;
    char letra2 = 'c';
    char cidade2[30] = "criciuma";
    int populacao2 = 227438;
    float area2 = 235.6;
    float pib2 = 10.1;
    int pontoturisticos2 = 15;
    float densidadepopulacional2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;
 
    char cidade[50];
    int codigocidade;
    char letra;
    int populacao;
    float area;
    float pib;
    int pontoturisticos;
    float densidadepopulacional;
    float pibpercapita;

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

    printf("Densidade populacional %.2f\n", densidadepopulacional);
    printf("Pib Per Capita %.2f\n", pibpercapita);
    

    return 0;
}
