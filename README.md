**Dependencies**

|      Name      |         Description         |                    Link                    |
|:-------------- |:--------------------------- |:------------------------------------------ |
| json           | JSON for Modern C++         | https://github.com/nlohmann/json           |
| googletest     | Google's C++ test framework | https://github.com/google/googletest 


----------

**How-to compile & run**

Clone the project with all of its submodules
1. ```git clone git@github.com:dvasiliauskas/cpp_starter.git --recurse-submodules```

NOTE: By default the `TESTING_ENABLED` flag is set to `0`, if you wish to run tests set the flag to `1` 

----------
**Generate code coverage report**
1. ```cmake CMakeLists.txt```
2. ```make```
3. ```./generate_code_coverage.sh```


