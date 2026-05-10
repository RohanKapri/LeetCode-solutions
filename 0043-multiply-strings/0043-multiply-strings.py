class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        quantumFirstNumericalManifestationField = 0
        relativisticSecondNumericalManifestationField = 0

        for astrophysicalDigitPhotonSignature in num1:
            quantumFirstNumericalManifestationField = (
                quantumFirstNumericalManifestationField * 10 +
                (ord(astrophysicalDigitPhotonSignature) - 48)
            )

        for gravitationalDigitPhotonSignature in num2:
            relativisticSecondNumericalManifestationField = (
                relativisticSecondNumericalManifestationField * 10 +
                (ord(gravitationalDigitPhotonSignature) - 48)
            )

        return f"{quantumFirstNumericalManifestationField * relativisticSecondNumericalManifestationField}"