main: main.o date.o address.o student.o
	g++ -g date.o address.o student.o main.o -o main

date.o: date.cpp date.h
	g++ -g -c date.cpp

address.o: address.cpp address.h
	g++ -g -c address.cpp

student.o: student.cpp student.h date.h address.h
	g++ -g -c student.cpp

main.o: main.cpp date.h address.h
	g++ -g -c main.cpp 

clean:
	rm -f *.o
	rm main

run: main
	./main

debug: main
	gdb main

valgrind:
	valgrind --leak-check=full ./main
