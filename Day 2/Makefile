# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Target executable
TARGET = day2

# Source files
SRC = day2.cpp

# Build rules
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean rule
clean:
	rm -f $(TARGET)