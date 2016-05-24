del_substr.o:del_substr.h del_substr.c
	gcc del_substr.c -c
testrun.o:testrun.c del_substr.h
	gcc testrun.c -c
testrun:testrun.o del_substr.o
	gcc testrun.o del_substr.o -o testrun
