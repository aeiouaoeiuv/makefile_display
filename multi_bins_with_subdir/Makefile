
#export CROSS_COMPILE=arm-linux-

CC = $(CROSS_COMPILE)gcc
STRIP = $(CROSS_COMPILE)strip

CFLAGS = -Wall -O2
CFLAGS += -Iyuarel/

LDFLAGS = -Lyuarel/

LIBS = -lyuarel

C_FILES_DIR = . # current directory

SUB_DIRS = yuarel

ALL_C_FILES = $(foreach n, ${C_FILES_DIR}, $(wildcard ${n}/*.c))

ALL_BINS = $(patsubst %.c, %, ${ALL_C_FILES})
#ALL_BINS = $(patsubst %.c, %.cgi, ${ALL_C_FILES})

#####################################################################################

all: ${SUB_DIRS} ${ALL_BINS}

.c:
	${CC} ${CFLAGS} ${LDFLAGS} $< ${LIBS} -o $@
	${STRIP} $@

#%.cgi: %.c
#	${CC} ${CFLAGS} ${LDFLAGS} $< ${LIBS} -o $@
#	${STRIP} $@

${SUB_DIRS}: ECHO
	${MAKE} -C $@

ECHO:
	@echo "ECHO: ${SUB_DIRS}"

.PHONY: clean
clean:
	-rm -f $(ALL_BINS)
	-@for d in $(SUB_DIRS); do (cd $$d; $(MAKE) clean); done

