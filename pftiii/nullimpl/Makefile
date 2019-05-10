# This software was developed at the National Institute of Standards and
# Technology (NIST) by employees of the Federal Government in the course
# of their official duties. Pursuant to title 17 Section 105 of the
# United States Code, this software is not subject to copyright protection
# and is in the public domain. NIST assumes no responsibility  whatsoever for
# its use by other parties, and makes no guarantees, expressed or implied,
# about its quality, reliability, or any other characteristic.


INC_DIR = ../include
LIB_DIR = ../../lib

CXXFLAGS += -fPIC -Wall -pedantic -std=c++11 -I$(INC_DIR) -I.
LDFLAGS += -L$(LIB_DIR) -lpftiii

BASENAME = pftiii_nullimpl
SOURCES = $(BASENAME).cpp
OBJECTS = $(SOURCES:%.cpp=%.o)

IDENTIFIER = $(shell grep libraryIdentifier $(BASENAME).cpp | cut -d= -f2 | cut -dx -f2 | tr -C -d '[:alnum:]')
VERSION = $(shell grep versionNumber $(BASENAME).cpp | cut -d= -f2 | cut -dx -f2 | tr -C -d '[:digit:]')


LIBRARY = libpftiii_$(IDENTIFIER)_$(VERSION)

all: $(LIBRARY)

$(LIBRARY): $(OBJECTS)
	test -d $(LIB_DIR) || mkdir $(LIB_DIR)
ifeq ($(OS), Darwin)
	$(CXX) $(LDFLAGS) -dynamiclib $(OBJECTS) -o $(LIBRARY).dylib
	cp $(LIBRARY).dylib $(LIB_DIR)
else
	$(CXX) $(LDFLAGS) -shared $(OBJECTS) -o $(LIBRARY).so
	cp $(LIBRARY).so $(LIB_DIR)
endif

clean:
	$(RM) $(OBJECTS) $(LIBRARY).{so,dylib}
	$(RM) $(LIB_DIR)/$(LIBRARY).{so,dylib}

