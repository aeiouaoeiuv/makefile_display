
#CROSS_COMPILE = arm-linux-

TARGET = libyuarel.a

CC = $(CROSS_COMPILE)gcc
STRIP = $(CROSS_COMPILE)strip
AR = $(CROSS_COMPILE)ar

CFLAGS = -Wall -O2
CFLAGS += -I./
CFLAGS += -shared -fPIC

LDFLAGS =

ALL_C_FILES = $(wildcard *.c)
ALL_OBJS = $(patsubst %.c, %.o, ${ALL_C_FILES})

#####################################################################################

all: ${ALL_OBJS}
	${AR} -cr ${TARGET} ${ALL_OBJS}

.PHONY: clean
clean:
	-rm -f ${ALL_OBJS} ${TARGET}
