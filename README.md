# hello

C++ executable

## Run

### Mac

```bash
# config
$ bdep init --wipe -C ../cppget-hello-clang @clang cc config.cxx=clang++

# verify
$ bdep test
```

## Add `libhello`

### Mac

```bash
# add new lib as a package
$ bdep new --package -l c++ -t lib libhello

# initialize new package
$ cd libhello
$ bdep init -a

# verify
$ bdep test
```

## Use `hello`

### Mac

```bash
# configure
$ bpkg create -d ../tools cc     \
  config.cxx=clang++             \
  config.cc.coptions=-O3         \
  config.install.root=/usr/local \
  config.install.sudo=sudo

# build
$ cd ../tools
$ bpkg build cppget-hello@https://github.com/build2a/cppget-hello.git

# install
$ bpkg install cppget-hello
$ hello world

# uninstall
$ bpkg uninstall cppget-hello
```

To upgrade or downgrade:

```bash
bpkg fetch
$ bpkg status

$ bpkg uninstall cppget-hello
$ bpkg build cppget-hello
$ bpkg install cppget-hello
```

### Windows

```powershell
# configure package
> bpkg create -d ..\tools cc `
  config.cxx=cl              `
  config.cc.coptions=/O2     `
  config.install.root=C:\install
```
