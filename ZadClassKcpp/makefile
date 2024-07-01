CXX = g++

CXXFLAGS = -std=c++11 -Wall

SRCDIR = src
INCDIR = include
BINDIR = bin
OBJDIR = obj

SOURCES = $(wildcard $(SRCDIR)/*.cc)

OBJECTS = $(patsubst $(SRCDIR)/%.cc,$(OBJDIR)/%.o,$(SOURCES))

TARGET = $(BINDIR)/main

all: $(TARGET)

$(OBJDIR)/%.o: $(SRCDIR)/%.cc
    @mkdir -p $(OBJDIR)
    $(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

$(TARGET): $(OBJECTS)
    @mkdir -p $(BINDIR)
    $(CXX) $(CXXFLAGS) $^ -o $(TARGET)

clean:
    @rm -rf $(OBJDIR) $(BINDIR)

.PHONY: clean
