
SRCS = $(wildcard $(DIR_SRC)/*.cpp)

OBJS = $(SRCS:.cpp=)
OBJS_D = $(addsuffix .d,$(notdir, $(OBJS)))
FILE_D = $@.d
F = $@

.PHONY:clean MK_D $(OBJS) RUN all

all:RM_D $(OBJS) RUN

RM_D:
	@if test -s $(DIR_D);\
	then echo "目录已创建"; else mkdir $(DIR_D) ;fi
	@-rm -f $(DIR)/D/*
	echo $(OBJS)
	echo 

$(OBJS):%:%.cpp

	echo "CPPFLAGS=-g\n"'VPATH = $(DIR_SRC) ../include'"\nvpath = %.o $(DIR_OBJ)" >> $(DIR_D)/$(notdir $(FILE_D))
	echo all:$(DIR_OBJ)/$(notdir $@.o) >> $(DIR_D)/$(notdir $(FILE_D))
	echo $(DIR_OBJ)/$(shell g++ -MM $<) >> $(DIR_D)/$(notdir $(FILE_D))
	echo '	g++ $$(CPPFLAGS) -o $$@ -c $$<' >> $(DIR_D)/$(notdir $(FILE_D))

	
RUN:
	#make -f $(FILE_D)
	$(foreach var,$(OBJS),make -f $(DIR_D)/$(notdir $(var)).d -C .;)
	#make -f $(DIR_D)/a.d -C .

.PHONY:clean 

clean:
	-rm -f $(DIR_OBJ)/*.o
	-rm -f $(DIR_BIN)/*