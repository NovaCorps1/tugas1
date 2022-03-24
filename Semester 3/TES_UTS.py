import random
import sys

class Character():
    # Setup character
    def __init__(self, nama, damage, hp):
        self.nama = nama
        self.damage = damage
        self.hp = hp
    
    # Print character
    def printCharacter(self):
        print('Name\t\t: ' + self.nama)
        print('Damage\t\t: ' + str(self.damage))
        print('Hitpoint\t: ' + str(self.hp))
    
    # Level up character
    def levelUp(self, damage, hp):
        self.damage += damage
        self.hp += hp

# Define character
knight = Character('Knight', 167, 1380)
valkyrie = Character('Valkyrie', 201, 1504)
pekka = Character('P.E.K.K.A', 744, 3431)

# Taro character di list biar bisa dipanggil random pake index
characters = [knight, valkyrie, pekka]

# Di loop sampe user tulis no
while(True):
    # Nanya user mo buka open chest
    openChest = input('\nDo you want to Open chest? (yes/no) : ')
    # kalo yes
    if openChest == 'yes':
        # pilih random karakter==
        randomCharacter = characters[random.randint(0,2)]
        # level up random angka
        randomCharacter.levelUp(random.randint(250,750),random.randint(1000,1500))
        # print character
        randomCharacter.printCharacter()
    # kalo no program dihentikan pake break
    elif openChest == 'no':
        sys.exit('Thanks, Program Terminated\n')
        break
    # kalo ga yes/no kasi message kek dibawah
    else:
        print('Please Type yes or no')