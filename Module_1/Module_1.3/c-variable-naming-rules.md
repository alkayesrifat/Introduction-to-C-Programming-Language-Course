# C Programming: Variable Naming Rules

## ✅ Rules for Naming Variables in C

When naming variables in C, certain rules must be followed to ensure readability and proper compilation. Below are the key rules with examples:

---

### 🔹 Validity and Structure
1. **Can contain letters, digits, and underscores (`_`)**
   - ✅ Valid: `age`, `number1`, `my_var`
   - ❌ Invalid: `2ndNum` (Cannot start with a number)

2. **Must begin with a letter or an underscore (`_`)**
   - ✅ Valid: `_value`, `x1`
   - ❌ Invalid: `9num` (Cannot start with a digit)

3. **Cannot use reserved keywords**
   - ❌ Invalid: `int`, `return`, `float`

4. **No spaces allowed**
   - ❌ Invalid: `my var`

5. **Case-sensitive (distinct names)**
   - `count`, `Count`, and `COUNT` are different variables

---

### 🔹 Best Practices
1. **Use meaningful and descriptive names**
   - ✅ Good: `studentAge`, `totalMarks`
   - ❌ Bad: `a`, `x1x`

2. **Follow Camel Case or Snake Case naming**
   - ✅ Camel Case: `studentAge`, `totalMarks`
   - ✅ Snake Case: `student_age`, `total_marks`

3. **Avoid single-character or cryptic names**
   - ❌ Bad: `t`, `n1` (Not meaningful)

4. **Use uppercase for constants**
   - ✅ `#define MAX_SIZE 100`

---

### 🔹 Examples of Valid and Invalid Names

| ✅ Valid Names | ❌ Invalid Names |
|--------------|---------------|
| `age` | `2age` (Starts with a digit) |
| `_count` | `float` (Reserved keyword) |
| `total_marks` | `total marks` (Contains spaces) |
| `number1` | `@value` (Special character used) |

---

### 🔹 Code Example
```c
#include <stdio.h>

int main() {
    int studentAge = 20;   // Camel Case
    int total_marks = 95;  // Snake Case
    const float PI = 3.14; // Constant

    printf("Student Age: %d\n", studentAge);
    printf("Total Marks: %d\n", total_marks);
    printf("Value of PI: %.2f\n", PI);

    return 0;
}
```
**Output:**
```
Student Age: 20  
Total Marks: 95  
Value of PI: 3.14  
```

---

### 📌 Summary of Key Rules
✅ Use letters, digits, and `_`  
✅ Cannot start with a digit  
✅ Cannot use reserved keywords  
✅ No spaces or special characters  
✅ Case-sensitive  

By following these rules, your code will be cleaner, more readable, and maintain standard naming conventions. 🚀
