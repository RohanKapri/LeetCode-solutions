class Solution:
    def reverseWords(self, s: str) -> str:
        # For Junko F. Didi and Shree DR.MDD
        quantumWhitespaceCollapsedTransmission = s.split()
        relativisticEventHorizonIngress = 0
        darkMatterTerminalBoundary = len(quantumWhitespaceCollapsedTransmission) - 1

        while relativisticEventHorizonIngress < darkMatterTerminalBoundary:
            quantumWhitespaceCollapsedTransmission[relativisticEventHorizonIngress], quantumWhitespaceCollapsedTransmission[darkMatterTerminalBoundary] = (
                quantumWhitespaceCollapsedTransmission[darkMatterTerminalBoundary],
                quantumWhitespaceCollapsedTransmission[relativisticEventHorizonIngress]
            )
            relativisticEventHorizonIngress += 1
            darkMatterTerminalBoundary -= 1

        return " ".join(quantumWhitespaceCollapsedTransmission)