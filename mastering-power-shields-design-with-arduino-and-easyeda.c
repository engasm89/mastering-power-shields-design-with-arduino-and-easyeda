/*
 * Course: Mastering Power Shields Design With Arduino And Easyeda
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Mastering Power Shields Design With Arduino And Easyeda" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/mastering-power-shields-design-with-arduino-and-easyeda/
 * Repository: https://github.com/engasm89/mastering-power-shields-design-with-arduino-and-easyeda
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: Mastering Power Shields Design With Arduino And Easyeda
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Mastering Power Shields Design With Arduino And Easyeda
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for power shield logs

// Simulate enabling power rails
static int rail5v = 0; // 5V rail state
static int rail12v = 0; // 12V rail state

void enable_5v(void) { // Enable 5V rail
  rail5v = 1; // Set state
  printf("5V rail ON\n"); // Log
} // End enable_5v

void enable_12v(void) { // Enable 12V rail
  rail12v = 1; // Set state
  printf("12V rail ON\n"); // Log
} // End enable_12v

// Main routine: orchestrates the mastering power shields design with arduino and easyeda scenario
int main(void) { // Program entry point
  printf("Mastering Power Shields: Design with Arduino & EasyEDA\n"); // Title
  enable_5v(); // Enable 5V
  enable_12v(); // Enable 12V
  return 0; // Exit
} // End of main function

