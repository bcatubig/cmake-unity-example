# cmake-unity-example

This is a sample project for setting up cmake with the [Unity](https://github.com/ThrowTheSwitch/Unity) test framework

## Usage

First, create a build directory for cmake

```
mkdir build
```

Next, continue to `production` or `testing` configuration

### production

```shell
cd build
cmake ../
```

### testing

```shell
cd build
cmake -D TARGET_GROUP=test ../
```

Run tests using `ctest` command
