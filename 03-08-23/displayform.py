import tkinter as tk
import sqlite3
conn = sqlite3.connect('my_database.db')
cursor = conn.cursor()

def display_data():
    conn = sqlite3.connect('my_database.db')
    cursor = conn.cursor()

    cursor.execute("SELECT * FROM applications")
    data = cursor.fetchall()
    conn.close()

    # Display data in a tkinter widget (e.g., a Text or Listbox widget)
    data_display.delete(1.0, tk.END)  # Clear existing data
    for row in data:
        data_display.insert(tk.END, f"Name: {row[1]}\nEmail: {row[2]}\nphone {row[3]}\naddress {row[4]}\ncollege {row[5]}\ndocument {row[6]}\n\n")

# Create a table to store data
cursor.execute('''
    CREATE TABLE IF NOT EXISTS applications (
        id INTEGER PRIMARY KEY,
        name TEXT,
        email TEXT,
        phone TEXT,
        age INTEGER,
        address TEXT,
        college TEXT            
    );
''')

conn.commit()
conn.close()

root = tk.Tk()
root.title("Application Form")

data_display = tk.Text(root)
data_display.pack()

display_button = tk.Button(root, text="Display Data", command=display_data)
display_button.pack()

root.mainloop()


