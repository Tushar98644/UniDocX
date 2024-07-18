# Variables
CXX = clang++
CXXFLAGS = -Iinclude -Wall -Wextra -std=c++17
SRCDIR = src
BINDIR = bin
CMDDIR = cmd

# Source files
SOURCES = $(SRCDIR)/ReportFactory.cpp $(SRCDIR)/InvoiceFactory.cpp $(CMDDIR)/main.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Output executable
EXECUTABLE = $(BINDIR)/main

# Default target
all: $(EXECUTABLE) clean_executables

# Rule to build the executable
$(EXECUTABLE): $(OBJECTS) | $(BINDIR)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create bin directory if it does not exist
$(BINDIR):
	mkdir -p $(BINDIR)

# Clean up build files
clean:
	rm -f $(SRCDIR)/*.o $(EXECUTABLE)

.PHONY: all clean