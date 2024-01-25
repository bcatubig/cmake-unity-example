# cmake-unity-example

This is a sample project for setting up cmake with the [Unity](https://github.com/ThrowTheSwitch/Unity) test framework

## Usage

```shell
mkdir build

cd build
```

### prod

```shell
cmake ../
```

### testing

```shell
cmake -D TARGET_GROUP=test ../
```

Run tests using `ctest` command
