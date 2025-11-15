# C++ Exercise Collection

To configure and build every target run:

```bash
cmake -S . -B build
cmake --build build
```

Once built, individual binaries live under `build/<target>`;

You can also work inside a particular exercise directory (e.g.
`BinaryOperations`) if you only want to configure that subset, but using the
top-level build keeps everything consistent.
