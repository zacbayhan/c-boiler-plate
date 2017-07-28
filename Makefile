OBJS := main.o options.o

EXECUTABLE := options

SRCDIR := objFiles

# choose compiler:
# CC := mpiicc
CC := gcc

# choose flags:
# flags for Intel compiler icc on maya:
# CFLAGS := -O3 -std=c99 -Wall -mkl
# flags for Portland Group compiler pgcc on maya:
# CFLAGS := -O3 -c99 -Minform=warn -fastsse
# flags for GNU compiler gcc anywhere:
CFLAGS := -O3 -std=c99 -Wall -Wno-unused-variable

DEFS :=
INCLUDES :=
LDFLAGS := -lm

%.o: %.c %.h
	$(CC) $(CFLAGS) $(DEFS) $(INCLUDES) -c $< -o $@

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $(DEFS) $(INCLUDES) $(OBJS) -o $@ $(LDFLAGS)

clean:
	mkdir -p $(SRCDIR)
	mv *.o $(SRCDIR)/
	-rm -f *.o

clean_all:
	-rm -f *.o $(EXECUTABLE)
	@rm -rf $(SRCDIR)


quick:
	@cp $(RESDIR)/* $(TARGETDIR)/
