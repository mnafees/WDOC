# WDOC

This is a sample project with a possible implementation of C++'s unique_ptr using move semantics. It also has a bash script `build.sh` that uses beautiful
colors to show the linting and building process, and gives error messages if something fails. If all goes well, then it gives the program output on the terminal!

### Dependencies
- A C++14 compatible compiler (Tested on Ubuntu 17.10 with g++ 7.2.0)
- python (Tested with python 2.7.14)

### How to use
```
$ bash build.sh
```

## Why is DevOps important for WATonomous?
Being a self-driving car project, WATonomous has a lot of different components that all come together to make the final product what it is. Given this, it is 
crucial for the deployment process to have a DevOps team which overlooks all deployment activities, as well as does testing, uses continuous integration to check
build fails and report to the respective team/person. Having a DevOps teams also means that tasks can be automated and the other teams would not have to worry 
about them.
