import tkinter as tk
from model.PatientDAO import PatientDAO
from tkinter import messagebox

class SearchPatientFrm:
    def __init__(self, controller):
        self.controller = controller
        self.root = tk.Toplevel()
        self.root.title("Tìm kiếm bệnh nhân")
        self.dao = PatientDAO()
        tk.Label(self.root, text="Nhập tên hoặc mã bệnh nhân:").pack()
        self.entry = tk.Entry(self.root)
        self.entry.pack()
        tk.Button(self.root, text="Tìm kiếm", command=self.search_patient).pack()
        self.result_list = tk.Listbox(self.root, width=50)
        self.result_list.pack()
        tk.Button(self.root, text="Chọn", command=self.select_patient).pack()
        self.result_map = {}  # Map display line → IDBN

    def search_patient(self):
        # keyword = self.entry.get()
        keyword = self.entry.get().strip().lower()
        if not keyword:
            tk.messagebox.showinfo("Thông báo", "khoogn co j.")
            return
        results = self.dao.search_patient(keyword)
        self.result_list.delete(0, tk.END)
        self.result_map.clear()
        if not results:
            tk.messagebox.showinfo("Thông báo", "Không tìm thấy bệnh nhân.")
            return # giữ nguyên giao diện tìm kiếm, không đóng

        for row in results:
            idbn, name, insurance = row
            display = f"IDBN: {idbn} | Tên: {name} | BHYT: {insurance}"
            self.result_list.insert(tk.END, display)
            self.result_map[display] = idbn

    def select_patient(self):
        selection = self.result_list.curselection() #Lấy vị trí dòng đang được chọn trong Listbox
        if not selection:
            return  # Không làm gì cả, giữ nguyên form

        selected_line = self.result_list.get(selection[0])
        idbn = self.result_map.get(selected_line)
        if idbn:
            self.controller.open_update_form(idbn)

