all: clean test

appTests: test/tests.cpp Bateria.cpp Celular.cpp
	g++ -fsanitize=address --std=c++17 test/tests.cpp test/catch_amalgamated.cpp Bateria.cpp Celular.cpp -o build/appTests

test: appTests
	# executes all tests
	./build/appTests

clean:
	rm -f build/appTests
	rm -f build/exercise
run:
	g++ *.cpp -o build/exercise
	clear
	./build/exercise
debug: 
	g++ *.cpp -g -o dexercise
	gdb dexercise
	rm -f dexercise
debugvs:
	g++ *.cpp -g -o build/dexercise

debugtest: 
	g++ -fsanitize=address --std=c++17 test/tests.cpp test/catch_amalgamated.cpp Bateria.cpp Celular.cpp -g -o build/dexercise