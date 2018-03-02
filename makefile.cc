all: Main.exe

Main.exe: Main.o Introduccio.o Introduccio2.o Selecciopersonatge.o Seleccioacompanyant.o
	g++ -o Main.exe Main.o Introduccio.o Introduccio2.o Selecciopersonatge.o Seleccioacompanyant.o

Introduccio.o:  Introduccio.cc Introduccio.hh 
	g++ -c Introduccio.cc  

Introduccio2.o:  Introduccio2.cc Introduccio2.hh 
	g++ -c Introduccio2.cc  

Seleccioacompanyant.o: Seleccioacompanyant.cc Seleccioacompanyant.hh
	g++ -c Seleccioacompanyant.cc  
	
Selecciopersonatge.o: Selecciopersonatge.cc Selecciopersonatge.hh
	g++ -c Selecciopersonatge.cc  

Main.o: Main.cc Introduccio.hh Introduccio2.hh Seleccioacompanyant.hh Selecciopersonatge.hh 
	g++ -c Main.cc  

clean:
	rm -f *.o
	rm *.exe

