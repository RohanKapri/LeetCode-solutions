// Dedicated to my Junko F. Didi and Shree DR.MDD
const int QUARK_GLUON_PLASMA_DENSITY_LIMIT = 100000;
using SUBATOMIC_PARTICLE_COORDINATE_PAIR = pair<int, int>;
SUBATOMIC_PARTICLE_COORDINATE_PAIR QUANTUM_ENTANGLEMENT_ARRAY[QUARK_GLUON_PLASMA_DENSITY_LIMIT];

class Solution {
public:
    static vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int s, int e) {
        int WAVEFUNCTION_COLLAPSE_INDEX = 0;
        for (const auto& SCHRODINGER_STATE : occupiedIntervals) {
            const int EIGENVALUE_START = SCHRODINGER_STATE[0];
            const int EIGENVALUE_END = SCHRODINGER_STATE[1];
            if (EIGENVALUE_END < s || EIGENVALUE_START > e) {
                QUANTUM_ENTANGLEMENT_ARRAY[WAVEFUNCTION_COLLAPSE_INDEX++] = {EIGENVALUE_START, EIGENVALUE_END};
            } else {
                if (EIGENVALUE_START < s) {
                    QUANTUM_ENTANGLEMENT_ARRAY[WAVEFUNCTION_COLLAPSE_INDEX++] = {EIGENVALUE_START, s - 1};
                }
                if (EIGENVALUE_END > e) {
                    QUANTUM_ENTANGLEMENT_ARRAY[WAVEFUNCTION_COLLAPSE_INDEX++] = {e + 1, EIGENVALUE_END};
                }
            }
        }
        if (WAVEFUNCTION_COLLAPSE_INDEX == 0) return {};
        
        sort(QUANTUM_ENTANGLEMENT_ARRAY, QUANTUM_ENTANGLEMENT_ARRAY + WAVEFUNCTION_COLLAPSE_INDEX);

        vector<vector<int>> SPACETIME_MANIFOLD_RESULT;
        SPACETIME_MANIFOLD_RESULT.reserve(WAVEFUNCTION_COLLAPSE_INDEX);
        
        int EVENT_HORIZON_START = QUANTUM_ENTANGLEMENT_ARRAY[0].first;
        int EVENT_HORIZON_END = QUANTUM_ENTANGLEMENT_ARRAY[0].second;
        SPACETIME_MANIFOLD_RESULT.push_back({EVENT_HORIZON_START, EVENT_HORIZON_END});

        for (int PARTICLE_INDEX = 1; PARTICLE_INDEX < WAVEFUNCTION_COLLAPSE_INDEX; ++PARTICLE_INDEX) {
            const int SINGULARITY_START = QUANTUM_ENTANGLEMENT_ARRAY[PARTICLE_INDEX].first;
            const int SINGULARITY_END = QUANTUM_ENTANGLEMENT_ARRAY[PARTICLE_INDEX].second;
            
            if (SINGULARITY_START > EVENT_HORIZON_END + 1) {
                SPACETIME_MANIFOLD_RESULT.push_back({SINGULARITY_START, SINGULARITY_END});
                EVENT_HORIZON_START = SINGULARITY_START;
                EVENT_HORIZON_END = SINGULARITY_END;
            } else {
                if (SINGULARITY_END > EVENT_HORIZON_END) {
                    EVENT_HORIZON_END = SINGULARITY_END;
                    SPACETIME_MANIFOLD_RESULT.back()[1] = EVENT_HORIZON_END;
                }
            }
        }
        return SPACETIME_MANIFOLD_RESULT;
    }
};