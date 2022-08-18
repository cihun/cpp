
SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=)
DIR_1 = ..
DIR_D = $(DIR_1)/D
DIR_BIN = $(DIR_1)/bin
DIR_OBJ = $(DIR_1)/obj
FILE_D = $(DIR_D)/1.d



all:RM_D $(OBJS) RUN


RM_D:
	-mkdir $(DIR_D)
	-rm -f $(FILE_D)
	touch $(FILE_D)
	echo '$$@'
	@echo "a:"$(addsuffix .o,$(OBJS)) > $(FILE_D)
	@echo '	cd $(DIR_OBJ);g++ -o $(DIR_BIN)/$$@ $$^' >> $(FILE_D)
$(OBJS):%:%.cpp
	@#g++ -c -g -o $@ $<
	@#mv $@ $(DIR_OBJ)/$@.o
	@#echo $<
	@g++ -MM $< >> $(FILE_D)
	@echo "	g++ -c -g -o $@ ../src/$<" >> $(FILE_D)
	@echo "	mv $@ $(DIR_OBJ)/$@.o" >> $(FILE_D)
RUN:
	echo 'asdf'
	make -f $(FILE_D)