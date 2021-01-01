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
