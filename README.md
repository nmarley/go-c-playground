# go-c-playground

> Playing w/Go, C, CGO, etc.

Original code from <http://blog.ralch.com/tutorial/golang-sharing-libraries/>.

## Install

```sh
# if using OSX, ensure the proper `ar` and `clang` is first in $PATH:
PATH=/usr/bin:$PATH
make
```

## Usage

```sh
./a.out
# Hello, Jack!

./a.out Nate
# Hello, Nate!
```

To clean up temp files:

```sh
make clean
```

## License

[ISC](LICENSE)
