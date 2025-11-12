## 📘 Overview

This project builds a **static library** `libftprintf.a` that mimics the original `printf()` from libc.

Your own version, `ft_printf()`, can be used in any C program by linking this library, together with your `libft`.

---

## ⚙️ Features

✅ Handles the following conversions:

| Specifier | Description |
|------------|--------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` / `%i` | Prints a signed integer (base 10) |
| `%u` | Prints an unsigned integer (base 10) |
| `%x` | Prints a number in lowercase hexadecimal (base 16) |
| `%X` | Prints a number in uppercase hexadecimal (base 16) |
| `%%` | Prints a literal percent sign |

🚫 No buffer management (as in the real `printf`).

💡 Variadic arguments handled using `va_start`, `va_arg`, and `va_end`.

---
