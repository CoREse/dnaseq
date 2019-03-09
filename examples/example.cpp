#include "../dnaseq.h"
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    DNASeq Read(100);
    strcpy(Read.seq,"ATGCNncgtaOther");
    Read.makeRC();
    printf("seq:%s\nrc:%s\n",Read.seq,Read.rc);
    DNASeq Read2;
    Read2=string("atgcnNATGC");
    Read2.makeRC();
    printf("seq:%s\nrc:%s\n",Read2.seq,Read2.rc);
    return 0;
}