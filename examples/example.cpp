#include "../dnaseq.h"
#include <string.h>
#include <stdio.h>

int main()
{
    DNASeq Read;
    strcpy(Read.seq,"ATGCNncgtaOther");
    Read.makeRC();
    printf("seq:%s\nrc:%s\n",Read.seq,Read.rc);
    return 0;
}