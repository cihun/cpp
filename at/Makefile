
.PHONY : all clean

strs = "a     b     c     "
DIRS=src obj
all:
	#-mkdir bin
	#$(foreach x,$(DIRS),make -C $(x);)
	make -C src
	#make -C obj
	g++ -g -o ./bin/a ./obj/*
	

export

clean:
	rm obj/*.o
	rm bin/*
