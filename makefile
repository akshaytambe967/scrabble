#variable declaration :-
cc=gcc     
MAKE=make
RM =rm

#Flags
FLAG = -Wall


#targets .
all: sc.c
	$(cc) $(FLAG) -o scrable sc.c	
	
	$(MAKE) here	


#another target for client
here:
	./scrable  


clean:server client
	$(RM) *.o
