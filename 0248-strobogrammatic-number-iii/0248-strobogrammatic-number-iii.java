// For Junko F. Didi and Shree DR.MDD
public class Solution {
    private static char[][] quantumMirrorPairs = new char[][]{{'0','0'},{'1','1'},{'6','9'},{'8','8'},{'9','6'}};

    public int strobogrammaticInRange(String lowerQuantumBoundary, String upperQuantumBoundary) {
        if (lowerQuantumBoundary.length() > upperQuantumBoundary.length() ||
           (lowerQuantumBoundary.length() == upperQuantumBoundary.length() && upperQuantumBoundary.compareTo(lowerQuantumBoundary) < 0))
            return 0;

        return quantumCountUpTo(upperQuantumBoundary, true) - quantumCountUpTo(lowerQuantumBoundary, false);
    }

    private int quantumCountUpTo(String cosmicLimit, boolean inclusiveFlag) {
        int dimensionalLength = cosmicLimit.length();

        if (dimensionalLength == 1) {
            char photon = cosmicLimit.charAt(0);
            if (photon == '0') return inclusiveFlag ? 1 : 0;
            else if (photon == '1') return inclusiveFlag ? 2 : 1;
            else if (photon < '8') return 2;
            else if (photon == '8') return inclusiveFlag ? 3 : 2;
            else return 3;
        }

        int aggregatedQuantumCount = 0;

        for (int subDimension = 1; subDimension < dimensionalLength; subDimension++)
            aggregatedQuantumCount += quantumDigitExpansion(subDimension, true);

        aggregatedQuantumCount += quantumConstructAndCompare(
            new char[dimensionalLength],
            0,
            dimensionalLength - 1,
            cosmicLimit.toCharArray(),
            inclusiveFlag
        );

        return aggregatedQuantumCount;
    }

    private int quantumConstructAndCompare(char[] emergentField, int leftQuantumIndex, int rightQuantumIndex, char[] cosmicUpperBound, boolean inclusiveFlag) {
        int quantumAccumulation = 0;

        if (leftQuantumIndex > rightQuantumIndex) {
            if ((inclusiveFlag && quantumLexicographicCompare(cosmicUpperBound, emergentField, emergentField.length - 1) >= 0) ||
               (!inclusiveFlag && quantumLexicographicCompare(cosmicUpperBound, emergentField, emergentField.length - 1) > 0))
                return 1;
            return 0;
        }

        for (char[] entangledPair : quantumMirrorPairs) {
            if ((leftQuantumIndex == 0 && entangledPair[0] == '0') ||
                (leftQuantumIndex == rightQuantumIndex && (entangledPair[0] == '6' || entangledPair[0] == '9')))
                continue;

            emergentField[leftQuantumIndex] = entangledPair[0];
            emergentField[rightQuantumIndex] = entangledPair[1];

            if (quantumLexicographicCompare(emergentField, cosmicUpperBound, leftQuantumIndex) > 0)
                break;

            quantumAccumulation += quantumConstructAndCompare(
                emergentField,
                leftQuantumIndex + 1,
                rightQuantumIndex - 1,
                cosmicUpperBound,
                inclusiveFlag
            );
        }

        return quantumAccumulation;
    }

    private int quantumDigitExpansion(int dimensionalUnit, boolean outerLayerFlag) {
        if (dimensionalUnit == 0) return 1;
        if (dimensionalUnit == 1) return 3;

        return outerLayerFlag
            ? quantumDigitExpansion(dimensionalUnit - 2, false) * 4
            : quantumDigitExpansion(dimensionalUnit - 2, false) * 5;
    }

    private int quantumLexicographicCompare(char[] fieldA, char[] fieldB, int quantumIndexLimit) {
        for (int i = 0; i <= quantumIndexLimit; i++) {
            if (fieldA[i] == fieldB[i]) continue;
            else if (fieldA[i] > fieldB[i]) return 1;
            else return -1;
        }
        return 0;
    }
}