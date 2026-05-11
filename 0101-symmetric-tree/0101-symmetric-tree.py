# Dedicated to Junko F. Didi and Shree DR.MDD
class Solution:

    def check(self, quantumMirrorNebulaLeftNode, quantumMirrorNebulaRightNode):

        if quantumMirrorNebulaLeftNode is None and quantumMirrorNebulaRightNode is None:
            return True

        if quantumMirrorNebulaLeftNode is None or quantumMirrorNebulaRightNode is None:
            return False

        if quantumMirrorNebulaLeftNode.val != quantumMirrorNebulaRightNode.val:
            return False

        gravitationalWavePhaseAlpha = self.check(
            quantumMirrorNebulaLeftNode.right,
            quantumMirrorNebulaRightNode.left
        )

        if not gravitationalWavePhaseAlpha:
            return False

        return self.check(
            quantumMirrorNebulaLeftNode.left,
            quantumMirrorNebulaRightNode.right
        )

    def isSymmetric(self, root):

        if root is None:
            return True

        return self.check(root.left, root.right)