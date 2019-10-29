# This software was developed at the National Institute of Standards and
# Technology (NIST) by employees of the Federal Government in the course
# of their official duties. Pursuant to title 17 Section 105 of the
# United States Code, this software is not subject to copyright protection
# and is in the public domain. NIST assumes no responsibility  whatsoever for
# its use by other parties, and makes no guarantees, expressed or implied,
# about its quality, reliability, or any other characteristic.

MINEX_LIB_DIR := .
ifeq ($(shell ls $(MINEX_LIB_DIR) | grep -c -E libminexiii_[A-Za-z0-9]\+_[0-9A-F]\{4\}\.\(a\|so\) | awk '{print $$1}'),1)
        CORE_LIB := $(shell ls $(MINEX_LIB_DIR) | grep -E libminexiii_[A-Za-z0-9]\+_[0-9A-F]\{4\}\.\(a\|so\))
	MINEX_LIB_ARGS := -L$(MINEX_LIB_DIR) -l$(patsubst lib%.so,%, $(CORE_LIB:%.a=%.so))
else
        ifeq ($(shell ls $(MINEX_LIB_DIR) | grep -c -E libminexiii_[A-Za-z0-9]\+_[0-9A-F]\{4\}\.\(a\|so\) | awk '{print $$1}'),0)
                $(error No core MINEX III library found in "$(MINEX_LIB_DIR)". Please review MINEX III naming conventions)
        else
                $(error More than one core MINEX III library found in "$(MINEX_LIB_DIR)". Please review MINEX III naming conventions)
        endif
endif


INC_DIR = ../include
LIBPFTIII_DIR = ../libpftiii

CXXFLAGS += -fPIC -Wall -pedantic -std=c++11 -I$(INC_DIR) -I.
LDFLAGS += -L$(LIBPFTIII_DIR) -lpftiii $(MINEX_LIB_ARGS)

BASENAME = pftiii_mineximpl
SOURCES = $(BASENAME).cpp
OBJECTS = $(SOURCES:%.cpp=%.o)

IDENTIFIER = $(shell grep libraryIdentifier $(BASENAME).cpp | cut -d= -f2 | tr -C -d '[:alnum:]')
VERSION = $(shell grep versionNumber $(BASENAME).cpp | cut -d= -f2 | cut -dx -f2 | tr -C -d '[:xdigit:]' | tr '[:lower:]' '[:upper:]')

LIBRARY = libpftiii_$(IDENTIFIER)_$(VERSION)

all: $(LIBRARY)

$(LIBRARY): $(OBJECTS)
ifeq ($(OS), Darwin)
	$(CXX) $(LDFLAGS) -dynamiclib $(OBJECTS) -o $(LIBRARY).dylib
else
	$(CXX) $(LDFLAGS) -shared $(OBJECTS) -o $(LIBRARY).so
endif

debug: CXXFLAGS += -g
debug: all

clean:
	$(RM) $(OBJECTS) $(LIBRARY).{so,dylib}

