CXXFLAGS="-lstdc++"

FizzBuzz:	FizzBuzz.cc

run:	FizzBuzz
	./FizzBuzz

clean:
	rm -f FizzBuzz
