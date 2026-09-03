# brotli for bake

[brotli](https://github.com/google/brotli) 1.1.0, packaged for
[bake](https://github.com/Ariaszzzhc/bake). Static library (common +
encode + decode), C.

## Use

```bash
bake add https://github.com/bake-pkgs/brotli --tag v1.1.0 brotli
```

```toml
[dependencies]
brotli = { url = "https://github.com/bake-pkgs/brotli", tag = "v1.1.0" }
```

```c
#include <brotli/encode.h>
#include <brotli/decode.h>
```

Built from the pinned upstream release archive; brotli needs no build
configuration. The `brotli` CLI tool is not part of the port.
License: MIT (upstream).
