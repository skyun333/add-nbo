all:
	g++ -o add-nbo add-nbo.cpp
	./add-nbo thousand.bin five-hundred.bin
clean:
	rm -f add-nbo
