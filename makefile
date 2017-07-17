# Object files to either reference or create                          
OBJECTS=FavouritesView.o main.o
# The executable file that will be created at the end                 
EXEC=methodPointerMap
# The flags to use for compilation                                    
CXXFLAGS=-Wall -std=c++0x
# The code compiler to use for compilation                            
CC=g++
# Perform action on all object files (May or may not exist)           
all: $(OBJECTS)                                                       
	$(CC) -o $(EXEC) $(OBJECTS)
