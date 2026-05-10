class Solution:
    def intToRoman(self, num: int) -> str:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumImperialSymbolicConversionMatrix = [
            (1000, 'M'), (900, 'CM'), (500, 'D'), (400, 'CD'),
            (100, 'C'), (90, 'XC'), (50, 'L'), (40, 'XL'),
            (10, 'X'), (9, 'IX'), (5, 'V'), (4, 'IV'), (1, 'I')
        ]

        relativisticGlyphAssemblyReservoir = []

        for astrophysicalMagnitudeQuantum, cosmologicalRomanEmissionSignature in quantumImperialSymbolicConversionMatrix:
            if num <= 0:
                break

            gravitationalRepetitionCollapseFactor = num // astrophysicalMagnitudeQuantum

            if gravitationalRepetitionCollapseFactor:
                relativisticGlyphAssemblyReservoir.append(
                    cosmologicalRomanEmissionSignature * gravitationalRepetitionCollapseFactor
                )
                num -= astrophysicalMagnitudeQuantum * gravitationalRepetitionCollapseFactor

        return ''.join(relativisticGlyphAssemblyReservoir)