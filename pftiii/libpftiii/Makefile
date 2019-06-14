# This software was developed at the National Institute of Standards and
# Technology (NIST) by employees of the Federal Government in the course
# of their official duties. Pursuant to title 17 Section 105 of the
# United States Code, this software is not subject to copyright protection
# and is in the public domain. NIST assumes no responsibility  whatsoever for
# its use by other parties, and makes no guarantees, expressed or implied,
# about its quality, reliability, or any other characteristic.


INC_DIR = ../include

CXXFLAGS += -fPIC -Wall -pedantic -std=c++11 -I$(INC_DIR) -DNIST_EXTERN_API_VERSION

SOURCES = libpftiii.cpp
OBJECTS = $(SOURCES:%.cpp=%.o)

LIBRARY = libpftiii

all: $(LIBRARY)

$(LIBRARY): $(OBJECTS)
ifeq ($(OS), Darwin)
	$(CXX) $(LDFLAGS) -dynamiclib $(OBJECTS) -o $(LIBRARY).dylib
else
	$(CXX) $(LDFLAGS) -shared $(OBJECTS) -o $(LIBRARY).so
endif

clean:
	$(RM) $(OBJECTS) $(LIBRARY).{so,dylib}

