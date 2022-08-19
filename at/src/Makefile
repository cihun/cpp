
SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=)
DIR_1 = ..
DIR_D = $(DIR_1)/D
DIR_BIN = $(DIR_1)/bin
DIR_OBJ = $(DIR_1)/obj
FILE_D = $(DIR_D)/1.d



all:RM_D $(OBJS) RUN


RM_D:
	@if test -s $(DIR_D);\
	then echo "目录已创建"; else mkdir $(DIR_D) fi
	@-rm -f $(FILE_D)
	@touch $(FILE_D)
	@echo "$(DIR_BIN)/a:"$(addprefix $(DIR_OBJ)/,$(addsuffix .o,$(OBJS))) > $(FILE_D)
	@echo '	cd $(DIR_OBJ);g++ -o $$@ $$^' >> $(FILE_D)
$(OBJS):%:%.cpp
	@cache_=$$(g++ -MM $<);\
	echo $(DIR_OBJ)/$${cache_} >> $(FILE_D);
	@echo '	g++ -c -g -o $$@ $$<' >> $(FILE_D)
	@#echo "	mv $@ $(DIR_OBJ)/$@.o" >> $(FILE_D)
RUN:
	make -f $(FILE_D)

.PHONY:clean

clean:
	-rm -f $(DIR_OBJ)/*.o
	-rm -f $(DIR_BIN)/*