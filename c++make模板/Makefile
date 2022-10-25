
.PHONY : all clean RUN MK_D

strs = "a     b     c     "
DIRS=src obj
all:
	make -C src all
	g++ -g -o ./bin/a ./obj/*

MK_D:
	make -C src MK_D

RUN:
	make -C src RUN
	g++ -g -o ./bin/a ./obj/*

export

clean:
	rm obj/*.o
	rm bin/*
