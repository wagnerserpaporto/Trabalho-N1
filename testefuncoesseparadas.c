#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




char Separa_e_Converte(char mensagem_cifrada[], int b) {
    int len = strlen(mensagem_cifrada);
    char par[3];
    char *endptr;
    char encerrar[] = "00";

    int i, pos = 1; // pos = 1 para demais
    for (i = 0; i < len; i += 2) {
        par[0] = mensagem_cifrada[i];
        par[1] = mensagem_cifrada[i + 1];
        par[2] = '\0';
        //pos ++;

        int converteh2d = strtol(par, &endptr, 16);
        if (strcmp(par, encerrar) == 0) {
        	break;
        } else {
        	if (func_val(pos, b) != 0){
        		printf("%c ", converteh2d);
        		//printf("Pos: %2d -> X = %3d |\t%s - > \t%.3d - > \t%c\n", pos, func_val(pos, b), par, converteh2d, converteh2d);
			}
            
        }
        pos++;
    }
}

int main() {
	char texto_1[100] = "566F6388732073C66F2076656E6365646F867265732C20766F63C3887320636FBE6E73656775656D2E002DC6C921B7B87FCF"; // x = 1, b = 0
	char texto_2[100] = "5465636E6F336C6f67696120646120496E666f726D6187C66F2E003333333333333333333333333333333333333333333333"; // x = 1, b = 3
    char texto_3[100] = "566F6388732073C66F2076656E6365646F867265732C00566F6388732073C66F2076656E6365646F867265732C00332C2C2C3566F638873C320636F6E73656775656D2E002DC6C921B7B87FCF566F638873C320636F6E73656775656D2E002DC6C921B7B8"; // x = 2, b = 0
    char texto_4[100] = "566F638873C320636F6E73656775656D2E002DC6C921B7B87FCF566F638873C320636F6E73656775656D2E002DC6C921B7B8";
    //Separa_e_Converte(texto_1, 0);
    printf("\n");
    Separa_e_Converte(texto_2, 3);
    //Separa_e_Converte(texto_3, 0);
    //Separa_e_Converte(texto_4, 3);
    
    return 0;
}

