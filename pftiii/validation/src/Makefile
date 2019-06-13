# This software was developed at the National Institute of Standards and
# Technology (NIST) by employees of the Federal Government in the course
# of their official duties. Pursuant to title 17 Section 105 of the
# United States Code, this software is not subject to copyright protection
# and is in the public domain. NIST assumes no responsibility  whatsoever for
# its use by other parties, and makes no guarantees, expressed or implied,
# about its quality, reliability, or any other characteristic.


INC_DIR = ../../include
LIB_DIR = ../lib
BIN_DIR = ../bin

LIB_PREFIX = libpftiii_
ifeq ($(shell ls $(LIB_DIR) | grep -E $(LIB_PREFIX)[A-Za-z0-9]\+_\([0-9A-Fa-f]\+\|[0-9A-Fa-f]\{4\}\)\.\(so\|dylib\) | wc -l | awk '{print $$1}'),1)
        CORE_LIB := $(shell ls $(LIB_DIR) | grep -E $(LIB_PREFIX)[A-Za-z0-9]\+_\([0-9A-Fa-f]\+\|[0-9A-Fa-f]\{4\}\)\.\(so\|dylib\))
else
        ifeq ($(shell ls $(LIB_DIR) | grep -E $(LIB_PREFIX)[A-Za-z0-9]\+_\([0-9A-Fa-f]\+\|[0-9A-Fa-f]\{4\}\)\.\(so\|dylib\) | wc -l | awk '{print $$1}'),0)
                $(error No core library found in $(LIB_DIR). Please review the PFT III naming conventions)
        else
                $(error More than one core library found in $(LIB_DIR). Please review PFT III naming conventions)
        endif
endif
ifeq ($(CORE_LIB), )
        $(error You did not place your libraries in $(LIB_DIR))
endif

CXXFLAGS += -Wall -pedantic -std=c++11 -I$(INC_DIR) -I. -O3 -DNIST_EXTERN_API_VERSION
LDFLAGS += -L$(LIB_DIR) -lpftiii -l$(patsubst lib%.so,%,$(CORE_LIB)) -Wl,-rpath,$(shell cd $(LIB_DIR) && pwd -P)


BINARY = pftiii_validation
SOURCES = $(BINARY).cpp
OBJECTS = $(SOURCES:%.cpp=%.o)

all: $(BINARY)

debug: CXXFLAGS += -g
debug: all

$(BINARY): $(OBJECTS)
	$(MAKE) -C ../../libpftiii
	mkdir -p $(BIN_DIR)
	$(CXX) $(LDFLAGS) $(OBJECTS) -o $(BIN_DIR)/$(BINARY)

clean:
	$(MAKE) -C ../../libpftiii clean
	$(RM) $(OBJECTS) $(BIN_DIR)/$(BINARY)
	$(RM) -r $(BIN_DIR)
