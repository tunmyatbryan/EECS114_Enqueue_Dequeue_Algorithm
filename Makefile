CC = g++
CFLAGS =
COPTFLAGS = -O3 -g
LDFLAGS =

default:
	@echo "=================================================="
	@echo "To build your code, use:"
	@echo "  make queue      # For queue"
	@echo "  make dlist   	  # For Doubly Linked List"
	@echo ""
	@echo "To clean this subdirectory (remove object files"
	@echo "and other junk), use:"
	@echo "  make clean"
	@echo "=================================================="

# Queue driver 
queue: queuedriver.o
	$(CC) $(COPTFLAGS) -o $@ $^

# Doubly Linked List driver
dlist: dlistdriver.o
	$(CC) $(COPTFLAGS) -o $@ $^

%.o: %.cc
	$(CC) $(CFLAGS) $(COPTFLAGS) -o $@ -c $<

clean:
	rm -f core *.o *~ queue dlist

# eof
