# Problem #7: Half Number

## 📝 Problem Description
The goal of this program is to ask the user to enter an integer number, calculate its half, and then display the result in a clear, formatted message on the screen.

**Example:**
- If the user enters: `60` -> Output: `Half of 60 is 30`
- If the user enters: `50` -> Output: `Half of 50 is 25`

---

## 🛠️ Algorithm Steps (Logic)

To solve this problem, we follow these logical steps:

1. **Input:** Prompt the user to enter a number (e.g., `Num`).
2. **Read:** Store the value entered by the user into a variable.
3. **Processing:** - Create a variable to hold the result (e.g., `Half`).
   - Apply the formula: `Half = Num / 2`.
4. **Concatenation:** Combine the static text with the variables to form the final message:
   - `"Half of " + Num + " is " + Half`
5. **Output:** Print the final concatenated string to the console.

---

## 📊 Flowchart Logic

1. **Start**
2. **Input:** `Read Num`
3. **Process:** `Result = Num / 2`
4. **Output:** `Print "Half of " + Num + " is " + Result`
5. **End**

---

## 💡 Key Takeaways
- **Data Types:** Depending on the programming language, you may need to use `float` or `double` if you want to handle odd numbers (like 5 becoming 2.5) instead of simple integer division.
- **String Concatenation:** Using the `+` operator or commas (depending on the language) allows us to mix text literals (in quotes) with variable values.
- **Dynamic Messages:** By including the original number in the output, the program provides better context for the user.

![alt text](<Untitled Diagram-1.jpg>)