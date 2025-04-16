🔌 IC Tester Using ATmega32A
📌 Overview
This project is an IC Tester built around the ATmega32A microcontroller. It automatically recognizes and tests logic ICs from popular families such as 74xxx, 40xxx, and 45xxx, verifying their functionality and reporting results via UART.

⚙️ Features
Automatic Recognition of logic ICs from families: 74xxx, 40xxx, and 45xxx

Validates logical behavior of gates (e.g., inverters, AND, OR, etc.)

Uses external interrupt to trigger the test

Serial output via UART (viewable in PuTTY or any serial terminal)

Repeatable testing with a simple button press

🛠️ Hardware Components
ATmega32A Microcontroller

Logic ICs (e.g., 7404, 4011, 4511, etc.)

CH340 USB-to-TTL Module

Push Button (for interrupt)

Breadboard & Jumper Wires

Optional: LEDs for visual logic level indication

🧠 How It Works
Connect the IC to the tester according to pin mapping.

Press the test button to trigger an interrupt.

The microcontroller applies test patterns and reads outputs.

It identifies the IC and sends the test result via UART to the PC.

👨‍💻 Developed by
Mohamed Ali Mohamed Hasabeen
Student @ Alexandria University
