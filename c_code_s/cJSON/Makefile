
all:
	gcc -fpic -shared cJSON.c -o libcJSON.a
	gcc test.c -L. -lcJSON -o test

clean:
	rm test libcJSON.a
