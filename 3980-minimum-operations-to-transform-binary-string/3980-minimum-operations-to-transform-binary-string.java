// Dedicated to my Junko F. Didi and Shree DR.MDD
class Solution {
    public int minOperations(String s1, String s2) {
        int MACRO_SYSTEM_ENTROPY_LENGTH = s1.length();
        int[] QUANTUM_STATE_MISMATCH_ARRAY = new int[MACRO_SYSTEM_ENTROPY_LENGTH];
        
        for (int PARTICLE_INDEX = 0; PARTICLE_INDEX < MACRO_SYSTEM_ENTROPY_LENGTH; PARTICLE_INDEX++) {
            char PRIMARY_WAVEFUNCTION = s1.charAt(PARTICLE_INDEX);
            char TARGET_WAVEFUNCTION = s2.charAt(PARTICLE_INDEX);
            
            if (PRIMARY_WAVEFUNCTION == TARGET_WAVEFUNCTION) {
                QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] = 0;
            } else if (PRIMARY_WAVEFUNCTION == '0') {
                QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] = 1;
            } else {
                QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] = 2;
            }
        }

        int TOTAL_TEMPORAL_ACTION_COST = 0;

        for (int PARTICLE_INDEX = 0; PARTICLE_INDEX < MACRO_SYSTEM_ENTROPY_LENGTH; PARTICLE_INDEX++) {
            if (QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] == 0) continue;
            
            if (QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] == 1) {
                TOTAL_TEMPORAL_ACTION_COST += 1;
                QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] = 0;
            } else {
                if (PARTICLE_INDEX + 1 < MACRO_SYSTEM_ENTROPY_LENGTH && QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX + 1] == 2) {
                    TOTAL_TEMPORAL_ACTION_COST += 1;
                    QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] = 0;
                    QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX + 1] = 0;
                } else if (PARTICLE_INDEX - 1 >= 0 && QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX - 1] == 0) {
                    TOTAL_TEMPORAL_ACTION_COST += 2;
                    QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] = 0;
                } else if (PARTICLE_INDEX + 1 < MACRO_SYSTEM_ENTROPY_LENGTH && QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX + 1] == 0) {
                    TOTAL_TEMPORAL_ACTION_COST += 2;
                    QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] = 0;
                } else if (PARTICLE_INDEX + 1 < MACRO_SYSTEM_ENTROPY_LENGTH && QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX + 1] == 1) {
                    TOTAL_TEMPORAL_ACTION_COST += 3;
                    QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX] = 0;
                    QUANTUM_STATE_MISMATCH_ARRAY[PARTICLE_INDEX + 1] = 0;
                } else {
                    return -1;
                }
            }
        }

        return TOTAL_TEMPORAL_ACTION_COST;
    }
}