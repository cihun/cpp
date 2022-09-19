
.PHONY : all clean RUN MK_D

DIR = test_ght/hello_world
DIR_RUN = ../../
strs = "a     b     c     "
DIRS=src obj
DIR_1 = $(DIR)
DIR_D = $(DIR_1)/D
DIR_BIN = $(DIR_1)/bin
DIR_OBJ = $(DIR_1)/obj
DIR_SRC = $(DIR_1)/src


all:
	make -C $(DIR_RUN) -f $(DIR_SRC)/Makefile all
	g++ -g -o bin/a obj/*

MK_D:
	make -C src MK_D

RUN:
	make -C src RUN
	g++ -g -o ./bin/a ./obj/*

export

clean:
	rm obj/*.o
	rm bin/*
