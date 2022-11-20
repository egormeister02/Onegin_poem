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
    //TextDumpFunc(&text, logtext);
    MergeSort(text.Lines, text.nlines, SORT_MODE);
    
    //printf("OK\n");

    WriteText(&text, outfile);
    //printf("OK\n");

    fclose(source);
    fclose(outfile);
    DtorText(&text);
    return 0;
}
