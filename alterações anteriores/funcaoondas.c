#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int func_val(int x, int b) {
    double valores_as[] = {186.752, -148.235, 34.5049, -3.5091, 0.183166, -0.00513554, 0.0000735464, -4.22038e-7};
    double result = 0.0;
    int i;
    for (i = 0; i < 8; i++) {
        result += valores_as[i] * pow(x, i);
    }
    result += b * x;
    int resultf = round(result);
    //printf("%d", resultf); verificaÃ§Ã£o do resultado final
    return resultf;
}
/*void main(){
	// for gerado apenas para confirmação de valores segundo novo vetor
	int i;
	for (i = 1; i < 100; i++){
		int resultado = func_val(i, 0);
		if(resultado != 0){
			printf("%2d\t%d\n", i, resultado);
		}
		
	}
}*/
