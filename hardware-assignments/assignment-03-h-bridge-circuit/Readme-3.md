# Assignment 03: H-Bridge Circuit Design

## Description
This project demonstrates the design and simulation of a functional H-bridge circuit using Proteus Design Suite. The circuit successfully controls the rotational direction of a DC motor by alternating the path of current flow.

## Working Principle
An H-bridge consists of four electronic switches (in this design, NPN Transistors) arranged in an "H" configuration around a central DC motor. 
* **Forward Rotation:** Achieved by activating the top-left and bottom-right transistors, causing current to flow from left to right across the motor.
* **Reverse Rotation:** Achieved by deactivating the first pair and activating the top-right and bottom-left transistors, reversing the current flow to right to left.

## Components Used (Proteus)
* **DC Motor** (`MOTOR-DC`)
* **NPN Transistors** (Acting as electronic switches)
* **Resistors** (10kΩ, for base current limiting)
* **Logic States** (`LOGICSTATE`, to simulate micro-controller signals for directional control)
* **DC Power Source / Battery**

## Simulation Evidence
*(I have attached screenshots in this folder demonstrating the motor rotating in both the clockwise and counter-clockwise directions).*