# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++20

# Target executable
TARGET = day1p

# Source files
SRC = day1p2.cpp

# Build rules
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean rule
clean:
	rm -f $(TARGET)