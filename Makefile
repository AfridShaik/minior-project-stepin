test.exe: main.c funtion.c 
	gcc main.c funtion.c -o test.exe
run: test.exe
	./test.exe