# Problem #45: Month of the Year

## 📝 Problem Description

Write a program that asks the user to enter a number (from 1 to 12) representing the **Month of the Year**, and the program should print the corresponding month name.

**Example:**

- **Input:** `1` -> **Output:** `January`
- **Input:** `6` -> **Output:** `June`
- **Input:** `13` -> **Output:** `Wrong Month`

---

## 🛠️ Algorithm Steps (Logic)

This problem uses a many-to-one mapping technique.

1. **Input:** Read `MonthNumber`.
2. **Decision (Multi-Condition / Switch Case):**
   - If `Month == 1`: Print "January"
   - If `Month == 2`: Print "February"
   - If `Month == 3`: Print "March"
   - If `Month == 4`: Print "April"
   - If `Month == 5`: Print "May"
   - If `Month == 6`: Print "June"
   - If `Month == 7`: Print "July"
   - If `Month == 8`: Print "August"
   - If `Month == 9`: Print "September"
   - If `Month == 10`: Print "October"
   - If `Month == 11`: Print "November"
   - If `Month == 12`: Print "December"
   - Else: Print "Wrong Month"
3. **Output:** Display the result.

---

## 📊 Performance Insight

Since the number of months is fixed (12), this operation is **$O(1)$** (Constant Time). Whether you enter `1` or `12`, the computer performs a nearly identical amount of work.

---

## 📈 Flowchart Logic

1. **Start**
2. **Input:** `Read Month`
3. **Decision (Switch/If Chain):**
   - Check against values `1` through `12`.
   - Each "Yes" path leads to printing the specific month name.
   - The "No/Default" path leads to "Wrong Month".
4. **End**

## Solution

![alt text](monthOfYear-1.jpg)
