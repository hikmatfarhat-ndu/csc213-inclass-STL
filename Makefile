all: build
	exercise/exercise
build: exercise/exercise.cpp
	g++ exercise/exercise.cpp -o exercise/exercise

