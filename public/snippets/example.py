import astro

class Object:
    __slots__ = [
        "_data"
    ]

    def __init__(self):
        # Position, velocity, width, height, angle
        self._data = ((1.0, 2.0), (3.0, 4.0), 42, 42, 90)
      
astro.follow((1.0, 2.0), (3.0, 4.0), [Object(), Object(), Object()], 5.0, True, (16, 64))
