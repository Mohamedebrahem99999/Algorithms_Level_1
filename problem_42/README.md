# Problem #42: Task Duration in Seconds

## 📝 Problem Description

Write a program that asks the user to enter a duration in:

1. **Days**
2. **Hours**
3. **Minutes**
4. **Seconds**

The program should calculate the **Total Duration in Seconds**.

**Example:**

- Input: `2 Days, 5 Hours, 45 Minutes, 20 Seconds`
- **Output:** `Total Seconds = 193,520`

---

## 🛠️ Algorithm Steps (Logic)

To find the total, we convert each unit into seconds and sum them up:

1. **Input:** Read `Days`, `Hours`, `Minutes`, `Seconds`.
2. **Read:** Store these 4 values.
3. **Constants:**
   - 1 Day = 24 Hours
   - 1 Hour = 60 Minutes
   - 1 Minute = 60 Seconds
4. **Calculation:**
   - `TotalSeconds = (Days * 24 * 60 * 60) + (Hours * 60 * 60) + (Minutes * 60) + Seconds`
5. **Output:** Print `TotalSeconds`.

---

## 📊 Flowchart Logic

1. **Start**
2. **Input:** `Read D, H, M, S`
3. **Processing:**
   - `Total = (D * 86400) + (H * 3600) + (M * 60) + S`
4. **Output:** `Print Total`
5. **End**

---

## 🖼️ Solution

![alt text](taskDurationInSeconds-1.jpg)
