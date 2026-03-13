# Problem #27: Print Numbers from N to 1

## 📝 Problem Description

Write a program to print numbers from N to 1, where N is entered by the user.

**Example:**

- If the user enters N: `5`
- The Output will be:
  `5`
  `4`
  `3`
  `2`
  `1`

---

## 🛠️ Algorithm Steps (Logic)

In this case, our counter starts from N and decreases (decrements) by 1 in each step until it reaches 1:

1. **Input:** Ask the user to enter the number `N`.
2. **Read:** Store the value in variable `N`.
3. **Initialization:** Let the counter `i = N`.
4. **Loop/Decision:** - Check if `i >= 1`.
   - If **True**:
     - Print `i`.
     - Decrement `i` by 1 (`i = i - 1`).
     - Go back to the start of the decision.
   - If **False**: Stop.

---

## 📊 Flowchart Logic

1. **Start**
2. **Input:** `Read N`
3. **Process:** `i = N`
4. **Decision (Diamond):** `Is i >= 1?`
   - **Yes:** - `Print i`
     - `i = i - 1`
     - (Arrow goes back to the decision)
   - **No:**
     - (End)
5. **End**

---

## 🖼️ Solution

![alt text](PrintNumbersFromNTo1.jpg)
