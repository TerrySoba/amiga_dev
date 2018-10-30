SCRIPTDIR=$(dirname $0)
ABS_PATH=$(realpath $SCRIPTDIR)
docker run -v "$ABS_PATH"/src:/src -t yoshi252/amiga_68k_build_toolchain sh -c "cd /src && make"