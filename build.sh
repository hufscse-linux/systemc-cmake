rm -rf build
mkdir -p build
cd build
cmake ..
make

pkg-config --cflags --libs systemc
