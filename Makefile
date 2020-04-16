all: build
	exercise/exercise $GITHUB_SHA >./example-content/output.md
build: exercise/exercise.cpp
	g++ exercise/exercise.cpp -o exercise/exercise

