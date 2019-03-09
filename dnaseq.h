#ifndef CRE_BIO_DNASEQ
#define CRE_BIO_DNASEQ

#include <string>

class DNASeq
{
    unsigned ReservedLength,Size;//if ReservedLength!=0, keep at least ReservedLength+1 Size space allocated. No Length because seq may be changed at other places
    public:
    char * seq, *rc;//seq and reversed complemented seq, don't mess with their allocated memories, or unexpected errors may occur.
    DNASeq(unsigned ReservedLength=1000000);
    DNASeq(const char* Bases, unsigned Max=0);
    DNASeq(std::string Bases, unsigned Max=0);
    ~DNASeq();
    void reserve(unsigned ReservedLength);
    void makeRC();
    unsigned getLength();
    DNASeq(const DNASeq&);
    DNASeq& operator=(const DNASeq&);
    DNASeq& move(DNASeq& B);//move B to this
};

#endif