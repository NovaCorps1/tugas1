class Animal:
    
    def __init__(self,name,age,species):
        self.name = name
        self.age = age
        self.species = species

    def greeting(self):
        print(f"Name: {self.name} Age: {self.age} species: {self.species}")

    def sounds(self):
        print("Iam making sounds...")

    def move(self):
        print("Iam moving...")

class cats(Animal):

    def __init__(self,name,age,species,race):
        super().__init__(name,age,species)
        self.race = race
    
    def greeting(self):
        super().greeting()
        print(f"Iam {self.race} Cat Meow Meow")

    def sounds(self):
        super().sounds()
        print("Meow")

    def move(self):
        super().move()
        print("Iam Walking with my 4 cute legs")

class dogs(Animal):

    def __init__(self,name,age,species,race):
        super().__init__(name,age,species)
        self.race = race

    def sounds(self):
        super().sounds()
        print("Woof")

    def move(self):
        super().move()
        print("Iam running with my 4 legs")

class bird(Animal):
    
    def __init__(self,name,age,species,race):
        super().__init__(name,age,species)
        self.race = race

    def sounds(self):
        super().sounds()
        print("Iam chirping")

    def move(self):
        super().move()
        print("Iam Flying with my wings")

if __name__ == "__main__":
    print()
    c1 = cats("Poni",4,"Mammal","Anggora")
    c1.greeting()
    c1.sounds()
    c1.move()
    print()
    d1 = dogs("Siro",5,"Mammal","Golden Retriever")
    d1.greeting()
    d1.sounds()
    d1.move()
    print()
    b1 = bird("Phoenix",1,"Aves","Love Bird")
    b1.greeting()
    b1.sounds()
    b1.move()