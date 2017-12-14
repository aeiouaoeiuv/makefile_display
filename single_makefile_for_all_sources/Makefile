#
# This Makefile was modified from:
#     https://github.com/latelee/Makefile_templet/blob/master/mult_dir_project_new/Makefile
#
# usage: $ make
#        $ make CROSS_COMPILE=arm-arago-linux-gnueabi-
#
###############################################################################

# cross compile
CROSS_COMPILE =

CC = $(CROSS_COMPILE)gcc

# name of executable binary
TARGET = main

# directories of .c files, modified here if add/del directory
SOURCE_DIRS = src mod1 mod2

# directories of .h files, modified here if add/del directory
INCLUDE_DIRS = include mod1 mod2

# all .h directories
INCS = $(foreach n, $(INCLUDE_DIRS), -I./$(n))

# all .c files
SRCS = $(foreach n, $(SOURCE_DIRS), $(wildcard $(n)/*.c))

# all .o files
OBJS = $(patsubst %.c,%.o,$(SRCS))

CFLAGS =  -Wall -O2
CFLAGS += $(INCS)

LDFLAGS =

###############################################################################

ALL: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $(TARGET) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean
clean:
	-rm -rf $(TARGET) $(OBJS)

