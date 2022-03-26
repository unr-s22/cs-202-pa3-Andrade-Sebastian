pa3: main.o money.o account.o
	g++ -o pa3 money.o account.o main.o

main.o: main.cpp
	g++ -c main.cpp


account.o: account.cpp account.h
	g++ -c account.cpp

money.o: money.cpp money.h
	g++ -c money.cpp

clean: 
	rm *.o pa3