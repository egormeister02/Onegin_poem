#include<conio.h>
#include"Onegin.h"

int main() {

    const mode SORT_MODE = RIGHT;

    TEXT text = {};

    FILE* source = fopen("text_in.txt", "r");
    FILE* outfile = fopen("text_out.txt", "w");
    //FILE* logtext = fopen("log_text.txt", "w");
    
    CreateText(&text, source);
    //printf("OK\n");
    
    MergeSort(text.Lines, text.nlines, SORT_MODE);
    //TextDumpFunc(&text, logtext);
    //printf("OK\n");

    WriteText(&text, outfile);
    //printf("OK\n");

    fclose(source);
    fclose(outfile);
    free(text.buf);
    free(text.Lines);
    return 0;
}
