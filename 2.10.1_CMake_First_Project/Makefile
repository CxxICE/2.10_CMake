SRC = .
TARGET = "$(CURDIR)_build"
COMP = cmake

all: MSVS
	
MSVS:
	$(COMP) -S $(SRC) -B $(TARGET) -G "Visual Studio 17 2022"
	
minGW:
	$(COMP) -S $(SRC) -B $(TARGET) -G "MinGW Makefiles"
	
build:
	$(COMP) --build $(TARGET) --config Debug
#	$(COMP) --build $(TARGET) --config Release

	

	

	
	

