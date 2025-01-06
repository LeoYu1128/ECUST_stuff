class Dog:
    def __init__(self):
        self.sound = "wang~wang~~ "
    def bark(self):
        print(self.sound)

class Husky(Dog):
    def __init__(self):
        self.sound = "woo~~~wooo~~~~~~ "

niub = Dog()
niub.bark()
