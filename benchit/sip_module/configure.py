import os
import sipconfig
from PyQt5 import QtCore

# The name of the SIP build file generated by SIP and used by the build
# system.

# run `find . -name "qstring.*"` at `/usr`
# directory of `qstring.sip` is the `sip_inc_dir`
sip_inc_dir = "/usr/share/sip/PyQt5/"
# directory of `qstring.h` is the `qt5_inc_dir`
qt5_inc_dir = "/usr/include/x86_64-linux-gnu/qt5/"

lib_name = "sipSimpleCPPLib"
build_file = "{}.sbf".format(lib_name)

# Get the SIP configuration information.
config = sipconfig.Configuration()

os.system(" ".join([
    "cd", "..", "&&",
    "make", "libsomeclass"
]))

# Run SIP to generate the code.
os.system(" ".join([
    # using sip binary
    config.sip_bin,

    # in the current directory as root
    "-c", ".",

    # generate the build file
    "-b", build_file,

    # including these headers (contain Qt SIP definitions)
    "-I{}".format(sip_inc_dir),

    # Match installed PyQt configuration
    QtCore.PYQT_CONFIGURATION["sip_flags"],

    # name of the library to generate
    "{}.sip".format(lib_name)
]))
target_dir = os.path.abspath(os.getcwd() + "/../")

# Create the Makefile.
makefile = sipconfig.SIPModuleMakefile(config, build_file)

extra_flags = "-O3 -std=c++11 -I{} -I{}/QtCore -DQT_NO_VERSION_TAGGING".format(qt5_inc_dir, qt5_inc_dir)
makefile.extra_cflags = [extra_flags]
makefile.extra_cxxflags = [extra_flags]
makefile.extra_lib_dirs = [target_dir]
makefile.extra_libs = ["someclass"]
# Extra libraries to be linked. Their source needs to be
# added to `makefile.extra_lib_dirs` if not on LD_LIBRARY_PATH

makefile.generate()

# makefile.extra_lflags = ["-Wl,-R{}".format(target_dir), "-Wl,-R{}".format(custom_lib_dir)]
# Generate the Makefile itself.