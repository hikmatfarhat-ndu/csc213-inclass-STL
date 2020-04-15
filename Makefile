all: build
	exercise/exercise >./example-content/output.md
build: exercise/exercise.cpp
	g++ exercise/exercise.cpp -o exercise/exercise

