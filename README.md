
---

# 📚 Qt Bookstore Management Application

A simple desktop application built with **Qt** (C++), featuring a bookstore interface to **view**, **purchase**, and **manage** books stored in an **SQLite** database.

---

## Features

* **View Books**: Display all available books in a styled table.
* **Purchase Books**: Enter book name and quantity to simulate a purchase.
* **Delete Books**: Remove books from the database directly from the purchase or view dialogs.
* **SQLite Integration**: Persistent storage of book data.
* **User-friendly UI**: Clean and modern interface with styled dialogs and buttons.



---

## Setup & Run

### Requirements

* Qt 5.x or Qt 6.x (with Qt Widgets module)
* SQLite support enabled (Qt SQL module)

### Building the Project

1. Open the project in Qt Creator.
2. Build the project.
3. Run the executable.

### Database Initialization

Make sure you have an SQLite database named `books.db` with a table named `books` structured as:

```sql
CREATE TABLE books (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    name TEXT NOT NULL UNIQUE,
    price REAL NOT NULL,
    quantity INTEGER DEFAULT 0
);
```

You can insert sample data using:

```sql
INSERT INTO books (name, price, quantity) VALUES ('Example Book', 9.99, 10);
```

---

## How To Use

* Open **View Books** to see the current inventory.
* Use **Purchase Window** to enter book name and quantity, then click **OK** to simulate purchase.
* Use the **Delete** button in either dialog to remove books by name.
* The UI is styled for a smooth experience and easy navigation.

---

## Code Overview

* `viewBooks.ui` & `viewbooks.cpp`: UI and logic to display and manage books in a table.
* `purBox.ui` & `purbox.cpp`: UI and logic for purchasing and deleting books.
* Uses Qt SQL module (`QSqlQuery`, `QSqlError`) for database operations.
* Signal/slot connections handle user actions such as purchase and delete.

---

## Troubleshooting

* Make sure Qt SQL module is included in your `.pro` file:

```pro
QT += core gui sql
```

* If you get errors like `'QSqlError' has not been declared`, ensure to include:

```cpp
#include <QSqlError>
```

* Check that the SQLite database file is accessible and correctly initialized.

---

## License

This project is open-source and free to use.

---

If you want, I can help you generate a markdown file with this content or customize it further!
