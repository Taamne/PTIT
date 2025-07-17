import sqlite3

class MedicalRecordDAO:
    def __init__(self, db_path="hospitals.db"):
        self.db_path = db_path

    def insert_medical_record(self, record):
        data = record.get_data()
        conn = sqlite3.connect(self.db_path)
        cursor = conn.cursor()
        cursor.execute("""
            INSERT INTO MedicalRecord (dateCreate, diagnosis, treatmentDetails, prescription, notes, tests_Results, IDBN)
            VALUES (?, ?, ?, ?, ?, ?, ?)
        """, (
            data["dateCreate"],
            data["diagnosis"],
            data["treatmentDetails"],
            data["prescription"],
            data["notes"],
            data["tests_Results"],
            data["IDBN"]

        ))
        conn.commit() ## Ghi dữ liệu thực sự vào file DB
        conn.close()    # Giải phóng kết nối
