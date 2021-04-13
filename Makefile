CC = g++
exe_file = lab3_demo
$(exe_file): shirt.o dresser.o driver.o
	$(CC) shirt.o dresser.o driver.o -o $(exe_file)
shirt.o: shirt.cpp
	$(CC) -c shirt.cpp
dresser.o: dresser.cpp
	$(CC) -c dresser.cpp
driver.o: driver.cpp
	$(CC) -c driver.cpp

clean:
	rm -f *.out *.o $(exe_file)
