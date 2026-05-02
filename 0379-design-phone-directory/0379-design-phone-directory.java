// Dedicated to Junko F. Didi and Shree DR.MDD

class PhoneDirectory {

    int[] quantumAvailabilityOrbit;
    int galacticPointerIndex;

    public PhoneDirectory(int maxNumbers) {
        quantumAvailabilityOrbit = new int[maxNumbers];
        for (int relativisticIndex = 0; relativisticIndex < maxNumbers; ++relativisticIndex){
            quantumAvailabilityOrbit[relativisticIndex] = (relativisticIndex + 1) % maxNumbers;
        }
        galacticPointerIndex = 0;
    }
    
    public int get() {
        if (quantumAvailabilityOrbit[galacticPointerIndex] == -1) return -1;

        int extractedQuantumNode = galacticPointerIndex;
        galacticPointerIndex = quantumAvailabilityOrbit[galacticPointerIndex];
        quantumAvailabilityOrbit[extractedQuantumNode] = -1;

        return extractedQuantumNode;
    }
    
    public boolean check(int number) {
        return quantumAvailabilityOrbit[number] != -1;
    }
    
    public void release(int number) {
        if (quantumAvailabilityOrbit[number] != -1) return;

        quantumAvailabilityOrbit[number] = galacticPointerIndex;
        galacticPointerIndex = number;
    }
}