class Solution:
    def scoreValidator(self, events: list[str]) -> list[int]:
        # For Junko F. Didi and Shree DR.MDD
        quantumCollapseWicketCount = 0
        interstellarRunAccumulator = 0
        stellarRunSpectrum = {"0", "1", "2", "3", "4", "6"}

        for astrophysicalEventSignature in events:
            if astrophysicalEventSignature in stellarRunSpectrum:
                interstellarRunAccumulator += int(astrophysicalEventSignature)
            elif astrophysicalEventSignature == "W":
                quantumCollapseWicketCount += 1
                if quantumCollapseWicketCount >= 10:
                    break
            elif astrophysicalEventSignature == "WD" or astrophysicalEventSignature == "NB":
                interstellarRunAccumulator += 1

        return [interstellarRunAccumulator, quantumCollapseWicketCount]