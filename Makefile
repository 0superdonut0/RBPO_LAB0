all: app.exe

app.exe: main.obj CompareStrings.obj CreatePerson.obj defperson.obj PrintPerson.obj sort.obj
	link /out:app.exe main.obj CompareStrings.obj CreatePerson.obj defperson.obj PrintPerson.obj sort.obj
main.obj: main.c Header.h
	cl /c main.c
CompareStrings.obj: CompareStrings.c
	cl /c CompareStrings.c
CreatePerson.obj: CreatePerson.c Header.h
	cl /c CreatePerson.c
defperson.obj: defperson.c Header.h
	cl /c defperson.c 
PrintPerson.obj: PrintPerson.c Header.h
	cl /c PrintPerson.c 
sort.obj: sort.c Header.h
	cl /c sort.c 
	