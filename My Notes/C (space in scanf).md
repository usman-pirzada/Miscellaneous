# When to Use Space Before `%` in `scanf`

### 1. **Use Space Before `%` When:**

- **To Skip Leading Whitespace**:  
  - Use a space before the `%` in the format specifier to tell `scanf` to skip any leading whitespace characters (spaces, tabs, or newlines) before reading the input.
  
  - **Example**:
    ```c
    int age;
    scanf(" %d", &age);  // Skips leading whitespace (e.g., newlines from previous input)
    ```

- **To Handle Input Buffer Issues**:  
  - When there are leftover newline characters (`\n`) in the input buffer (from previous `scanf` calls), using a space ensures `scanf` consumes these unwanted characters before reading the next input.

  - **Example**:
    ```c
    char name[20];
    scanf("%s", name);      // Reads name
    scanf(" %d", &age);     // Skips any leftover newline or spaces
    ```

- **For Mixed Input Types**:  
  - When reading different types of inputs (e.g., a string followed by a number), a space before the format specifier ensures `scanf` handles the buffer correctly.

  - **Example**:
    ```c
    int num;
    char str[50];
    scanf("%d", &num);  // Reads integer
    scanf(" %[^\n]", str);  // Space before %[^\n] skips leading spaces and reads the entire line
    ```

---

### 2. **Do NOT Use Space Before `%` When:**

- **Reading Direct Input (No Buffer Issues)**:  
  - **Do not use space** if you're reading straightforward input (e.g., a number or a string) without worrying about leftover newlines or whitespace in the buffer.

  - **Example**:
    ```c
    int num;
    scanf("%d", &num);  // Correct: no leading whitespace is required
    ```

- **No Whitespace Needs to Be Skipped**:  
  - If there is no potential for leftover whitespace (e.g., after a line input), there is no need to use a space.

  - **Example**:
    ```c
    char str[20];
    scanf("%s", str);  // Correct: no need for space before %s
    ```

---

### Summary:

- **Use space before `%`** in `scanf` when you want to skip leading whitespace (spaces, tabs, or newlines).
- **Do NOT use space** before `%` when reading direct input without the need to skip extra whitespace.