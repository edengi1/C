CC=gcc
FLAG=-Wall
AR=ar
OBJECT=basicMath.o power.o
fPIC=-fPIC
g= -g
all: mains maind



mains: main.o libmyMath.a
	gcc -wall -g -o mains main.o libmyMath.a
maind: main.o libmyMath.so
	gcc -wall -g -o maind main.o ./libmyMath.so
libmyMath.a: basicMath.o power.o
	ar rcs -o libmyMath.a basicMath.o  power.o  
libmyMath.so: basicMath.o power.o 
	gcc -shared basicMath.o power.o  -o libmyMath.so
power.o:power.c myMath.h
	gcc -wall -fPIC -g -c  power.c
basicMath.o:basicMath.c myMath.h
	gcc -wall -g -c basicMath.c
main.o:myMath.h main.c
	gcc -wall -g -c main.c
.PHONY: mymaths mymathd clean all
clean:
	rm -f *.o *.a *.so mains maind
