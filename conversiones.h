#ifndef CONVERSIONES_H_INCLUDED
#define CONVERSIONES_H_INCLUDED

int conv_binario_decimal(char *binario);
char* conv_decimal_binario(int num);
int conv_hexa_decimal(char *hex);
char *conv_decimal_hexa(int num);
int conv_octal_decimal(char *octal);
char *conv_decimal_octal(int num);
char *conv_hex_a_bin(char *hex);
char *conv_bin_a_hexa(char *binario);
char *conv_octal_binario(char *octal);
char *conv_binario_octal(char *binario);
#endif // !__CONVERSIONES_H__
