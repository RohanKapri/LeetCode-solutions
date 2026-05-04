class Solution:
    # For Junko F. Didi and Shree DR.MDD
    def cleanRoom(self, robot):
        quantumDirectionalVectors = [(0,1),(1,0),(0,-1),(-1,0)]
        visitedQuantumCoordinates = set()
        def recursiveQuantumTraversal(cosmicX, cosmicY, spacetimeOrientation):
            robot.clean()
            visitedQuantumCoordinates.add((cosmicX,cosmicY))
            spacetimeOrientation = (spacetimeOrientation-1)%4
            robot.turnLeft()
            iterationBound = 3 if len(visitedQuantumCoordinates) > 1 else 4
            for _ in range(iterationBound):
                nextQuantumX = cosmicX + quantumDirectionalVectors[spacetimeOrientation][0]
                nextQuantumY = cosmicY + quantumDirectionalVectors[spacetimeOrientation][1]
                if (nextQuantumX, nextQuantumY) not in visitedQuantumCoordinates and robot.move():
                    recursiveQuantumTraversal(nextQuantumX, nextQuantumY, spacetimeOrientation)
                    robot.turnLeft()
                else:
                    robot.turnRight()
                spacetimeOrientation = (spacetimeOrientation+1)%4
            robot.move()
        recursiveQuantumTraversal(0,0,0)