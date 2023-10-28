human : main.o libhuman.so
	g++ -o $@ $< -lhuman -L ./

%.o : %.cpp
	g++ -fPIC -c -o $@ $<

libhuman.so : chinese.o englishman.o human.o
	g++ -shared -o $@ $^

.PHONY : clean

clean:
	rm *.o human libhuman.so