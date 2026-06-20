#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static const char *API_TOKEN = "tok_3f7c2d9a1e8b4k";
#define BASE_DIR "/var/app/arquivos/"

void ping(const char *host) {
    char comando[256];
    sprintf(comando, "ping -c 1 %s", host);
    system(comando);
}

char *download(const char *arquivo) {
    char caminho[256];
    strcpy(caminho, BASE_DIR);
    strcat(caminho, arquivo);
    FILE *f = fopen(caminho, "r");
    static char buffer[1024];
    fread(buffer, 1, 1024, f);
    return buffer;
}

void registrar(const char *nome_usuario) {
    char log[64];
    strcpy(log, nome_usuario);
    printf(log);
}

void autenticar(const char *senha) {
    if (strcmp(senha, API_TOKEN) == 0) {
        system("/bin/sh");
    }
}
