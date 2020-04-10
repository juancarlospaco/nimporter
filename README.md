# Nimporter

![License](https://img.shields.io/github/license/Pebaz/Nimporter)

Compile [Nim](<https://nim-lang.org/>) extensions for Python on import automatically!

## What is Nimporter

> With Nimporter, you can simply import Nim source code files *as if they
were Python modules*, and use them seamlessly with Python code.

## Possible Benefits

 * Seamless integration with existing Nim code by using the
   [Nimpy](https://github.com/yglukhov/nimpy) library.
 * Very low effort to create high-performance Python extensions using Nim.
 * Leverage both language's ecosystems: Python for breadth, Nim for performance.

## Installation

```bash
$ pip install nimporter
```

Dependencies:

 1. [Nim Compiler](<https://nim-lang.org/install.html>) (for compiling Nim
 source files)
 2. [Nimpy library](https://github.com/yglukhov/nimpy) (Installed automatically)
 3. [Nimporter library](https://github.com/Pebaz/nimporter) (distributed
 libraries will need access to Nimporter).

## About

Nimporter provides an official way to develop applications and libraries that
make use of Nim code for achieving higher performance.

It does this by providing a way to directly import Nim code and have it be
compiled at runtime. However, unlink Cython, this will not proliferate your
development environment and require adding bunches of exceptions to your
`.gitignore` file.

All artifacts are stored in their respective `__pycache__` directories. Builds
are cached so that subsequent imports do not trigger a rebuild.

Nimporter allows you to treat Nim files exactly like Python modules. This means
that namespacing is maintained for package heirarchies.

Does Nimporter support single-file Nim modules only? No, Nimporter allows you to
treat an entire Nim project as a single module. The project must contain a
`.nimble` file that is used to build the project into a single library. Since
`.nimble` files are supported, this means that they can rely on Nim dependencies
and still be imported and compiled at runtime.

Have a complex build requirement that would normally entail tweaking Nim
compiler switches for each supported platform? Nimporter fully supports adding a
`switches.py` file for libraries that need to customize the CLI flags for any
platform seamlessly for both developing and bundling extensions.

Since Nimporter relies on [Nimpy](https://github.com/yglukhov/nimpy) for Nim <->
Python interaction, it is a required dependency during development for every
module and library. Nimporter ensures that this is installed prior to every
compilation so that users do not have a separate `nimble install nimpy` step.

Additionally, for users who do not have access or are not interested in
installing a Nim compiler, Nimporter makes distribution effortless.

After creating an entire project with many Python and Nim modules/libraries in a
deeply-nested package heirarchy, Nimporter allows you to bundle all of this into
a single wheel just as you would with Python.

To do this, you need to add a single line to your `setup.py`:

```python
from setuptools import setup
import nimporter

setup(
    ...,

    # This is all the effort required to bundle all Nim modules/libraries
    ext_modules=nimporter.build_nim_extensions()
)
```

> Please note that the official distribution mechanism only requires a single
line of code.

Additionally, all namespaces are preserved in the built extensions and end-users
can merely install the resulting wheel containing the binary artifacts without
compiling on the target machine.

In summary, Nimporter is a library that allows you to use Nim along with Python
effortlessly by exposing two very simple APIs:

```python
import nimporter  # Required prior to any Nim module import

# 1. Import Nim code directly
import my_nim_module

# 2. Find, build, and bundle all Nim extensions automatically
nimporter.build_nim_extensions()
```

*How much simpler could it possibly get?*

---

### Quick Example

```nim
# nim_math.nim

import nimpy

proc add(a: int, b: int): int {.exportpy.} =
    return a + b
```

```python
# Nimporter is needed prior to importing any Nim code
import nimporter, nim_math

print(nim_math.add(2, 4))  # 6
```

### Documentation

For tutorials, advanced usage, and more, head over to the
[Wiki](<https://github.com/Pebaz/nimporter/wiki>).

Generated documentation can be found
[here](https://pebaz.github.io/nimporter/index.html).

For a bunch of little examples, look in the `examples/` directory. For more
rigorous examples testing every feature of Nimporter, you can take a look at the
files within the `tests/` directory.





### Distributing Libraries Using Nimporter



PLEASE NOTE THAT NIMPORTER WILL NEED TO REMAIN A DEPENDENCY OF ANY PROJECT THAT
MAKES USE OF DISTRIBUTING NIM EXTENSIONS.



NIMPORTER CLI













#### Binary Distributions


#### Source Distributions

Source distributions allow users to bundle Nim files so that end-users can
compile them upon import just how they would during normal development.

The only supported way of providing a source distribution is to bundle the Nim
files along with the Python source files.


#### Publish Build Artifacts to PyPi Automatically

Since binary distributions allow Nimporter libraries to be distributed without
requiring a Nim compiler, the will be most often used. However, building for
each platform can be tedious. For a dead-simple way to publish Windows, MacOS,
and Linux wheels to PyPi automatically, use the `` template found in the
`examples/` directory.

when new releases are created on GitHub


Libraries that require Nim source files can easily distribute those files by
adding the following to their `setup.py` file:

```python
setup(
    name='Foo',                     # Keep your existing arguments
    version='0.1.0',
    ...,
    package_data={'': ['*.nim']},   # Distribute Nim source files
    include_package_data=True,
    install_requires=['nimporter']  # Depends upon Nimporter
)
```

When creating a source distribution, the Nim source files will be included along
with the normal Python files it uses.

### Nimporter Command Line Interface

Nimporter provides a CLI that you can use to easily clean all cached build and
hash files from your project recursively. This can be very useful for debugging
situations arising from stale builds.

Usage example:

```bash
# Recursively removes all hashes and cached builds
$ nimporter clean
```

Additionally, the CLI can also be used like a compiler to produce a binary
extension (`.pyd` and `.so`) from a given Nim file.

```bash
# Stores build in __pycache__
# Can be imported by first importing nimporter
$ nimporter build file.nim

# Stores build in current dir
$ nimporter build file.nim --dest .

# Same 2 examples but for Nim libraries
$ nimporter build mylib
$ nimporter build mylib --dest .

# Although you can specify a Nim library's source file, please don't
$ nimporter build mylib/mylib.nim
```

### Code Quality

There are ***44 unit tests*** and ***5 integration tests*** to make sure that
Nimporter performs as advertised.

In addition, Nimporter has ***94% code coverage*** so a host of bugs have already been
caught and dealt with in a manner befitting their wretched existence.

Lastly, it has been tested and fully supported on these platforms:

* **Windows 10**
* **MacOS Mojave**
* **Linux**

> Just for fun, I got out my Windows laptop, Mac, and SSHed into a Linux box on
AWS. I then ran the test suite on all 3 platforms simultaneously. ;)

Nimporter likely works on a bunch of other platforms but I cannot justify the
time required to test them at this point.

#### Running The Tests

To run these on your local machine, you will need to install a Nim compiler.

This example will assume you are cloning the GitHub reposotory.

```bash
$ git clone https://github.com/Pebaz/Nimporter
$ cd Nimporter
$ pip install -r requirements.txt
$ pytest --cov=. --cov-report=html tests
```

### How Does It Work?

Nimporter provides essentially two capabilities:

* The ability to directly import Nim code
* The ability to bundle Python-compatible extensions for any supported platform

The way it accomplishes the ability to import Nim code is by adding two custom
importers to the Python import machinery.

The first one is for the ability to search and import Nim modules. When a Nim
module is found, Nimporter first looks in the `__pycache__` directory to see if
there is already a built version of the module. If there is not, it builds a new
one and stores it in the `__pycache__` directory.

If one is found, it could be stale meaning the Nim file could have been modified
since it was built. To keep track of this, a hash of the source file is also
kept in the `__pycache__` directory and is consulted whenever there is a
possibility that a stale build could be imported.

When a Nim module and a Python module have the same name and reside in the same
folder, the Python module is given precedence. *Please don't do this.*

The second custom importer has the exact same purpose of the first one except it
is used to import Nim extension libraries. A library is any folder within a
Python project that contains a `<lib name>.nim` and a `<lib name>.nimble` file.

These files mark that the folder should be treated as one unit. It also makes it
so that Nimble dependencies can be installed.

As for the second capability, Nimporter helps you bundle and distribute Nim code
as part of a binary distribution extremely easily.

The way it works is by iterating through your entire project and identifying any
Nim module and Nim library that it finds and compiling them to C using a feature
of Nim that specifically supports this.

Why compile to C? Because Python already has extensive infrastructure to support
the compilation and distribution of C extensions.

Once they are compiled to C, they are compiled the exact same as how you would
normally compile a C extension. These extensions are then bundled into the
resulting binary distribution and can be uploaded to PyPi or similar.

Are source distributions supported? Yes and no. They are officially supported
for bundling the Nim source files themselves into the archive, but not the C
source files. Although the C source files would be a better alternative, the C
files generated by Nim are platform specific, so they would only be of use to
users on the same exact platform and architecture. This is why the official way
of distributing Nimporter libraries is by creating binary wheels.

### State Of The Project

I have implemented all of the features that I wanted to add at this time. I made
sure to validate the effectiveness of each feature with the unit and integration
tests. This project should be considered "done" and will receive no further
enhancements except for bug fixes and patches. You can submit a bug report on
Nimporter's [GitHub Issues](https://github.com/Pebaz/nimporter/issues) page.

### Contributing

Although I would not seek to add any new features to Nimporter, there may exist
certain modifications that would enhance the effectiveness of Nimporter's core
features. Pull requests are welcome, especially for fixing bugs.

### Stargazers over time

[![Stargazers over time](https://starchart.cc/Pebaz/nimporter.svg)](https://starchart.cc/Pebaz/nimporter)

> Made using <https://starchart.cc/>
