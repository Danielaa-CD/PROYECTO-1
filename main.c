#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conversiones.h"

void menu();

int main(){
    menu();
    return 0;
}

void menu(){
printf("\n---------------------SISTEMAS DE NUMERACION------------------------");
printf("\nElaborado por: Castro Delgado Daniela Beatriz y Ortiz Lopez Vianca\n");
printf("\nGrupo:07\n");
printf("\nFundamentos de programacion\n");
printf("\nIndica que conversion deseas realizar: \n");
printf("1. Decimal a binario\n");
printf("2. Binario a decimal\n");
printf("3. Hexadecimal a decimal\n");
printf("4. Decimal a hexadecimal\n");
printf("5. Octal a decimal\n");
printf("6. Decimal a octal\n");
printf("7. Hexadecimal a binario\n");
printf("8. Binario a hexadecimal\n");
printf("9. Octal a binario\n");
printf("10. Binario a octal\n");

int opcion;
scanf("%d",&opcion);

switch(opcion){
    case 1:{
        printf("\nIngresa el numero decimal: \n");
        int numdec;
        scanf("%d",&numdec);
        char*binario = conv_decimal_binario(numdec);
        printf("\nLa conversión a número binario es: %s\n",binario);
        free(binario);
        break;
    }
    
    case 2:{
        int indicador=0;
        char *binario;
        binario =(char*)malloc(sizeof(char));
        printf("\nIngresa el numero binario: \n");
        scanf("%s",binario);
        int i;
        for(i=0;  i <strlen(binario); i++){
            if (binario[i]!='1' && binario[i]!='0'){
                printf("Dato invalido");
                indicador=1;
                break;
            }

            }
        if (indicador == 1){
            break;
        }
        else {
         i = conv_binario_decimal(binario);   
        printf("\nLa conversion a numero decimal es: %d\n", i);
         free(binario);
         break;
        }
    }
    
    case 3:{
        printf("\nIngresa el numero hexadecimal: \n");
        int indicador=0;
        char *hex;
        hex= (char*)malloc(sizeof(char));
        scanf("%s",hex);
        int i;
        for(i=0;  i <strlen(hex); i++){
            if (hex[i]!= '0' && hex[i]!='1'&& hex[i]!='2'&& hex[i]!='3'&& hex[i]!='4'&& hex[i]!='5'&& hex[i]!='6'&& hex[i]!='7'&& hex[i]!='8'&& hex[i]!='9'&& hex[i]!='A'&& hex[i]!='B'&& hex[i]!='C'&& hex[i]!='D'&& hex[i]!='E'&& hex[i]!='F' ){
                printf("Dato invalido");
                indicador=1;
                break;
            }

            }
        if (indicador==1){
            break;
        }
        else{
        int numdec= conv_hexa_decimal(hex);
        printf("\nLa conversión a número decimal es: %d\n",numdec);
        free(hex);
        break;
        }
    }
    
    case 4:{
        printf("\nIngresa el numero decimal: \n");
        int numdec;
        scanf("%d",&numdec);
        char *hex= conv_decimal_hexa(numdec);
        printf("\nLa conversión a número hexadecimal es: %s\n",hex);
        free(hex);
        break;
    }
    
    case 5:{
        printf("\nIngresa el numero octal: \n");
        int indicador=0;
        char *octal;
        octal =(char*)malloc(sizeof(char));
        scanf("%s",octal);
        int i;
        for(i=0;  i <strlen(octal); i++){
            if (octal[i]!= '0' && octal[i]!='1'&& octal[i]!='2'&& octal[i]!='3'&& octal[i]!='4'&& octal[i]!='5'&& octal[i]!='6'&& octal[i]!='7'){
                printf("Dato invalido");
                indicador = 1;
                break;
            }
        }
        if (indicador==1){
            break;
        }
        else{
        int numdec= conv_octal_decimal(octal);
        printf("\nLa conversión a número decimal es: %d\n",numdec);
        free(octal);
        break;
        }
    }

    case 6:{
        printf("\nIngresa el numero decimal: \n");
        int numdec;
        scanf("%d",&numdec);
        char *octal= conv_decimal_octal(numdec);
        printf("\nLa conversión a número octal es: %s\n",octal);
        free(octal);
        break;
    }
    
    case 7:{
        printf("\nIngresa el numero hexadecimal: \n");
        int indicador=0;
        char *hex;
        hex= (char*)malloc(sizeof(char));
        scanf("%s",hex);
        int i;
        for(i=0;  i <strlen(hex); i++){
            if (hex[i]!= '0' && hex[i]!='1'&& hex[i]!='2'&& hex[i]!='3'&& hex[i]!='4'&& hex[i]!='5'&& hex[i]!='6'&& hex[i]!='7'&& hex[i]!='8'&& hex[i]!='9'&& hex[i]!='A'&& hex[i]!='B'&& hex[i]!='C'&& hex[i]!='D'&& hex[i]!='E'&& hex[i]!='F' ){
                printf("Dato invalido");
                indicador=1;
                break;
            }
        }
        if (indicador == 1){
            break;
        }
        else{
        char *binario = conv_hex_a_bin(hex);
        printf("\nLa conversión a número binario es: %s\n",binario);
        free(hex);
        free(binario);
        break;
        }
    }
    

    case 8:{
        printf("\nIngresa el numero binario: \n");
        int indicador=0;
        char *binario;
        binario=(char*)malloc(sizeof(char));
        scanf("%s", binario);
        int i;
        for(i=0;  i <strlen(binario); i++){
            if (binario[i]!='1' && binario[i]!='0'){
                printf("Dato invalido");
                indicador =1;
                break;
            }
        }
        if(indicador==1){
            break;
        }
        else{
        char *hex = conv_bin_a_hexa(binario);
        printf("\nLa conversión a número hexadecimal es: %s\n",hex);
        free(hex);
        free(binario);
        break;
        }
    }
    
    case 9:{
        int indicador=0;
        printf("\nIngresa el numero octal: \n");
        char *octal;
        octal=(char*)malloc(sizeof(char));
        scanf("%s",octal);
        int i;
        for(i=0;  i <strlen(octal); i++){
            if (octal[i]!= '0' && octal[i]!='1'&& octal[i]!='2'&& octal[i]!='3'&& octal[i]!='4'&& octal[i]!='5'&& octal[i]!='6'&& octal[i]!='7'){
                printf("Dato invalido");
                indicador=1;
                break;
            }
        }
        if (indicador==1){
            break;
        }
        else{
        char *binario = conv_octal_binario(octal);
        printf("\nLa conversión a número binario es: %s\n",binario);
        free(octal);
        free(binario);
        break;
        }
    }
    
    case 10:{
        printf("\nIngresa el numero binario: \n");
        int indicador=0;
         char *binario;
         binario=(char*)malloc(sizeof(char));
        scanf("%s", binario);
        int i;
        for(i=0;  i <strlen(binario); i++){
            if (binario[i]!='1' && binario[i]!='0'){
                printf("Dato invalido");
                indicador=1;
                break;
            }
        }
        if(indicador==1){
            break;
        }
        else{
        char *octal = conv_binario_octal(binario);
        printf("\nLa conversión a número octal es: %s\n",octal);
        free(octal);
        free(binario);
        break;    
        } 
}
default:{
printf("No ingresaste una opcion valida");
break;
}

}

}
