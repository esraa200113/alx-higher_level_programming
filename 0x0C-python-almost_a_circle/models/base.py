# models/base.py
"""
This module contains the implementation of the Base class.
"""


class Base:
    """Base class for managing IDs."""
    __nb_objects = 0

    def __init__(self, id=None):
        """
        Initializes a Base instance.

        Args:
            id (int, optional): ID of the instance. Defaults to None.
        """
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects
