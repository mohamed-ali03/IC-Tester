# 🔌 IC Tester Using ATmega32A

## 📌 Overview  
This project is a smart **IC Tester** built using the **ATmega32A** microcontroller. It automatically recognizes and tests logic ICs from popular families such as **74xxx**, **40xxx**, and **45xxx**, verifying their functionality and reporting results via UART.

## ⚙️ Features  
- ✅ Automatic recognition of ICs from: **74xxx**, **40xxx**, and **45xxx** families  
- ✅ Validates logic behavior (e.g., **Inverter**, **AND**, **OR**, etc.)  
- ✅ Uses **external interrupt** to trigger the test  
- ✅ Sends results over **UART** (viewable in PuTTY or any serial terminal)  
- ✅ Supports **repeatable testing** with a button press  

## 🛠️ Hardware Components  
- **ATmega32A Microcontroller**  
- Logic ICs (e.g., *7404*, *4011*, *4511*, etc.)  
- **CH340 USB-to-TTL** Module  
- **Push Button** (for triggering the interrupt)  
- **Breadboard & Jumper Wires**  
- *(Optional)* **LEDs** for visual logic level indication  

## 🧠 How It Works  
1. Connect the IC to the tester based on the correct pin mapping.  
2. Press the test button to trigger an **external interrupt**.  
3. The microcontroller sends test signals and reads the output.  
4. It identifies the IC type and sends the result via **UART** to the PC.  

## 👨‍💻 Developed By  
**Mohamed Ali Mohamed Hasabeen**  
Student @ Alexandria University  

> Complete design and implementation of hardware, firmware logic, and serial communication.
