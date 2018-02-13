#!/bin/sh

echo "Generating code coverage report."
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"    

cd "$DIR/CMakeFiles/cpp_ca2.dir"

gcov main.gcno
lcov --capture --directory . --output-file LCOVOUTPUT.info
genhtml LCOVOUTPUT.info --output-directory CODE_COVERAGE

cd "CODE_COVERAGE"
firefox index.html

