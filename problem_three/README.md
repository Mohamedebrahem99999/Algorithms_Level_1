# Problem #3: Check Odd or Even

## 📝 Problem Description

Write a program to read a number from the user and check if it is **Odd** or **Even**.

---

## 🛠️ Algorithm Steps (Logic)

To solve this problem, we need to determine if there is a remainder when the number is divided by 2:

1. **Input:** Ask the user to enter a number.
2. **Read:** Store the value in a variable (e.g., `Num`).
3. **Calculation:** Calculate the remainder of the number divided by 2 (using the Modulo operator `%`).
   - `Result = Num % 2`
4. **Decision:** - If the `Result` is `0`, then the number is **Even**.
   - If the `Result` is NOT `0`, then the number is **Odd**.
5. **Output:** Print "Even" or "Odd" accordingly.

---

## 📊 Flowchart Logic

1. **Start**
2. **Input:** `Read Num`
3. **Process:** `Result = Num % 2`
4. **Decision (Diamond Shape):** Is `Result = 0`?
   - **Yes:** `Print "Even"`
   - **No:** `Print "Odd"`
5. **End**

---

## 🖼️ Solution

![alt text](<Check Odd or Even.jpg>)
