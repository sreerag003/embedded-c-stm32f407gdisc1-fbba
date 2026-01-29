# Embedded C – STM32F407G-DISC1 (FastBit Academy)

This repository contains **all files created while completing the course_Embedded C for Absolute Beginners_ by FastBit Academy**.

The purpose of this repository is to **demonstrate genuine course completion and hands-on learning**, covering both:

- Host-based Embedded C programs 
- Target-based STM32 projects tested on real hardware 

This is **not a production firmware repository**. It is a learning archive preserved as close as possible to the original course work.

---

## Repository Overview

The repository is divided into two main parts:
.
├── host/
└── target/

---

## host/ — Host-based Embedded C Programs

The `host/` folder contains **Embedded C programs executed on a Linux host machine**.

Each subfolder corresponds to **one exercise from the course**, created as an individual Eclipse/CDT project. These exercises focus on strengthening C fundamentals required for embedded systems.

### Exercises included

host/
├── exercise_ascii_code
├── exercise_biggest_among_3_numbers
├── exercise_charge
├── exercise_for_loop
├── exercise_hello_world
├── exercise_if_else
├── exercise_macros
├── exercise_math_operation
├── exercise_pointer
├── exercise_printf
├── exercise_scanf
├── exercise_struct
├── exercise_students_record
├── exercise_swapping_arrays
├── exercise_switch
├── exercise_variable_definition
└── exercise_while


Each exercise folder contains:
- Source code written during the course
- Eclipse project configuration files (`.project`, `.cproject`)

These programs cover:
- core C syntax and logic
- control flow
- pointers and memory concepts
- structures and arrays
- problem-solving exercises from the course

---

## target/ — STM32 Target Projects

The `target/` folder contains **STM32CubeIDE projects developed for the STM32F407G-DISC1 development board**.

Each subfolder is a **separate STM32 project**, created, built, flashed, and tested on real hardware.

### Target projects and media evidence

#### Hello_world
- Basic STM32 project setup and execution 
- Media included:
  - [Hello_world.jpeg](target/Hello_world/Hello_world.jpeg)

#### IOpin_reading
- GPIO input reading experiment 
- Media included:
  - [IOpin_reading.mp4](target/IOpin_reading/IOpin_reading.mp4)

#### keypad_interface
- GPIO input reading experiment
- Media include:
  - [keypad_interface.mp4](target/keypad_interface/keypad_interface.mp4)


#### led_blink_structandunions
- LED blinking implemented using structures and unions 
- Media included:
  - [led_blink_struct_and_unions.mp4](target/led_blink_struct_and_uinions.mp4)

#### led_blinking
- Basic LED blinking experiment 
- Media included:
  - [led_blinking.mp4](target/led_blinking/led_blinking Debug.mp4)

Media files (`.mp4`, `.jpeg`) are included **intentionally** to demonstrate actual hardware behavior and execution on the STM32 board.

---

## Notes

- IDE workspace files (`.metadata/`) and build outputs are excluded.
- Folder structure is preserved to reflect the **actual course workflow**.
- This repository represents **learning artifacts**, not a refactored or optimized codebase.

---

## Course Reference

- Course: Embedded C for Absolute Beginners 
- Target Board: STM32F407G-DISC1 
- STMCUBE IDE


