# Enhanced Stack Data Structure

The **Enhanced Stack Data Structure** enables efficient `push`, `pop`, and `top` operations while maintaining real-time tracking of the minimum element in constant **O(1) time**. By using an auxiliary stack, it supports fast retrieval of the minimum without scanning, making it ideal for **high-performance applications** such as stock market tracking, gaming, and streaming analytics.

---

## 📌 Features
- **Push:** Insert an element into the stack in O(1).  
- **Pop:** Remove the top element in O(1).  
- **Top:** Retrieve the top element in O(1).  
- **GetMin:** Get the current minimum element in O(1).  
- Handles **duplicate values, negative numbers, overflow, and underflow** conditions gracefully.  

---

## ⚙️ Implementation
The project is implemented in **C language** using two stacks:
- **Main Stack (`mainStack`)** – Stores all elements.  
- **Min Stack (`minStack`)** – Tracks the current minimum at each stage.  

### Algorithm Workflow
1. **Push(x):**  
   - Insert `x` into `mainStack`.  
   - If `minStack` is empty or `x <= minStack.top()`, also push `x` into `minStack`.  
2. **Pop():**  
   - Remove the top element from `mainStack`.  
   - If the popped element equals `minStack.top()`, pop from `minStack` as well.  
3. **Top():** Return `mainStack.top()`.  
4. **GetMin():** Return `minStack.top()`.  

---

## 🖥️ Requirements
- **Hardware:** PC/Laptop with at least 4GB RAM, 1.5 GHz processor  
- **Software:** GCC Compiler  
- **IDE (optional):** Code::Blocks, Dev-C++, or VS Code  
- **OS:** Windows / Linux / Mac  

---

## 🚀 Sample Execution
```bash
Pushed -2
Pushed 0
Pushed -3
Current Minimum: -3
Popped -3
Top Element: 0
Current Minimum: -2
