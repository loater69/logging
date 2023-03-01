# Logging

A simple library for c++ logging.

## How to use

To start, simply instantiate a logger class:

```c++
logging::logger logger("log.log");
```

Use `operator << (std::ostream& stream)` to log anything you can output with `std::cout` (or std::cerr, std::clog).

```c++
logger << "lorem ipsum\n";
```
