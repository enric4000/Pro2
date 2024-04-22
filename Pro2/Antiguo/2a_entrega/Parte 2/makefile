all: Program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o Program
Program: Program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o
	p2++ -o Program.exe Program.o CAlfabetos.o Alfabeto.o CMensajes.o Mensaje.o
Mensaje.o: Mensaje.cc
	p2++ -c Mensaje.cc
CMensajes.o: CMensajes.cc
	p2++ -c CMensajes.cc
Alfabeto.o: Alfabeto.cc
	p2++ -c Alfabeto.cc
CAlfabetos.o: CAlfabetos.cc
	p2++ -c CAlfabetos.cc
Program.o: Program.cc
	p2++ -c Program.cc
rm: *o
