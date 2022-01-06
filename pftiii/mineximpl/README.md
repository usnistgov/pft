PFT III MINEX Implementation
============================

This directory contains code to implement a library *syntatically*-compliant
with the PFT III [API] by starting with a compiled [MINEX III] library. **Please
note** that PFT III tests images of varying resolutions, dimensions, and
impressions types, while MINEX III only evaluates 500 PPI plain images with
known minimum and maximum dimensions. This means that a strict MINEX III
implementation will **_not be suitable_** for submission. It is, however, a
decent starting point for becoming familiar with the PFT III [API].

Building
--------
 1. Copy a MINEX III compliant library and all dependent libraries into this
    directory.
 2. Change the implementation of `getIdentification()` in
    [`pftiii_mineximpl.cpp`] to indicate your desired name.
 3. Ensure that you have already built [`libpftiii`], or execute `make -C
    ../libpftiii`.
 4. Execute `make`.

A library, `libpftiii_[IDENTIFIER]_[VERSION].so`, will be built in the current
directory. It will be dependent on the MINEX III library provided. These
libraries may now be linked to PFT III testing code, including the PFT III
[validation].
Execute `make` in this directory to create `libpftiii_nullimpl_0001.so`. Linking
requires that you already built [`libpftiii`].

The `Makefile` extracts the name and version number for the library to be built
from within the C++ source.

Communication
-------------
If you found a bug and can provide steps to reliably reproduce it, or if you
have a feature request, please [open an issue]. Other questions may be addressed
to the [NIST PFT team].

The PFT team sends updates about the PFT tests to their mailing list. Enter your
e-mail address on the [mailing list site], or send a blank e-mail to
PFT+subscribe@list.nist.gov to be automatically subscribed.

License
-------
The items in this repository are released in the public domain. See the
[LICENSE] for details.

[`libpftiii`]: https://github.com/usnistgov/pft/blob/master/pftiii/libpftiii
[NIST PFT team]: mailto:pft@nist.gov
[open an issue]: https://github.com/usnistgov/pft/issues
[LICENSE]: https://github.com/usnistgov/pft/blob/master/LICENSE.md
[API]: https://pages.nist.gov/pft/doc/pftiii/api
[`pftiii_mineximpl.cpp`]: https://github.com/usnistgov/pft/blob/master/pftiii/mineximpl/pftiii_mineximpl.cpp
[validation]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/
[mailing list site]: https://groups.google.com/a/list.nist.gov/forum/#!forum/pft/join
[MINEX III]: https://nist.gov/itl/iad/ig/minexiii
