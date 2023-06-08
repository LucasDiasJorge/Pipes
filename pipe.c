#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *pipe;
    char buffer[256];

    // Abre um processo para executar o código da biblioteca e capturar sua saída
    pipe = popen("./hello", "r");
    if (pipe == NULL) {
        perror("Erro ao abrir o processo");
        exit(EXIT_FAILURE);
    }

    // Lê a saída do processo linha por linha
    while (fgets(buffer, sizeof(buffer), pipe) != NULL) {
        // Processa a saída do printf da biblioteca
        printf("Saída da biblioteca: %s", buffer);
    }

    // Fecha o pipe
    pclose(pipe);

    return 0;
}
