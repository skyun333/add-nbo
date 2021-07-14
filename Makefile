all:
	g++ -o add-nbo add-nbo.cpp
	./add-nbo
clean:
	rm -f add-nbo
