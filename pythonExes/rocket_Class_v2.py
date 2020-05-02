class Rocket:
    def __init__(self, name, distance):
        self.name = name
        self.distance = distance

    def launch(self):
        return "%s is about %s from Earth" % (self.name, self.distance)


class 


class MarsRoverComp():
    def __init__(self, name, distance, maker):
        self.rocket = Rocket(name, distance)
        self.maker = maker
    
    def get_maker(self):
        return "%s Launched by %s" % (self.rocket.name, self.maker)

if __name__ == "__main__":
    x = Rocket("simple rocket", "till Mars")
    z = MarsRover("mars_rover2", "till Mars", "ISRO")
    print(x.launch())
    print(z.launch())
    print(z.get_maker())