all: file1.o file2.o

file1.o file2.o:
	echo $@

clean:
	rm -rf file1.o file2.o
