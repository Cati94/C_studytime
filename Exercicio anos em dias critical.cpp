 #include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
 int dia,diaatual,mes,mesatual,ano,anoatual,totaldias,i;

printf("Digite o dia que voc� nasceu:\n");
scanf("%d",&dia);
printf("Digite o mes que voc� nasceu:\n");
scanf("%d",&mes);
printf("Digite o ano que voc� nasceu:\n");
scanf("%d",&ano);
printf("Digite o dia (data de hoje):\n");
scanf("%d",&diaatual);
printf("Digite o m�s (data de hoje):\n");
scanf("%d",&mesatual);
printf("Digite o ano (data de hoje):\n");
scanf("%d",&anoatual);

    for(int i = ano; i < anoatual; i++){ 

        // verifica se ano � bissexto ou n�o
        if(i % 4 == 0){
            totaldias += 366;
        } else {
            totaldias += 365;
        }
    }

    printf("Dias: %d",totaldias);

    return 0;
}  

