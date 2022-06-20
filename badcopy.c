#include <stdio.h>

char buffer[128];
int n = 129; 

int main(int argc, char *argv[]) {
    FILE *fin, *fout;

    if(argc < 3) {
        printf("Faltan parametros\n");
        return -1;
    }

    fin = fopen(argv[1], "r");
    fout = fopen(argv[2], "w");

    while(1) {
        fgets(buffer, n, fin);
        if(feof(fin)) break;
        fputs(buffer, fout);
    }
}
