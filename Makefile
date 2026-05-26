CC=gcd
CFLAGS=-Wall

BIN_DIR=bin
OBJ_DIR=obj

TARGET=$(BIN_DIR)/shusseki_kakunin

SRCS=$(wildcard*.c)

OBJS = $(patsubst %.c, $(OBJ_DIR)/%.o, $(SRCS))

$(info [確認] 見つかったソース: $(SRCS))
$(info [確認] 作成するオブジェクト: $(OBJS))

.PHONY: all clean
all: $(TARGET)

$(TARGET): $(OBJS)
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJS): $(OBJ_DIR)/%.o: %.c
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS): calc.h

