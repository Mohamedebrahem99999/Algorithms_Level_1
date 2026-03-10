# Problem #28: Sum Odd Numbers from 1 to N

## 📝 Problem Description

Write a program to calculate the sum of odd numbers from 1 to N, where N is entered by the user.

**Example:**

- If the user enters N: `10`
- The odd numbers are: `1, 3, 5, 7, 9`
- The Output (Sum) will be: `25`

---

## 🛠️ Algorithm Steps (Logic)

To solve this, we use a loop and check each number if it's odd before adding it to a "Sum" variable:

1. **Input:** Ask the user to enter `N`.
2. **Read:** Store the value in variable `N`.
3. **Initialization:** - Let the counter `i = 1`.
   - Let the total sum `Sum = 0`.
4. **Loop/Decision:** - Check if `i <= N`.
   - If **True**:
     - Check if `i` is odd (e.g., `i % 2 != 0`).
     - If odd: `Sum = Sum + i`.
     - `i = i + 1`.
     - Go back to the start of the loop.
   - If **False**: Stop.
5. **Output:** Print the final `Sum`.

---

## 📊 Flowchart Logic

1. **Start**
2. **Input:** `Read N`
3. **Process:** `Sum = 0`, `i = 1`
4. **Decision (Diamond):** `Is i <= N?`
   - **Yes:** - **Decision:** `Is i Odd?`
       - **Yes:** `Sum = Sum + i`
       - `i = i + 1`
       - (Arrow goes back to the loop decision)
   - **No:**
     - `Print Sum`
5. **End**

---

## 🖼️ Solution

![alt text](PrintSumOddNumbersFrom1toN-1.jpg)
