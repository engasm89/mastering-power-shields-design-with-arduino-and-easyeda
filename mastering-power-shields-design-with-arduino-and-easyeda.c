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
int main(void) { // Entry
  printf("Mastering Power Shields: Design with Arduino & EasyEDA\n"); // Title
  enable_5v(); // Enable 5V
  enable_12v(); // Enable 12V
  return 0; // Exit
} // End main

