person : main.o person.o
	g++ -o $@ $^

%.o : %.c
	g++ -c -o $@ $<

.PHONY : clean

clean:
	rm *.o person