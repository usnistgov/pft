PFT III Null Implementation
===========================

This directory contains example code that could be used as a starting point for
a PFT III [API] implementation.

Building
--------
```
mkdir build && cd build
cmake .. && make
```

The CMake configuration extracts the name and version number for the library to
be built from within the C++ source.

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
[mailing list site]: https://groups.google.com/a/list.nist.gov/forum/#!forum/pft/join
[LICENSE]: https://github.com/usnistgov/pft/blob/master/LICENSE.md
[API]: https://pages.nist.gov/pft/doc/pftiii/api
