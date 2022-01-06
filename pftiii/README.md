PFT III
=======

Proprietary Fingerprint Template Evaluation (PFT) III is a public test of
one-to-one fingerprint matching using proprietary fingerprint templates. In
PFT III, fingerprint images of varying sizes and resolutions capture from a
variety of devices are provided to a proprietary feature extraction algorithm.
The algorithm returns a proprietary representation of the fingerprint

Contents
--------
- [`libpftiii`]
   - Library containing required implementations of methods from the
     [PFT III API]. Submitted libraries must link against **but not include**
     this library.
- [mineximpl]
   - Starter code that wraps the MINEX III API with the PFT III API.
- [nullimpl]
   - A stub library compliant with the [PFT III API] that can be used as a
     starting point for development.
- [validation]
   - Package used to verify and submit PFT III libraries for testing at NIST.

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

[validation]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/
[`libpftiii`]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/libpftiii
[nullimpl]: https://github.com/usnistgov/pft/tree/master/pftiii/nullimpl
[mineximpl]: https://github.com/usnistgov/pft/tree/master/pftiii/mineximpl
[PFT III API]: https://pages.nist.gov/pft/doc/pftiii/api
[open an issue]: https://github.com/usnistgov/pft/issues
[mailing list site]: https://groups.google.com/a/list.nist.gov/forum/#!forum/pft/join
[LICENSE]: https://github.com/usnistgov/pft/blob/master/LICENSE.md
[NIST PFT team]: mailto:pft@nist.gov
