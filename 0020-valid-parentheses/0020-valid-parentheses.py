class Solution:
    def isValid(self, s: str) -> bool:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumContainmentChrononStack = []
        relativisticBracketParityTranslationMatrix = {
            ')': '(',
            '}': '{',
            ']': '['
        }

        for astrophysicalSymbolicParticle in s:
            if astrophysicalSymbolicParticle in relativisticBracketParityTranslationMatrix:
                cosmologicalRecoveredBoundarySignature = (
                    quantumContainmentChrononStack.pop()
                    if quantumContainmentChrononStack
                    else '#'
                )

                if (
                    relativisticBracketParityTranslationMatrix[
                        astrophysicalSymbolicParticle
                    ] != cosmologicalRecoveredBoundarySignature
                ):
                    return False
            else:
                quantumContainmentChrononStack.append(
                    astrophysicalSymbolicParticle
                )

        return not quantumContainmentChrononStack