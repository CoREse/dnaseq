#ifndef CRE_BIO_DNASEQ
#define CRE_BIO_DNASEQ

class DNASeq
{
    unsigned MaxLength,Size,Length;
    public:
    char * seq, *rc;//seq and reversed complemented seq
    DNASeq(unsigned MaxLength=1000000);
    ~DNASeq();
    void makeRC();
    unsigned getLength();
    DNASeq(const DNASeq&);
    DNASeq& operator=(const DNASeq&);
};

#endif