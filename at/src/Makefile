
SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=)
OBJS_D = $(addsuffix .d,$(OBJS))
DIR_1 = ..
DIR_D = $(DIR_1)/D
DIR_BIN = $(DIR_1)/bin
DIR_OBJ = $(DIR_1)/obj
FILE_D = $(DIR_D)/$@.d



all:RM_D $(OBJS) RUN



RM_D:
	@if test -s $(DIR_D);\
	then echo "目录已创建"; else mkdir $(DIR_D) ;fi
	@-rm -f $(DIR_D)/*
$(OBJS):%:%.cpp
	echo 'VPATH = ../src ../obj'"\nvpath = %.o ../obj" >> $(FILE_D)
	g++ -MM $< >> $(FILE_D)

	
RUN:
	#make -f $(FILE_D)
	$(foreach var,$(OBJS),make -f $(DIR_D)/$(var).d -C $(DIR_OBJ)/;)

.PHONY:clean

clean:
	-rm -f $(DIR_OBJ)/*.o
	-rm -f $(DIR_BIN)/*