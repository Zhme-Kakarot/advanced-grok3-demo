# Acknowledgements

    Grok (xAI): For designing the curriculum and demo code.
    Community: For inspiration and future feedback.

Follow my progress here as I work toward mastering advanced C++!

---

# Advanced C++ Study with Grok

This repository tracks my journey to master advanced C++ concepts, guided by Grok (created by xAI). The goal is to build a strong foundation in modern C++ (C++11 through C++23) by working toward an "extremely advanced" demo program. The curriculum and assignments are designed to incrementally develop skills in template metaprogramming, concepts, parallel execution, and more, with the final target code provided in `demo.cpp`.

---

## Table of Contents
- [Target Demo](#target-demo)
- [Curriculum](#curriculum)
- [Assignments](#assignments)
- [Setup Instructions](#setup-instructions)
- [Progress Tracking](#progress-tracking)
- [Acknowledgements](#acknowledgements)

---

## Target Demo
The file `demo.cpp` contains the "extremely advanced" C++ program I’m working toward. It integrates:
- Compile-time power calculation with templates.
- C++20 concepts for type safety.
- Parallel execution with `std::execution::par`.
- Modern ranges with `std::views::enumerate`.
- Smart pointers for resource management.

Run it with a C++23-compatible compiler (e.g., GCC 14, Clang 17) using `-std=c++23 -ltbb` (for parallel execution).

---

## Curriculum
The curriculum is divided into stages, each building toward the target demo:

1. **Template Metaprogramming with Compile-Time Computation**
   - Goal: Master recursive templates and compile-time logic.
   - Progression: Factorial → Power with base and exponent.

2. **C++20 Concepts**
   - Goal: Use type constraints for safer templates.
   - Progression: Basic concept → `Transformable` for transformations.

3. **Lambda Expressions and Functional Programming**
   - Goal: Leverage lambdas for concise code.
   - Progression: Printing → Transforming with captures.

4. **Smart Pointers and RAII**
   - Goal: Automatic resource management.
   - Progression: Single value → Integration with templates.

5. **Standard Algorithms (Sequential)**
   - Goal: Efficient container operations.
   - Progression: `std::accumulate` → `std::transform`.

6. **Parallel Execution with `std::execution`**
   - Goal: Optimize with parallelism.
   - Progression: Sequential `std::reduce` → Parallel execution.

7. **C++20/23 Ranges**
   - Goal: Modern range-based iteration.
   - Progression: Basic loops → `std::views::enumerate`.

8. **Generic Programming and Type Safety**
   - Goal: Combine templates and concepts.
   - Progression: Simple generics → Constrained vector operations.

---

## Assignments
These trivial assignments provide a starting point for each concept. I’ll add my solutions as I complete them in separate files (e.g., `assignment1.cpp`).

- **Assignment 1**: Write a `Factorial<N>` struct to compute `3!` (6) and print it.
- **Assignment 2**: Define a `Printable` concept and test with `int` and `double`.
- **Assignment 3**: Use `std::for_each` with a lambda to print `{1, 2, 3, 4, 5}`.
- **Assignment 4**: Create a `std::unique_ptr<int>` with value 10 and print it.
- **Assignment 5**: Use `std::accumulate` to sum `{1, 2, 3}` (6) and print it.
- **Assignment 6**: Use `std::reduce` to sum `{1.5, 2.5, 3.5}` (7.5).
- **Assignment 7**: Print `{10, 20, 30}` with a range-based for loop.
- **Assignment 8**: Write a template function `doubleValue<T>` to double an `int` (e.g., 5 → 10).
- **Assignment 9**: Modify Assignment 3 to double numbers before printing.
- **Assignment 10**: Store the sum of `{1, 2, 3}` in a `std::unique_ptr<int>` and print it.

**Study Plan**:
- Weeks 1-2: Assignments 1, 2
- Weeks 3-4: Assignments 3, 9
- Weeks 5-6: Assignments 4, 10
- Weeks 7-8: Assignments 5, 6
- Weeks 9-10: Assignments 7, 8
- Week 11: Recreate `demo.cpp`
- Week 12: Customize the demo

---

## Setup Instructions
1. **Create the Repository**:
   - On GitHub, click "New Repository," name it (e.g., `cpp-advanced-study`), and initialize with a README.
   - Clone it locally: `git clone <repo-url>`.

2. **Add Files**:
   - Copy this `README.md` and `demo.cpp` into the repo folder.
   - Commit and push:
     ```bash
     git add README.md demo.cpp
     git commit -m "Initial commit with curriculum and demo"
     git push origin main
     ```

3. **Compile and Run**:
   - Install a C++23 compiler (e.g., GCC 14: `sudo apt install g++-14` on Ubuntu).
   - Install TBB for parallelism: `sudo apt install libtbb-dev`.
   - Compile: `g++-14 -std=c++23 -ltbb demo.cpp -o demo`.
   - Run: `./demo`.

---

## Progress Tracking
- I’ll create a branch for each assignment (e.g., `git checkout -b assignment1`).
- Commit solutions as I go (e.g., `git commit -m "Completed Assignment 1: Factorial"`).
- Push branches to GitHub and create pull requests for review.
- Merge into `main` when satisfied.

**Example Workflow**:
```bash
git checkout -b assignment1
# Write assignment1.cpp
git add assignment1.cpp
git commit -m "Completed Assignment 1: Factorial"
git push origin assignment1
# Create PR on GitHub