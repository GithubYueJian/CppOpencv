build:main.o
	g++ main.cpp -o build `pkg-config --cflags --libs opencv` -lpython3.6m
.PHONY:clean
clean:
	rm -vf *.o build
