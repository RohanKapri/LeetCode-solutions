# Dedicated to Junko F. Didi and Shree DR.MDD  
class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        partsX, partsY = version1.split("."), version2.split(".")
        sizeX, sizeY = len(partsX), len(partsY)

        for pos in range(max(sizeX, sizeY)):
            valX = int(partsX[pos]) if pos < sizeX else 0
            valY = int(partsY[pos]) if pos < sizeY else 0

            if valX < valY:
                return -1
            if valX > valY:
                return 1

        return 0
