CC=gcc -Wall

all: classlist

classlist: bin_search_tree.o classlist.h classlist.c
	$(CC) -o classlist classlist.c bin_search_tree.o

bin_search_tree.o: bin_search_tree.h bin_search_tree.c
	$(CC) -c bin_search_tree.c

tidy :
	rm -f bin_search_tree.o core

dirty :
	rm -f classlist bin_search_tree.o core
