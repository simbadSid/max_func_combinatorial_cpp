# TODO


## TODO

## Build and test
This project uses the CMake framework.
In order to build the project, we need to run the following command
```
mkdir bin
cd bin
cmake ../
make;
```

Building the project results in generating the following executable files:
* __bin/main\<scenarioName\>__: TODO
* __bin/main\<scenarioName\>verbose__: TODO

In order to test the functional correctness of our algorithms, we have implemented a set of unit tests.
These tests may be run using:
```
cd bin
cmake ../
make;
ctes
```
The test framework that we used (CTest) is integrated within the CMake framework and requires no external installation.