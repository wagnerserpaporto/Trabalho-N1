#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1024  

void separarEmPares(const char* hexString) {
    int length = strlen(hexString);

   
    if (length % 2 != 0) {
        printf("A string hexadecimal deve ter um comprimento par.\n");
        return;
    }

    printf("Pares de dois digitos:\n");
    
    for (int i = 0; i < length; i += 2) {
     
        printf("%c%c\n", hexString[i], hexString[i + 1]);
    }
}

int main() {
    char hexString[MAX_LENGTH];

    printf("Digite a string hexadecimal :\n", MAX_LENGTH - 1);
    
    if (fgets(hexString, sizeof(hexString), stdin) != NULL) {
       
        hexString[strcspn(hexString, "\n")] = '\0';
        separarEmPares(hexString);
    } else {
        printf("Digite um valor valido.\n");
    }

    return 0;
}