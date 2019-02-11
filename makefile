GO=go
CXX=clang++
CC=clang
AR=/usr/bin/ar

a.out: main.c nautilus.a
	$(CC) main.c nautilus.a

nautilus.a: nautilus.go
	$(GO) build -buildmode=c-archive -o $@ nautilus.go

clean:
	rm -f nautilus.a nautilus.h a.out
