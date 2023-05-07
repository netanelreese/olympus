CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = -lraylib
SRC_DIR = src
ASSETS_DIR = assets
BUILD_DIR = build
BIN = my-game

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
ASSET_FILES = $(wildcard $(ASSETS_DIR)/*)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC_FILES))

.PHONY: all clean run

all: $(BIN)

$(BIN): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(ASSETS_DIR)/%.png: | $(ASSETS_DIR)
$(ASSETS_DIR)/%.ttf: | $(ASSETS_DIR)
$(ASSETS_DIR)/%.wav: | $(ASSETS_DIR)

$(ASSETS_DIR):
	mkdir -p $(ASSETS_DIR)

clean:
	rm -rf $(BUILD_DIR) $(BIN)

run: $(BIN) $(ASSET_FILES)
	./$(BIN)


