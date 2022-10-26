#include"Onegin.h"

int main() {

    TEXT text = {};

    FILE* source = fopen("text_in.txt", "r");
    FILE* outfile = fopen("text_out.txt", "w");
    
    CreateText(&text, source);

    MergeSort(text.Lines, text.nlines);

    WriteText(&text, outfile);

    fclose(source);
    fclose(outfile);
    free(text.buf);
    free(text.Lines);
    return 0;
}
