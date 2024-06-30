# Kompilator C++
CXX = g++

# Flagi kompilatora
CXXFLAGS = -std=c++11 -Wall

# Katalogi projektu
SRCDIR = src
INCDIR = include
BINDIR = bin
OBJDIR = obj

# Lista plików źródłowych
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Lista plików obiektowych
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

# Nazwa pliku wykonywalnego
TARGET = $(BINDIR)/main

# Domyślne zadanie (kompilacja i uruchomienie)
all: $(TARGET)

# Zależności plików obiektowych od plików źródłowych
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
    @mkdir -p $(OBJDIR)
    $(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

# Kompilacja programu
$(TARGET): $(OBJECTS)
    @mkdir -p $(BINDIR)
    $(CXX) $(CXXFLAGS) $^ -o $(TARGET)

# Czyszczenie plików tymczasowych i wynikowych
clean:
    @rm -rf $(OBJDIR) $(BINDIR)

# Reguła .PHONY zapewnia, że clean będzie zawsze wykonane, nawet gdy istnieje plik o tej samej nazwie.
.PHONY: clean
