# Using Qt with Buck

This is an example of how to use your system Qt with [Buck](https://www.buckbuild.com). 

Only  macOS is working at the moment!

If you would like to contribute support for other platforms, please send a PR. 

## Instructions

First, ensure you have Qt 5.9.0 installed: 

```bash=
brew install qt

# (Maybe)
brew switch qt 5.9.0
```

Then, to run the example: 

```bash=
buck run :example 
```
