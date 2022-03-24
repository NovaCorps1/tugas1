class Student:
    jumlahBB = 0
    jumlahUmur = 0


    def __init__(self, nama, umur, tinggi, berat, jenisKelamin):
        self.nama = nama
        self.umur = umur
        self.tinggi = tinggi    
        self.berat = berat
        self.jenisKelamin = jenisKelamin
        
        Student.jumlahBB += berat
        Student.jumlahUmur += umur
        
    def belajar(self, kegiatan):
        print(f'\n{self.nama} sedang belajar {kegiatan}')
    
    def membaca(self, kegiatan):
        print(f'{self.nama} sedang membaca {kegiatan}')

    def berdiri(self, kegiatan):
        print(f'{self.nama} sedang berdiri {kegiatan}')

    def berjalan(self, kegiatan):
        print(f'{self.nama} sedang berjalan {kegiatan}')

    def tampilkanJumlahBB():
        print(f'\nJumlah berat badan\t= {Student.jumlahBB} Kg')

    def tampilkanJumlahUmur():
        print(f'Jumlah umur\t\t= {Student.jumlahUmur} Tahun')

mahasiswa1 = Student('Rijal', 20, 165, 48, 'Laki-laki')
mahasiswa2 = Student('Dedi', 24, 160, 59, 'Laki-laki')
mahasiswa3 = Student('Erick', 26, 168, 57, 'Perempuan')

mahasiswa1.belajar('TOEFL')
mahasiswa1.membaca('novel "Kata"')
mahasiswa1.berdiri('di ruang tunggu')
mahasiswa1.berjalan('ke taman')

mahasiswa2.belajar('statistika')
mahasiswa2.membaca('jurnal')
mahasiswa2.berdiri('di depan kelas karena datang terlambat')
mahasiswa2.berjalan('ke gedung B')

mahasiswa3.belajar('perpajakan')
mahasiswa3.membaca('referensi buku STAN')
mahasiswa3.berdiri('di antrian masuk')
mahasiswa3.berjalan('ke ruang ujian')

Student.tampilkanJumlahBB()
Student.tampilkanJumlahUmur()

    


