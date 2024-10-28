CXX = g++
CXXFLAGS = -std=c++17

TARGET = CYG

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

RM = rm -f
ifeq ($(OS), Windows_NT)
    RM = del /Q
    TARGET := $(TARGET).exe
endif

all: build

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

build: $(TARGET)
	@$(RM) $(OBJ)

clean:
	$(RM) $(OBJ) $(TARGET)
