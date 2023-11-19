# Makefile

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11

# Source files
SRCS = calculator.cpp main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable
TARGET = calculator

# Build rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

