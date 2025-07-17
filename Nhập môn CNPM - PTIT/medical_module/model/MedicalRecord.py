class MedicalRecord:
    def __init__(self):
        self.dateCreate = ""
        self.diagnosis = ""
        self.treatmentDetails = ""
        self.prescription = ""
        self.notes = ""
        self.tests_Results = ""
        self.IDBN = None  # thêm thuộc tính

    def set_data(self, data: dict):
        self.dateCreate = data.get("dateCreate", "")
        self.diagnosis = data.get("diagnosis", "")
        self.treatmentDetails = data.get("treatmentDetails", "")
        self.prescription = data.get("prescription", "")
        self.notes = data.get("notes", "")
        self.tests_Results = data.get("tests_Results", "")
        self.IDBN = data.get("IDBN")

    def get_data(self):
        return {
            "dateCreate": self.dateCreate,
            "diagnosis": self.diagnosis,
            "treatmentDetails": self.treatmentDetails,
            "prescription": self.prescription,
            "notes": self.notes,
            "tests_Results": self.tests_Results,
            "IDBN": self.IDBN
        }
