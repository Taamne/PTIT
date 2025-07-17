from view.SearchPatientView import SearchPatientFrm
from view.UpdateMedicalRecordView import UpdateMedicalRecordFrm
from model.MedicalRecord import MedicalRecord
from model.MedicalRecordDAO import MedicalRecordDAO

class MedicalRecordController:
    def __init__(self):
        self.record = MedicalRecord()
        self.dao = MedicalRecordDAO()

    def open_search_patient_form(self):
        SearchPatientFrm(self)

    def open_update_form(self, idbn):
        self.current_idbn = idbn

        self.view = UpdateMedicalRecordFrm(self)

    def change_record(self):
        data = self.view.get_form_data()
         # Kiểm tra xem có trường nào bị bỏ trống không
        required_fields = ["dateCreate", "diagnosis", "treatmentDetails", "prescription", "tests_Results", "notes"]
        for field in required_fields:
            if not data.get(field):  # trường rỗng
                from tkinter import messagebox
                messagebox.showwarning("Thiếu thông tin", "Vui lòng điền đầy đủ thông tin!")
                return  # Dừng lại, không lưu
            
        #  Nếu đầy đủ, gán IDBN và lưu như thường

        data["IDBN"] = self.current_idbn  
        self.record.set_data(data)
        self.dao.insert_medical_record(self.record)
        self.view.show_success()
