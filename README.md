# library
C++ program used for saving and borrowing books at the library
The provided code is a simple program for a library management system implemented in C++. Here is an explanation of the code:

1. The code begins by including the necessary header files, `iostream` and `string`, for input/output operations and string manipulation, respectively.

2. The `using namespace std;` statement allows the usage of standard library functions and objects without explicitly specifying the namespace.

3. Several global variables are declared, including `daftar` (representing the number of books in the library), `n` (used for user input), `urut` (tracking the number of borrowers), and arrays to store book details such as `code`, `buku`, and `stok` (representing book code, title, and availability).

4. The `sequential_search` function is defined to search for a specific book code within an array of data. It returns the position of the book if found, or -1 if not found.

5. The `ulang` function is defined to prompt the user for input repeatedly.

6. The `format` function is used to display the table format for book details.

7. The `tabel` function iterates over the books and prints their codes, titles, and availability based on the `code`, `buku`, and `stok` arrays.

8. The `pinjam` function is responsible for handling the book borrowing process. It checks if the specified book code exists and if it is available (stok = 1). If so, it marks the book as borrowed (stok = 0) and stores the borrower's name and borrowing time.

9. The `kembali` function handles the book return process. It checks if the specified book code exists and marks the book as available (stok = 1).

10. The `peminjam` function displays the list of borrowers along with the book codes, borrower names, and borrowing durations.

11. The `tambah` function allows the user to add a new book to the library by entering the book code and title.

12. The `hapus` function is used to delete a book from the library based on its code.

13. In the `main` function, the program displays a menu of options for the user to choose from. Depending on the selected option, corresponding functions are called to perform the desired operations.

14. The program continues to execute the selected operation until the user enters a different value than 1-6.
