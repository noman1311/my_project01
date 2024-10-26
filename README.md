# Numerical Methods Console Application

This console application implements various numerical methods for solving linear equations, non-linear equations, differential equations, and matrix inversion. The project was collaboratively developed as part of a university assignment to understand and apply numerical algorithms.

## Table of Contents
- [Project Description](#project-description)
- [Application Structure](#application-structure)
  - [1. Solution of Linear Equations](#1-solution-of-linear-equations)
  - [2. Solution of Non-linear Equations](#2-solution-of-non-linear-equations)
  - [3. Solution of Differential Equations](#3-solution-of-differential-equations)
  - [4. Matrix Inversion](#4-matrix-inversion)
- [Technologies Used](#technologies-used)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
  - [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## Project Description

This application is designed to solve various types of mathematical problems using numerical methods. It covers solutions for linear and non-linear equations, differential equations, and matrix operations, and is developed collaboratively to enhance understanding of numerical algorithms. This project was completed in [insert programming language here].

## Application Structure

The application consists of solutions for linear equations, non-linear equations, differential equations, and matrix inversion, organized into modules as follows:

### 1. Solution of Linear Equations

#### a. Jacobi Iterative Method
The **Jacobi iterative method** is an algorithm used to solve a system of linear equations iteratively, particularly when the coefficient matrix is diagonally dominant. It’s useful in scenarios where direct methods (like Gaussian elimination) might be computationally expensive or infeasible for large systems.

### How It Works:
1. **Initialization**: Start with an initial guess for each variable, usually \( x = [0, 0, \dots, 0] \).
2. **Iteration**:
   - For each equation in the system, isolate the variable on the left side.
   - Calculate the new value of each variable based on the values from the previous iteration.
   - The formula for updating a variable \( x_i \) at iteration \( k+1 \) is:
     \[
     x_i^{(k+1)} = \frac{b_i - \sum_{j \neq i} a_{ij} x_j^{(k)}}{a_{ii}}
     \]
     where \( b_i \) is the constant term, \( a_{ij} \) are coefficients, and \( a_{ii} \) is the diagonal coefficient of \( x_i \).
3. **Convergence**:
   - Repeat the iterations until the difference between successive approximations is below a specified tolerance level, or until a maximum number of iterations is reached.

### Key Points:
- **Diagonal Dominance**: The method requires the matrix to be diagonally dominant (each diagonal element is larger than the sum of other row elements) to guarantee convergence.
- **Application**: Jacobi’s method is especially useful for parallel computation, as each variable update can be calculated independently from others within an iteration.
#### b. Gauss-Seidel Iterative Method
The Gauss-Seidel method is similar to the Jacobi method but updates each variable as soon as its new value is computed, leading to faster convergence in many cases.

#### c. Gauss Elimination
Gauss Elimination is a method that transforms the system of linear equations into an upper triangular matrix to solve for the unknowns through back-substitution.

#### d. Gauss-Jordan Elimination
The Gauss-Jordan method extends Gauss Elimination by reducing the matrix to a diagonal form, simplifying the solution process by enabling direct computation of each variable.

#### e. LU Factorization
LU Factorization decomposes the coefficient matrix into a lower triangular matrix (L) and an upper triangular matrix (U), facilitating efficient solutions of multiple equations.

**Note:** All methods are implemented for a minimum of 5 equations.

### 2. Solution of Non-linear Equations

#### a. Bisection Method
The Bisection Method is a root-finding algorithm that repeatedly divides an interval in half and selects the subinterval in which the function changes sign.

#### b. False Position Method
The False Position (or Regula Falsi) method is an iterative method that uses a weighted average to approximate the root of a function.

#### c. Secant Method
The Secant method approximates the root of a function by drawing a line between two points and finding its intersection with the x-axis.

#### d. Newton-Raphson Method
The Newton-Raphson method uses the derivative of the function to iteratively converge to the root, providing a fast-converging solution.

### 3. Solution of Differential Equations

#### Runge-Kutta Method
The Runge-Kutta method (typically 4th-order) is a powerful algorithm for solving ordinary differential equations, providing high accuracy through intermediate slope calculations.

### 4. Matrix Inversion

This module performs matrix inversion, enabling the solution of matrix equations and systems of linear equations in a more generalized form.

## Technologies Used

- [Programming language name (e.g., Python, C++, Java)]
- GitHub for version control and collaboration

## Getting Started

### Prerequisites

- Install [Programming Language]
- GitHub account

### Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/[your-username]/numerical-methods-console-app.git
