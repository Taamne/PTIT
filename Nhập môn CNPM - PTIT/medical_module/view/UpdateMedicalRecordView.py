import tkinter as tk
from tkinter import messagebox

class UpdateMedicalRecordFrm:
    def __init__(self, controller):
        self.controller = controller
        self.root = tk.Toplevel()
        self.root.title("Cập nhật kết quả khám")
        self.build_form()

    def build_form(self):
        self.entries = {} #từ điển

        fields = {
            "dateCreate": "Ngày khám",
            "diagnosis": "Chẩn đoán",
            "treatmentDetails": "Đề xuất điều trị",
            "prescription": "Danh sách thuốc",
            "tests_Results": "Kết quả xét nghiệm"
        }

        for key, label_text in fields.items():
            tk.Label(self.root, text=label_text).pack(anchor="w", padx=20, pady=(5, 0))
            entry = tk.Entry(self.root, width=50)
            entry.pack(padx=20)
            self.entries[key] = entry #Lưu widget Entry theo key vào dictionary self.entrie

        tk.Label(self.root, text="Ghi chú tình trạng").pack(anchor="w", padx=20, pady=(5, 0))
        self.notes = tk.Text(self.root, height=4, width=50)
        self.notes.pack(padx=20)

        # Nút Lưu và Hủy trong cùng một hàng
        btn_frame = tk.Frame(self.root)
        btn_frame.pack(pady=15)

        tk.Button(btn_frame, text="Lưu", command=self.controller.change_record, width=15).pack(side="left", padx=10)
        tk.Button(btn_frame, text="Hủy", command=self.cancel, width=15).pack(side="left", padx=10)

    def get_form_data(self):
        return {
            "dateCreate": self.entries["dateCreate"].get(),
            "diagnosis": self.entries["diagnosis"].get(),
            "treatmentDetails": self.entries["treatmentDetails"].get(),
            "prescription": self.entries["prescription"].get(),
            "tests_Results": self.entries["tests_Results"].get(),
            "notes": self.notes.get("1.0", tk.END).strip()
        }
# dữ liệu trả về dạng dict 
#    {
#   "dateCreate": "2025-05-08",
#   "diagnosis": "Viêm họng",
#   "treatmentDetails": "Uống thuốc + nghỉ ngơi",
#   "prescription": "Paracetamol",
#   "tests_Results": "Âm tính COVID",
#   "notes": "Bệnh nhân ho khan, không sốt."
# }

    def show_success(self):
        from view.DoctorHomeView import DoctorHomeFrm
        if messagebox.showinfo("Thông báo", "Cập nhật thành công!") == "ok":
            self.root.destroy()
            DoctorHomeFrm()
    # def show_success(self):
    #     messagebox.showinfo("Thông báo", "Cập nhật thành công!")
    #     self.root.destroy()
    #     # KHÔNG gọi DoctorHomeFrm() ở đây nếu đã có mainloop đang chạy

    def cancel(self):
            from view.DoctorHomeView import DoctorHomeFrm

            self.root.destroy()
            DoctorHomeFrm()
    # def cancel(self):
    #     self.root.destroy()
    #     # KHÔNG gọi DoctorHomeFrm()
