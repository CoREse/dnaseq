CC=g++
AR=ar
CPPFLAGS= -Wall -O3
LDFLAGS=
LIBS=

DNASEQ_OBJS=dnaseq.o
DNASEQ_HEADERS=dnaseq.h
EXAMPLE_OBJS=examples/example.o
DNASEQ=dnaseq.a

libs:$(DNASEQ)

all: $(DNASEQ) example

$(DNASEQ):$(DNASEQ_OBJS)
	$(AR) -rc $@ $(DNASEQ_OBJS)

example: $(EXAMPLE_OBJS) $(DNASEQ)
	$(LINK.cpp) $^ -o $@

$(DNASEQ_OBJS):$(DNASEQ_HEADERS)

clean:
	rm *.o *.a examples/*.o example
