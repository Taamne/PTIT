import tkinter as tk
from controller.medical_record_controller import MedicalRecordController

class DoctorHomeFrm:
    def __init__(self):
        self.root = tk.Tk()
        self.root.title("Doctor Home")
        self.root.geometry("300x200")
        tk.Button(self.root, text="Cập nhật kết quả khám", command=self.open_search_patient_form).pack(pady=50)
        self.root.mainloop()

    def open_search_patient_form(self):
        MedicalRecordController().open_search_patient_form()
