import tkinter as tk
from tkinter import messagebox
import openpyxl
import sqlite3

conn = sqlite3.connect("my_database.db")


cursor = conn.cursor()

# Create a table to store the application data
cursor.execute(
    """
    CREATE TABLE IF NOT EXISTS applications (
        id INTEGER PRIMARY KEY,
        name TEXT,
        email TEXT,
        phone TEXT,
        address TEXT,
        college TEXT,
        document TEXT
               
    );
"""
)
# Commit the changes and close the connection
conn.commit()
conn.close()

# Dummy user credentials (you should replace this with a real authentication mechanism)
# authorized_users = {"username": "password"}
name_entry = -1
email_entry = -1
phone_entry = -1
address_entry = -1
college_entry = -1
document_entry = -1


def login():
    global name_entry, email_entry, phone_entry, address_entry, college_entry, document_entry

    # Hide the login window
    question_window.withdraw()

    # Create the application form window
    application_window = tk.Toplevel()
    application_window.title("Application Form")

    # Create form fields and labels in the application form
    name_label = tk.Label(application_window, text="Name:")
    name_label.pack()
    name_entry = tk.Entry(application_window)
    name_entry.pack()

    email_label = tk.Label(application_window, text="Email:")
    email_label.pack()
    email_entry = tk.Entry(application_window)
    email_entry.pack()

    phone_label = tk.Label(application_window, text="Phone number:")
    phone_label.pack()
    phone_entry = tk.Entry(application_window)
    phone_entry.pack()

    address_label = tk.Label(application_window, text="Address:")
    address_label.pack()
    address_entry = tk.Entry(application_window)
    address_entry.pack()

    college_label = tk.Label(application_window, text="college:")
    college_label.pack()
    college_entry = tk.Entry(application_window)
    college_entry.pack()

    document_label = tk.Label(application_window, text="document link(accessible):")
    document_label.pack()
    document_entry = tk.Entry(application_window)
    document_entry.pack()
    # Create a submit button in the application form
    submit_button = tk.Button(application_window, text="Submit", command=save)
    submit_button.pack()


def close():
    question_window.withdraw()

def save():
    conn = sqlite3.connect("my_database.db")
    cursor = conn.cursor()

    str = "INSERT INTO applications(name,email,phone,address,college,document) VALUES ('{name}','{email}',{phone},'{address}','{college}','{doc}');".format(
        name=name_entry.get(), email=email_entry.get(),phone=phone_entry.get(),address=address_entry.get(),college=college_entry.get(),doc=document_entry.get()
    )
    cursor.execute(str)

    conn.commit()
    conn.close()

    question_window.destroy()


question_window = tk.Tk()
question_label = tk.Button(question_window, text="yes", command=login)
answer_label = tk.Button(question_window, text="no", command=close)
statement_label = tk.Label(question_window, text="do u want an application form")
statement_label.pack()
question_label.pack()
answer_label.pack()
question_window.mainloop()
