print ("PROGRAM  MENGHITUNG NILAI TERKECIL & TERBESAR SERTA NILAI RATA-RATA")

n = int(input("\nMasukan Jumlah Bilangan = "))
bil = []
tot = 0
for x in range(n):
    m = x+1
    a = int(input("Bilangan ke %d = "%m))
    bil.append(a)
    tot += bil[x]
    rata2 = tot / n

print("\nBilangan Terkecil :", min(bil))
print("Bilangan Terbesar :", max(bil))
print("Nilai Rata-rata   : ", rata2)