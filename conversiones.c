#include "conversiones.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>

int conv_binario_decimal(char *binario)
{
    int num = 0, pot = 0,i;
    for(i = strlen(binario)-1; i>=0; i--){
        if(binario[i]=='1') 
            num= num + pow(2, pot);
        pot = pot + 1;
    }
    return num;
}

char *conv_decimal_binario(int num)
{
    int t=0, i=0, j=0;
    char *temp=NULL, *binario=NULL;
    temp = (char*)malloc(sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 2;        
        num = (int)(num /2);
        if(t==1) strcat(temp, "1");
        else strcat(temp, "0");        
    }while(num!=1 && num!=0);
    
    if(num== 1) strcat(temp, "1");
    //return binario; Ya no es necesario el return

    binario = (char*)malloc(strlen(temp)*sizeof(char));
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        binario[j] = temp[i];
        //
    }
    free(temp);
    temp = NULL;
    return binario;
}

int conv_hexa_decimal(char *hex)
{
    int num = 0, pot = 0,i;
    for(i = strlen(hex)-1; i>=0; i--){
        switch(hex[i]){
            case '1':
                num += pow(16, pot);
                break;
            case '2':
                num += 2*pow(16, pot);
                break;
            case '3':
                num += 3*pow(16, pot);
                break;
            case '4':
                num += 4*pow(16, pot);
                break;
            case '5':
                num += 5*pow(16, pot);
                break;
            case '6':
                num += 6*pow(16, pot);
                break;
            case '7':
                num += 7*pow(16, pot);
                break;
            case '8':
                num += 8*pow(16, pot);
                break;
            case '9':
                num += 9*pow(16, pot);
                break;
            case 'A': 
            case 'a':
                num += 10*pow(16, pot);
                break;
            case 'B': 
            case 'b':
                num += 11*pow(16, pot);
                break;
            case 'C': 
            case 'c':
                num += 12*pow(16, pot);
                break;
            case 'D': 
            case 'd':
                num += 13*pow(16, pot);
                break;
            case 'E': 
            case 'e':
                num += 14*pow(16, pot);
                break;
            case 'F': 
            case 'f':
                num += 15*pow(16, pot);
                break;
        }        
        pot = pot + 1;
    }
    return num;
}

char *conv_decimal_hexa(int num)
{
    int t=0, i=0, j=0;
    char *temp=NULL, *hex=NULL;
    temp = (char*)malloc(sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 16;        
        num = (int)(num/16);
        switch(t){
            case 0:
                strcat(temp, "0");
            case 1:
                strcat(temp, "1");        
                break;
            case 2:
                strcat(temp, "2");
                break;
            case 3:
                strcat(temp, "3");
                break;
            case 4:
                strcat(temp, "4");
                break;
            case 5:
                strcat(temp, "5");
                break;
            case 6:
                strcat(temp, "6");
                break;
            case 7:
                strcat(temp, "7");
                break;
            case 8:
                strcat(temp, "8");
                break;
            case 9:
                strcat(temp, "9");
                break;
            case 10: 
                strcat(temp, "A");            
                break;
            case 11:             
                strcat(temp, "B");
                break;
            case 12:
                strcat(temp, "C");
                break;
            case 13:
                strcat(temp, "D");
                break;
            case 14:
                strcat(temp, "E");
                break;
            case 15:
                strcat(temp, "F");
                break;
        }        
    }while(num>0);
    
    hex = (char*)malloc(strlen(temp)*sizeof(char));
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        hex[j] = temp[i];    
    }
    free(temp);
    temp = NULL;
    return hex;
}

int conv_octal_decimal(char *octal)
{
    int num = 0, pot = 0,i;
    for(i = strlen(octal)-1; i>=0; i--){
        switch(octal[i]){
            case '1':
                num += pow(8, pot);
                break;
            case '2':
                num += 2*pow(8, pot);
                break;
            case '3':
                num += 3*pow(8, pot);
                break;
            case '4':
                num += 4*pow(8, pot);
                break;
            case '5':
                num += 5*pow(8, pot);
                break;
            case '6':
                num += 6*pow(8, pot);
                break;
            case '7':
                num += 7*pow(8, pot);
                break;
            
        }        
        pot = pot + 1;
    }
    return num;
}

char *conv_decimal_octal(int num)
{
    int t=0, i=0, j=0;
    char *temp=NULL, *octal=NULL;
    temp = (char*)malloc(sizeof(char));
    strcpy(temp, "");

    do{
        t= num % 8;        
        num = (int)(num/8);
        switch(t){
            case 0:
                strcat(temp, "0");
            case 1:
                strcat(temp, "1");        
                break;
            case 2:
                strcat(temp, "2");
                break;
            case 3:
                strcat(temp, "3");
                break;
            case 4:
                strcat(temp, "4");
                break;
            case 5:
                strcat(temp, "5");
                break;
            case 6:
                strcat(temp, "6");
                break;
            case 7:
                strcat(temp, "7");
                break;
            
        }        
    }while(num>0);
    
    octal = (char*)malloc(strlen(temp)*sizeof(char));
    for(i=strlen(temp)-1, j=0; i >=0; i--, j++){
        octal[j] = temp[i];
    }
    free(temp);
    temp = NULL;
    return octal;
}

char *conv_hex_a_bin(char *hex){
     char *conversion = conv_decimal_binario(conv_hexa_decimal( hex));
     return conversion;
     
}

char *conv_bin_a_hexa(char *binario){
    char *conversion = conv_decimal_hexa(conv_binario_decimal(binario));
    return conversion;
}

char *conv_octal_binario(char *octal){
    char *conversion = conv_decimal_binario(conv_octal_decimal(octal));
    return conversion;
}

char *conv_binario_octal(char *binario){
    char *conversion = conv_decimal_octal(conv_binario_decimal(binario));
    return conversion;
}
