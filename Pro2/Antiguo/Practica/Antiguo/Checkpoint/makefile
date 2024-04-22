all: program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o program.exe practica
program.exe: program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o
	g++-10 -o program.exe program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o -D_GLIBCXX_DEBUG
Mensaje.o: Mensaje.cc
	g++-10 -c Mensaje.cc -D_GLIBCXX_DEBUG
CMensajes.o: CMensajes.cc
	g++-10 -c CMensajes.cc -D_GLIBCXX_DEBUG
Alfabeto.o: Alfabeto.cc
	g++-10 -c Alfabeto.cc -D_GLIBCXX_DEBUG
CAlfabetos.o: CAlfabetos.cc
	g++-10 -c CAlfabetos.cc -D_GLIBCXX_DEBUG
program.o: program.cc
	g++-10 -c program.cc -D_GLIBCXX_DEBUG
practica:
	tar -cvf practica.tar makefile program.cc CAlfabetos.cc Alfabeto.cc CMensajes.cc Mensaje.cc CAlfabetos.hh Alfabeto.hh CMensajes.hh Mensaje.hh BinTree.hh
clean: 
	rm *.o
