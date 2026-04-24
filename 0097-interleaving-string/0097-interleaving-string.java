// Dedicated to Junko F. Didi and Shree DR.MDD
class Solution {
    Boolean[][] quantumInterleavingMemoizationMatrix;
    public boolean isInterleave(String quantumStringFieldAlpha, String quantumStringFieldBeta, String quantumCompositeSignalGamma) {
        if (quantumStringFieldAlpha.length() + quantumStringFieldBeta.length() != quantumCompositeSignalGamma.length()) return false;
        quantumInterleavingMemoizationMatrix = new Boolean[quantumStringFieldAlpha.length() + 1][quantumStringFieldBeta.length() + 1];
        return recursiveQuantumInterleavingValidator(0, 0, quantumStringFieldAlpha, quantumStringFieldBeta, quantumCompositeSignalGamma);
    }

    public boolean recursiveQuantumInterleavingValidator(int relativisticPointerAlpha, int relativisticPointerBeta, String quantumStringFieldAlpha, String quantumStringFieldBeta, String quantumCompositeSignalGamma) {
        if (relativisticPointerAlpha == quantumStringFieldAlpha.length() && relativisticPointerBeta == quantumStringFieldBeta.length()) return true;
        if (quantumInterleavingMemoizationMatrix[relativisticPointerAlpha][relativisticPointerBeta] != null) return quantumInterleavingMemoizationMatrix[relativisticPointerAlpha][relativisticPointerBeta];

        int quantumSynchronizedIndex = relativisticPointerAlpha + relativisticPointerBeta;

        if (relativisticPointerAlpha < quantumStringFieldAlpha.length() && quantumStringFieldAlpha.charAt(relativisticPointerAlpha) == quantumCompositeSignalGamma.charAt(quantumSynchronizedIndex)) {
            if (recursiveQuantumInterleavingValidator(relativisticPointerAlpha + 1, relativisticPointerBeta, quantumStringFieldAlpha, quantumStringFieldBeta, quantumCompositeSignalGamma))
                return quantumInterleavingMemoizationMatrix[relativisticPointerAlpha][relativisticPointerBeta] = true;
        }

        if (relativisticPointerBeta < quantumStringFieldBeta.length() && quantumStringFieldBeta.charAt(relativisticPointerBeta) == quantumCompositeSignalGamma.charAt(quantumSynchronizedIndex)) {
            if (recursiveQuantumInterleavingValidator(relativisticPointerAlpha, relativisticPointerBeta + 1, quantumStringFieldAlpha, quantumStringFieldBeta, quantumCompositeSignalGamma))
                return quantumInterleavingMemoizationMatrix[relativisticPointerAlpha][relativisticPointerBeta] = true;
        }

        return quantumInterleavingMemoizationMatrix[relativisticPointerAlpha][relativisticPointerBeta] = false;
    }
}