find_char.o:find_char.c find_char.h
	gcc -c find_char.c
find_char_testrun.o:find_char_testrun.c find_char.c
	gcc -c find_char_testrun.c
find_char:find_char.o find_char_testrun.o
	gcc find_char.o find_char_testrun.o -o find_char
