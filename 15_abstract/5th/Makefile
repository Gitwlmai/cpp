human : main.o chinese.o englishman.o human.o
	g++ -o $@ $^

%.o : %.cpp
	g++ -c -o $@ $<

.PHONY : clean

clean:
	rm *.o human