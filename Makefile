CC = g++ -std=c++11
exe_file = lab_4

$(exe_file): dresser.o shirt.o driver.o suitcase.o
	$(CC) dresser.o shirt.o driver.o suitcase.o -o $(exe_file)

dresser.o: dresser.cpp
	$(CC) -c dresser.cpp
suitcase.o: suitcase.cpp
	$(CC) -c suitcase.cpp
shirt.o: shirt.cpp
	$(CC) -c shirt.cpp
driver.o: driver.cpp
	$(CC) -c driver.cpp

clean:
	rm -f *.out *.o $(exe_file)
