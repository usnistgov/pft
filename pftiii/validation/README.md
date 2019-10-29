PFT III Validation
==================

We require exercising PFT III [API] implementations with the PFT III validation
package. Validation is mutually-beneficial to NIST and PFT III participants. The
hope is that successful execution of validation ensures your algorithm:

 * runs as expected at NIST;
 * does not crash;
 * syntactically and semantically implements the [API] correctly.

This helps cut the runtime of the evaluation and gives a higher level of
confidence that the results presented by NIST are a true measure of the
submitted software.

Contents
--------
 * Interaction Required:
   - [config/]: Directory in which all configuration files required by your
     libraries reside. This directory will be read-only at runtime. Use of
     configurations is optional.
   - [lib/]: Directory in which all required libraries reside. There must be at
     least one *core* library, and that library **must** follow the PFT III
     naming convention.
   - [../libpftiii/]: Code for the shared library implementing methods
     declared in [../include/pftiii.h].
   - [../include/pftiii.h]: The PFT III [API].
   - [validate]: Script that automates running the validation and performing
     checks on the output.
 * Supporting Files
   - [README.md]: This file.
   - [src/]: Source code to build the validation executable.
   - [VERSION]: Version number of the validation package.

Requirements
------------

 * Fingerprint Imagery
   - Because organizations must agree to NIST Special Database terms and
     conditions, the required fingerprint imagery is not included in this GitHub
     repository. Download the data by requesting it from the PFT III test
     staff and [agreeing to the terms].
 * CentOS 8.0.1905
   - Even if this is not the latest version of CentOS, it will be the version
     used to run the evaluation. Direct downloads are available from the [CentOS
     Vault] ([🇺🇸 USA], [🇪🇺 Europe]). We will be using the base CentOS
     Linux distribution (frozen) **not CentOS Stream**.
   - We **highly suggest** installing this version of CentOS Linux directly from
     the ISO without a network connection so that versions of all packages
     are consistent with our operating environment.
   - The [validate] script  requires these base CentOS packages:
      - `binutils`, `centos-release`, `coreutils`, `curl`, `file`, `gawk`,
        `gcc-c++`, `grep`, `iputils`, `make`, `sed`, `which`, `yum`

It is **highly suggested** that you make sure your submission will build and run
as expected on environments as close as possible to the NIST evaluation
machines, in order to avoid validation delays. Timing statistics are reported
when run on a **Intel Xeon Gold 6140** CPU, but all Intel CPU types shall be
supported. Use of unavailable intrinsics shall degrade gracefully.

How to Run
----------
 1. Put your compiled core library and any other required libraries in [lib/].
 2. Put any required configuration files in [config/].
 3. Put PFT III fingerprint imagery received from NIST in this directory (i.e.,
    the directory containing this file, [README.md]).
 4. Execute [validate].
 5. **If successful**, sign *and* encrypt the resulting output archive in a
    single step, and e-mail it, along with the encrypting identity's public key,
    to pft@nist.gov. If unsuccessful, correct any errors described and try
    again.

<details>
  <summary><em>Expand to view the output from an example run.</em></summary>

```
$ cp /path/to/libpftiii_nullimpl_0001.so lib/
$ cp /path/to/config.txt config/
$ cp /path/to/pftiii_validation_images_*.tar.gz .
$ ./validate

PFT III Validation (201910291353) -- Tue Oct 29 14:38:45 EDT 2019
================================================================================
Checking for required packages... [OKAY]
Checking for previous validation attempts... [OKAY]
Checking validation version... (no Internet connection) [SKIP]
Checking OS and version... (CentOS 8.0.1905) [OKAY]
Checking for validation images... [DEFER]
Expanding pftiii_validation_images_201910291353.tar.gz"... [OKAY]
Checking for validation images... [OKAY]
Checking validation image versions... [OKAY]
Looking for core library... (libpftiii_nullimpl_0001.so) [OKAY]
Checking for known environment variables... [OKAY]
Building... [OKAY]
Checking API version... [OKAY]
Checking CBEFF algorithm identifiers for product owners... [OKAY]
Testing createProprietaryTemplate()... [OKAY]
Checking createProprietaryTemplate() logs... [OKAY]
Testing compareProprietaryTemplates()... [OKAY]
Checking compareProprietaryTemplates() logs... [OKAY]
Creating validation submission... (pftiii_validation_nullimpl_0001.tar.gz) [OKAY]

================================================================================
You have successfully completed the first step in PFT III validation. Please
sign and encrypt the file listed below, send it to pft@nist.gov, and
await a notification.

 -> pftiii_validation_nullimpl_0001.tar.gz

Example of signing and encrypting with GnuPG:
gpg --output pftiii_validation_nullimpl_0001.tar.gz.asc \
    --default-key jdoe@nullimpl.com \
    --recipient pft@nist.gov \
    --recipient jdoe@nullimpl.com \
    --armor --sign --encrypt \
    pftiii_validation_nullimpl_0001.tar.gz

Additionally, be sure to include the public key of the identity that signed the
validation package. This key must be the key whose key fingerprint was printed
on the PFT III application.

Example of extracting public key with GnuPG:
gpg --output nullimpl_0001_pftiii_public_key.asc --armor \
    --export jdoe@nullimpl.com
================================================================================

================================================================================
Please review the marketing and CBEFF information compiled into your library to
make sure it is correct:

 -> Feature Extraction Algorithm Marketing Identifier:
    NIST Stub Implementation Extractor 0.1
 -> Comparison Marketing Identifier:
    NIST Stub Implementation Comparator 0.1
 -> CBEFF Feature Extraction Algorithm Product Owner:
    0x000F
 -> CBEFF Feature Extraction Algorithm Identifier:
    0xFFFE
 -> CBEFF Comparison Algorithm Product Owner:
    0x000F
 -> CBEFF Comparison Algorithm Identifier:
    0xFFFE
================================================================================

================================================================================
IMPORTANT: This script was unable to check, so please ensure that you are using
the latest version of the PFT III validation package before submitting. Using
the latest version of the validation package is a requirement. You are
currently running with version 201910291353.

Information:
https://github.com/usnistgov/pft/tree/master/pftiii/validation
Version:
https://github.com/usnistgov/pft/tree/master/pftiii/validation/VERSION
Download:
https://github.com/usnistgov/pft/releases
================================================================================
Tue Oct 29 14:39:18 EDT 2019
```
</details>

Submission Contents
-------------------
 * canary.log: MD5 checksums of randomly-generated images we provide as part of
   the validation fingerprint imagery. This helps us make sure that you are
   using the most recent version of PFT III validation fingerprint imagery.
 * compareProprietaryTemplates.log: Output from the validation executable
   exercising the library in [lib/] over a set of calls to
   `compareProprietaryTemplates()`.
 * compile.log: Output from compiling the validation executable and other
   information like MD5 checksums, versions, and library dependencies that may
   help us debug your submission if an error occurs.
    - This file contains absolute paths to files on your system. If this
      information is sensitive, you may redact the paths.
 * config/: A copy of [config/].
 * createProprietaryTemplate.log: Output from the validation executable
   exercising the library in [lib/] over a set of calls to
   `createProprietaryTemplate()`.
 * id.log: Information about the linked core library. This is information
   derived from values compiled into the core library.
 * lib: A copy of [lib/].
 * run-compareProprietaryTemplates.log: The command used to launch the
   validation executable when generating `compareProprietaryTemplates.log`.
 * run-createProprietaryTemplate.log: The command used to launch the validation
   executable when generating `createProprietaryTemplate.log`.
 * templates/: The proprietary templates created, as logged in
   `createProprietaryTemplate.log`.

Checks Performed
----------------

 * Implementation can handle being `fork`ed.
 * Validation package and imagery is at most recent revision level.
 * Appropriate operating system version installed.
 * Appropriately-named PFT III core software library is present.
 * Software library links properly against the validation driver.
 * Crashes do not occur when handling various types of imagery, including
   - atypical resolutions;
   - unknown metadata;
   - non-contact imagery;
   - blank or gradient patterns.

While the validation package tries to eliminate errors from the PFT III
submission, it is not perfect, and there are still several ways in which the
package might approve you for submission that NIST may later reject.

Communication
-------------
If you found a bug and can provide steps to reliably reproduce it, or if you
have a feature request, please [open an issue]. Other questions may be addressed
to the [NIST PFT team].

The PFT team sends updates about the PFT tests to their mailing list. Enter your
e-mail address on the [mailing list site], or send a blank e-mail to
PFT+subscribe@list.nist.gov to be automatically subscribed. Posts to the list
are mirrored on an [RSS feed].

License
-------
The items in this repository are released in the public domain. See the
[LICENSE] for details.

[API]: https://pages.nist.gov/pft/doc/pftiii/api/
[CentOS Vault]: http://vault.centos.org/
[🇺🇸 USA]: http://mirror.umd.edu/8.0.1905/isos/x86_64/CentOS-8-x86_64-1905-dvd1.iso
[🇪🇺 Europe]: http://centos.mirrors.proxad.net/8.0.1905/isos/x86_64/CentOS-8-x86_64-1905-dvd1.iso
[lib/]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/lib
[../libpftiii/]: https://github.com/usnistgov/pft/blob/master/pftiii/libpftiii
[../include/pftiii.h]: https://github.com/usnistgov/pft/blob/master/pftiii/include/pftiii.h
[bin/]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/bin
[config/]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/config
[README.md]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/README.md
[src/]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/src
[VERSION]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/VERSION
[validate]: https://github.com/usnistgov/pft/blob/master/pftiii/validation/validate
[NIST PFT team]: mailto:pft@nist.gov
[open an issue]: https://github.com/usnistgov/pft/issues
[mailing list site]: https://groups.google.com/a/list.nist.gov/forum/#!forum/pft/join
[RSS feed]: https://groups.google.com/a/list.nist.gov/forum/feed/pft/msgs/rss.xml
[LICENSE]: https://github.com/usnistgov/pft/blob/master/LICENSE.md
[test plan]: https://pages.nist.gov/pft/doc/pftiii/testplan.pdf
[agreeing to the terms]: https://pages.nist.gov/pft/doc/pftiii/validation_dataset_agreement.pdf
