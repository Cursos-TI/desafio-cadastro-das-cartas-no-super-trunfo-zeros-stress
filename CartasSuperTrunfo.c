
   #include <stdio.h>

int main() {
    
    int codigocidade = 48;
    char letra = 'f';
    char cidade[50] = "florianópolis";
    int população = 587.486;
    float area = 675.4;
    float pib = 23.550;
    int pontoturisticos = 30;

    
    int codigocidade = 42;
    char letra = 'c';
    char cidade[30] = "criciuma";
    int população = 227.438;
    float area = 235.6;
    float pib = 10.1;
    int pontoturisticos = 15;
 
    printf("Digite sua cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o codigocidade: \n");
    scanf("%d", &codigocidade);

    printf("Digite a letra: \n");
    scanf("%s", &letra);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite sua area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    prinf("Digite o pontoturistico: \n");
    scanf("%d", &pontoturisticos);
    

    return 0;
}
