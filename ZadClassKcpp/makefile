CXX = g++
CXXFLAGS = -Iinclude -std=c++11

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
EXECUTABLE = main

all: $(BINDIR)/$(EXECUTABLE)

$(BINDIR)/$(EXECUTABLE): $(OBJECTS)
	mkdir -p $(BINDIR)
	$(CXX) $(OBJECTS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(BINDIR)
