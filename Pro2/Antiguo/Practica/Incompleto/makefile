all: Program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o Program
Program: Program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o
	g++ -o Program.exe Program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o
Mensaje.o: Mensaje.cc
	g++ -c Mensaje.cc
CMensajes.o: CMensajes.cc
	g++ -c CMensajes.cc
Alfabeto.o: Alfabeto.cc
	g++ -c Alfabeto.cc
CAlfabetos.o: CAlfabetos.cc
	g++ -c CAlfabetos.cc
Program.o: Program.cc
	g++ -c Program.cc
rm: *o
