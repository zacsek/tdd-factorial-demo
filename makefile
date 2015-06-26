
all: test factorial

test: test_factorial
	@./test

test_factorial: test_factorial.o factorial.o
	@echo 'Linking $@'
#	@echo '@g++ -o test $? -lboost_unit_test_framework'
	@g++ -o test $? -lboost_unit_test_framework

factorial: main.o factorial.o
	@echo 'Linking $@'
#	@echo '@g++ -o $@ $?'
	@g++ -o $@ $?

%.o:%.cpp
	@echo "$? -> $@"
#	@echo '@g++ -c $?'
	@g++ -c $?

clean:
	@-find . -name "*.o" -exec /bin/rm -v {} \;
	@-find . -type f -executable -exec /bin/rm -v {} \;
