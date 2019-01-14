# cmake_protobuf_example
Hello world example for a cmake C++ project that includes a protobuf file.

## Dependencies
```
apt install git cmake protobuf-compiler libprotobuf-dev
```

## Build
```
mkdir build && cd build
cmake ..
make
./bar
```
`bar` should dump out a serialized protobuf message called baz in the current dir.

## References
 - [CMake ProtoBuf docs](https://cmake.org/cmake/help/v3.9/module/FindProtobuf.html)
 - [ProtoBuf C++ Tutorial from Google](https://developers.google.com/protocol-buffers/docs/cpptutorial)