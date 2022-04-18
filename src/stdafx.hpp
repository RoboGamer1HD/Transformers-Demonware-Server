#ifdef _WIN32
  #include <Windows.h>          // Declarations for all of the functions in the Windows API
  #include <detours.h>          // Detours is a software package for monitoring and instrumenting API calls on Windows.
#endif

// Concepts library
#include <concepts>             // Fundamental library concepts (C++20)

// Coroutines library
#include <coroutine>            // Coroutine support library (C++20)

// Utilities library
#include <any>                  // std::any class (C++17)
#include <bitset>               // std::bitset class template
#include <chrono>               // C++ time utilites (C++11)
#include <compare>              // Three-way comparison operator support (C++20)
#include <csetjmp>              // Macro (and function) that saves (and jumps) to an execution context
#include <csignal>              // Functions and macro constants for signal management
#include <cstdarg>              // Handling of variable length argument lists
#include <cstddef>              // Standard macros and typedefs
#include <cstdlib>              // General purpose utilities: program control, dynamic memory allocation, random numbers, sort and search
#include <ctime>                // C-style time/date utilites
// #include <expected>          // std::expected class template (C++23)
#include <functional>           // Function objects, Function invocations, Bind operations and Reference wrappers
#include <initializer_list>     // std::initializer_list class template (C++11)
#include <optional>             // std::optional class template (C++17)
#include <source_location>      // Supplies means to obtain source code location (C++20)
#include <tuple>                // std::tuple class template (C++11)
#include <type_traits>          // Compile-time type information (C++11)
#include <typeindex>            // std::type_index (C++11)
#include <typeinfo>             // Runtime type information utilities
#include <utility>              // Various utility components
#include <variant>              // std::variant class template (C++17)
#include <version>              // Supplies implementation-dependent library information (C++20)

// Dynamic memory management
#include <memory>               // High-level memory management utilities
#include <memory_resource>      // Polymorphic allocators and memory resources (C++17)
#include <new>                  // Low-level memory management utilities
#include <scoped_allocator>     // Nested allocator class (C++11)

// Numeric limits
#include <cfloat>               // Limits of floating-point types
#include <cinttypes>            // Formatting macros, intmax_t and uintmax_t math and conversions (C++11)
#include <climits>              // Limits of integral types
#include <cstdint>              // Fixed-width integer types and limits of other types (C++11)
#include <limits>               // Uniform way to query properties of arithmetic types

// Error handling
#include <cassert>              // Conditionally compiled macro that compares its argument to zero
#include <cerrno>               // Macro containing the last error number
#include <exception>            // Exception handling utilities
#include <stdexcept>            // Standard exception objects
#include <system_error>         // Defines std::error_code, a platform-dependent error code (C++11)
// #include <stacktrace>           // Stacktrace library (C++23)

// Strings library
#include <cctype>               // Functions to determine the category of narrow characters
#include <charconv>             // std::to_chars and std::from_chars (C++17)
#include <cstring>              // Various narrow character string handling functions
#include <cuchar>               // C-style Unicode character conversion functions (C++11)
#include <cwchar>               // Various wide and multibyte string handling functions
#include <cwctype>              // Functions to determine the catagory of wide characters
#include <format>               // Formatting library including std::format (C++20)
#include <string>               // std::basic_string class template
#include <string_view>          // std::basic_string_view class template (C++17)

// Containers library
#include <array>                // std::array container (C++11)
#include <deque>                // std::deque container
#include <forward_list>         // std::forward_list container (C++11)
#include <list>                 // std::list container
#include <map>                  // std::map and std::multimap associative containers
#include <queue>                // std::queue and std::priority_queue container adaptors
#include <set>                  // std::set and std::multiset associative containers
#include <span>                 // std::span view (C++20)
#include <stack>                // std::stack container adaptor
#include <unordered_map>        // std::unordered_map and std::unordered_multimap unordered associative containers (C++11)
#include <unordered_set>        // std::unordered_set and std::unordered_multiset unordered associative containers (C++11)
#include <vector>               // std::vector container

//  Iterators library
#include <iterator>             // Range iterators

// Ranges library
#include <ranges>               // Range access, primitives, requirements, utilities and adaptors (C++20)

// Algorithms library
#include <algorithm>            // Algorithms that operate on ranges
#include <execution>            // Predefined execution policies for parallel versions of the algorithms (C++17)

// Numerics library
#include <bit>                  // Bit manipulation functions (C++20)
#include <cfenv>                // Floating-point environment access functions (C++11)
#include <cmath>                // Common mathematics functions
#include <complex>              // Complex number type
#include <numbers>              // Math constants (C++20)
#include <numeric>              // Numeric operations on values in ranges
#include <random>               // Random number generators and distributions (C++11)
#include <ratio>                // Compile-time rational arithmetic (C++11)
#include <valarray>             // Class for representing and manipulating arrays of values

// Localization library
#include <clocale>              // C localization utilities
// #include <codecvt>           // Unicode conversion facilities (C++11) (deprecated in C++17)
#include <locale>               // Localization utilities

// Input/output library
#include <cstdio>               // C-style input-output functions
#include <fstream>              // std::basic_fstream, std::basic_ifstream, std::basic_ofstream class templates and several typedefs
#include <iomanip>              // Helper functions to control the format of input and output
#include <ios>                  // std::ios_base class, std::basic_ios class template and several typedefs
#include <iosfwd>               // Forward declarations of all classes in the input/output library
#include <iostream>             // Several standard stream objects
#include <istream>              // std::basic_istream class template and several typedefs
#include <ostream>              // std::basic_ostream, std::basic_iostream class templates and several typedefs
// #include <spanstream>           // std::basic_spanstream, std::basic_ispanstream, std::basic_ospanstream class templates and typedefs (C++23)
#include <sstream>              // std::basic_stringstream, std::basic_istringstream, std::basic_ostringstream class templates and several typedefs
#include <streambuf>            // std::basic_streambuf class template
// #include <strstream>         // std::strstream, std::istrstream, std::ostrstream (deprecated in C++98)
#include <syncstream>           // std::basic_osyncstream, std::basic_syncbuf, and typedefs (C++20)

// Filesystem library
#include <filesystem>           // std::path class and supporting functions (C++17)

// Regular Expressions library
#include <regex>                // Classes, algorithms and iterators to support regular expression processing (C++11)

// Atomic Operations library
#include <atomic>               // Atomic operations library (C++11)

// Thread support library
#include <barrier>              // Barriers (C++20)
#include <condition_variable>   // Thread waiting conditions (C++11)
#include <future>               // Primitives for asynchronous computations (C++11)
#include <latch>                // Latches (C++20)
#include <mutex>                // Mutual exclusion primitives (C++11)
#include <semaphore>            // Semaphores (C++20)
#include <shared_mutex>         // Shared mutual exclusion primitives (C++14)
#include <stop_token>           // Stop tokens for std::jthread (C++20)
#include <thread>               // std::thread class and supporting functions (C++11)

using namespace std::literals;
