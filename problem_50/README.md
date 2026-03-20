
# Problem #50: ATM PIN with 3 Attempts

## 📝 Problem Description

Write a program that simulates an ATM PIN entry with a limit on attempts:

1. The user has a maximum of **3 attempts** to enter the correct PIN.
2. The correct PIN is **1234**.
3. If the user enters the correct PIN within 3 tries, print: "Your Account Balance is 7500".
4. If the user fails 3 times, print: "Card is Locked!".

**Examples:**

- **Attempt 1:** `1111` (Wrong) -> **Attempt 2:** `1234` (Correct) -> **Output:** `Balance is 7500`
- **Attempt 1:** `1111` -> **Attempt 2:** `2222` -> **Attempt 3:** `3333` -> **Output:** `Card is Locked!`

---

## 🛠️ Algorithm Steps (Logic)

We need a counter to track the number of tries and a loop that checks two conditions: the PIN value and the counter.

1. **Initialization:** Set `Counter = 3`.
2. **Input:** Ask the user for `PIN`.
3. **Loop:** While `Counter > 1` AND `PIN != "1234"`:
   - `Counter = Counter - 1`
   - Print "Wrong PIN, you have [Counter] attempts left."
   - **Input:** Read `PIN` again.
4. **Final Decision:**
   - If `PIN == "1234"`: Print "Your Account Balance is 7500".
   - Else: Print "Card is Locked!".

---

## 📊 Performance Insight

The time complexity is **$O(1)$** in a real-world sense because the number of iterations is strictly capped at 3, regardless of how large the "database" is.

---

## 📈 Flowchart Logic

1. **Start**
2. **Process:** `Attempts = 3`
3. **Input:** `Read PIN`
4. **Decision (Loop):** `Is PIN == "1234"?`
   - **Yes (Correct):** `Print "Balance is 7500"` -> **End**
   - **No (Wrong):** - `Attempts = Attempts - 1`
     - **Decision:** `Is Attempts > 0?`
       - **Yes:** Go back to `Read PIN`.
       - **No:** `Print "Card Locked!"` -> **End**
5. **End**

## solution

![alt text](ATMPIN3Times-1.jpg)
