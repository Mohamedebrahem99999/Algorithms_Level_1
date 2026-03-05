# Hire a Driver - Case Two (Problem 5)

---

## Problem Description
This algorithm determines the eligibility of a candidate for a driving position. It introduces a priority factor (Recommendation/Wastha) that can override standard hiring requirements.

---

## Hiring Logic
A candidate is marked as **"Hired"** if they satisfy either of the following conditions:

1. **Priority Condition:** The candidate has a **Recommendation**.
2. **Standard Condition:** The candidate is older than **21** AND possesses a **Driver's License**.

If neither condition is met, the candidate is **"Rejected"**.

---

## Input Data
* **Age:** (Integer)
* **Has Driver License:** (Boolean)
* **Has Recommendation:** (Boolean)

---

## Program Output
* **Status:** "Hired" or "Rejected" based on the logic evaluation.

---