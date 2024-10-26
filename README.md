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
The Jacobi method is an iterative algorithm that solves a system of linear equations. It updates each variable sequentially based on the previous iteration values until convergence is achieved.

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
