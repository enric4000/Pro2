opciones = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Werror -Wno-sign-compare -std=c++11
#
G++ = g++
#

all: program.exe

program.exe: program.o Alfabeto.o Conjunto_Alfabetos.o Mensaje.o Conjunto_Mensajes.o
	$(G++) -o program.exe program.o Alfabeto.o CAlfabetos.o Mensaje.o CMensajes.o

program.o: program.cc
	$(G++) -c program.cc $(opciones) -o program.o

Alfabeto.o: Alfabeto.cc
	$(G++) -c Alfabeto.cc $(opciones) -o Alfabeto.o

Conjunto_Alfabetos.o: CAlfabetos.cc
	$(G++) -c CAlfabetos.cc $(opciones) -o CAlfabetos.o

Mensaje.o: Mensaje.cc
	$(G++) -c Mensaje.cc $(opciones) -o Mensaje.o

Conjunto_Mensajes.o: CMensajes.cc
	$(G++) -c CMensajes.cc $(opciones) -o CMensajes.o

clean:
	rm -f *.o
	rm -f *.exe
	rm -f *.tar

tar: program.exe
	tar -cvf practica.tar jp-Enrique.Andujar.zip html.zip Makefile program.cc Alfabeto.cc Alfabeto.hh CAlfabetos.cc CAlfabetos.hh Mensaje.cc Mensaje.hh CMensajes.cc CMensajes.hh BinTree.hh
