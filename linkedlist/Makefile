SOURCES   = main.c stats.c
HEADERS   = stats.h  
EXEBIN    = main.exe
FLAGS     = -std=c99 -Wall

all: $(EXEBIN)

$(EXEBIN) : $(SOURCES) $(HEADERS)
	gcc $(FLAGS) -o $(EXEBIN)  $(SOURCES)

clean :
	rm -f $(EXEBIN) $(OBJECTS)

check:
	valgrind --leak-check=full $(EXEBIN) 
