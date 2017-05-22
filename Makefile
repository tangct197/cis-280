output: Rational clean

Rational: main.o Rational.o
					g++ main.o Rational.o -o Rational

main.o: main.cpp
				g++ -c main.cpp

Rational.o: Rational.cpp
						g++ -c Rational.cpp

clean:
	rm -f *.o Rational
