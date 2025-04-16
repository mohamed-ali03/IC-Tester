🔌 IC Tester Using ATmega32A
📌 Overview
This project is a smart IC Tester based on the ATmega32A microcontroller. It is designed to automatically recognize and verify the functionality of digital logic ICs from the 74xxx, 40xxx, and 45xxx families. Test results are transmitted via UART and can be viewed on serial terminals like PuTTY.

⚙️ Features
✅ Automatic recognition of ICs from: 74xxx, 40xxx, 45xxx families

✅ Validates logic behavior (e.g., Inverter, AND, OR, etc.)

✅ Uses external interrupt to trigger the test

✅ Sends results over UART (viewable in PuTTY or any serial terminal)

✅ Supports repeatable testing with a button press

🛠️ Hardware Components
🔹 ATmega32A Microcontroller

🔹 Logic ICs (e.g., 7404, 4011, 4511, etc.)

🔹 CH340 USB-to-TTL Module

🔹 Push Button (Interrupt Trigger)

🔹 Breadboard & Jumper Wires

🔹 (Optional) LEDs for visual output indication

🧠 How It Works
Connect a logic IC to the tester based on predefined pin mapping

Press the test button to trigger an external interrupt

The microcontroller runs logic tests by applying input patterns

IC identity and test results are sent via UART to your PC

👨‍💻 Developed By
Mohamed Ali Mohamed Hasabeen
Student @ Alexandria University
Fully designed and implemented the hardware, firmware, and communication protocols.
