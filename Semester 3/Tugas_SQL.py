import pymysql.cursors

db = pymysql.connect(db = "tugaspbo_database",user = "root", 
                passwd = "", host = "localhost", port = 3306)
cursor = db.cursor()
cursor.execute("SELECT * FROM program_db")
results = cursor.fetchall()

for row in results:
    print("Nama\t\t\t: " + row[0])
    print("NIM\t\t\t: " + str(row[1]))
    print("Kelas\t\t\t: " + row[2])
    print("Program Studi\t\t: " + row[3])
    print("Jurusan\t\t\t: " + row[4])
    print("Perguruan Tinggi\t: " + row[5])
