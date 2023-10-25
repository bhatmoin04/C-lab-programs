import os

for file in os.listdir():
    if "(2)" in file:
        os.remove(file)