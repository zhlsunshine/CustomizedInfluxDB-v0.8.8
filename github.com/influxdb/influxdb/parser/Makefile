VALGRIND = /usr/bin/valgrind

BISON = /usr/bin/bison
FLEX  = /usr/bin/flex

.PHONY: valgrind clean

files = y.tab.c y.tab.h lex.yy.c
all: $(files)

clean:
	rm -f y.tab.c y.tab.h lex.yy.c test_memory_leaks

y.tab.c y.tab.h: query.yacc
	$(BISON) -t -d query.yacc -o y.tab.c --defines=y.tab.h

lex.yy.c: query.lex
	$(FLEX) -o lex.yy.c -i query.lex

valgrind: all
	gcc -g y.tab.c lex.yy.c frees.c test_memory_leaks.c -o a.out
	$(VALGRIND) --error-exitcode=1 --leak-check=full ./a.out
	rm a.out
