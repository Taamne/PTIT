import sqlite3

class PatientDAO:
    def __init__(self, db_path="hospitals.db"):
        self.db_path = db_path

    # def search_patient(self, keyword):
    #     conn = sqlite3.connect(self.db_path)
    #     cursor = conn.cursor()
    #     cursor.execute("""
    #         SELECT fullName, dateOfBirth, phoneNumber, address, gender, notes, insuranceID
    #         FROM Patient
    #         WHERE fullName LIKE ? OR insuranceID LIKE ?
    #     """, (f'%{keyword}%', f'%{keyword}%'))
    #     results = cursor.fetchall()
    #     conn.close()
    #     return results
    def search_patient(self, keyword):
        conn = sqlite3.connect(self.db_path)
        cursor = conn.cursor()
        cursor.execute("""
            SELECT IDBN, fullName, insuranceID
            FROM Patient
            WHERE fullName LIKE ? OR IDBN LIKE ?
        """, (f'%{keyword}%', f'%{keyword}%')) #ORDER BY fullName 
        results = cursor.fetchall()
        conn.close()
        return results
