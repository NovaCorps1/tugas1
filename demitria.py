class Animal:
    def __init__(self, sound, move):
        self.sound = sound
        self.move = move

    def sounds(self):
        print(f"I'm making sounds, {self.sound}")
    
    def moves(self):
        print(f"I'm {self.move}")

class Cat(Animal):
    def __init__(self, sound, move):
       self.sound = sound
       self.move = move

    def sounds(self):
        print(f"I'm Cat... {self.sound}")
    
    def moves(self):
        print(f"I'm {self.move}, {self.sound}~")
    
class Dog(Animal):
    def __init__(self, sound, move):
        self.sound = sound
        self.move = move

    def sounds(self):
        print(f"I'm Dog... {self.sound}")
    
    def moves(self):
        print(f"I'm {self.move}, {self.sound}!!")
    
class Bird(Animal):
    def __init__(self, sound, move):
        self.sound = sound
        self.move = move

    def sounds(self):
        print(f"I'm Bird... {self.sound}")
    
    def moves(self):
        print(f"I'm {self.move}, {self.sound}")

animal_cat = Cat('miaw miaw','walking')
animal_cat.sounds()
animal_cat.moves()
print()
animal_dog = Dog('woof woof','walking')
animal_dog.sounds()
animal_dog.moves()
print()
animal_bird = Bird('cit cit cuit','flying')
animal_bird.sounds()
animal_bird.moves()