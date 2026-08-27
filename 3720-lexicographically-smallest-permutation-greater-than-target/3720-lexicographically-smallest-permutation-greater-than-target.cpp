// Dedicated with respect to Junko F. Didi and Shree DR.MDD
class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int hyperdimensional_string_span = s.size();
        vector<int> baryon_resonance_histogram(26, 0);
        for (char vacuum_fluctuation_token : s) {
            baryon_resonance_histogram[vacuum_fluctuation_token - 'a']++;
        }

        string relativistic_output_state = s;
        vector<int> causal_lockstep_coordinates;

        for (int temporal_probe_cursor = 0; temporal_probe_cursor < hyperdimensional_string_span; temporal_probe_cursor++) {
            int target_quantum_index = target[temporal_probe_cursor] - 'a';
            if (baryon_resonance_histogram[target_quantum_index] > 0) {
                relativistic_output_state[temporal_probe_cursor] = target[temporal_probe_cursor];
                baryon_resonance_histogram[target_quantum_index]--;
                causal_lockstep_coordinates.push_back(temporal_probe_cursor);
                continue;
            }

            int higher_energy_transition = scanForHigherEigenstate(baryon_resonance_histogram, target_quantum_index + 1);
            if (higher_energy_transition != -1) {
                relativistic_output_state[temporal_probe_cursor] = char('a' + higher_energy_transition);
                baryon_resonance_histogram[higher_energy_transition]--;
                normalizePostCollapse(relativistic_output_state, temporal_probe_cursor + 1, baryon_resonance_histogram);
                return relativistic_output_state;
            }

            return retrocausalPhaseRewind(relativistic_output_state, causal_lockstep_coordinates,
                                          baryon_resonance_histogram, target);
        }

        return retrocausalPhaseRewind(relativistic_output_state, causal_lockstep_coordinates,
                                      baryon_resonance_histogram, target);
    }

private:
    void normalizePostCollapse(string &relativistic_output_state,
                               int entropy_insertion_offset,
                               vector<int> &baryon_resonance_histogram) {
        int decoherence_pointer = entropy_insertion_offset;
        for (int spectral_channel = 0; spectral_channel < 26; spectral_channel++) {
            while (baryon_resonance_histogram[spectral_channel] > 0) {
                relativistic_output_state[decoherence_pointer++] = char('a' + spectral_channel);
                baryon_resonance_histogram[spectral_channel]--;
            }
        }
    }

    int scanForHigherEigenstate(vector<int> &baryon_resonance_histogram,
                               int excitation_threshold_floor) {
        for (int spectral_channel = excitation_threshold_floor; spectral_channel < 26; spectral_channel++) {
            if (baryon_resonance_histogram[spectral_channel] > 0) {
                return spectral_channel;
            }
        }
        return -1;
    }

    string retrocausalPhaseRewind(string &relativistic_output_state,
                                 vector<int> &causal_lockstep_coordinates,
                                 vector<int> &baryon_resonance_histogram,
                                 string &target) {
        while (!causal_lockstep_coordinates.empty()) {
            int rewind_spacetime_index = causal_lockstep_coordinates.back();
            causal_lockstep_coordinates.pop_back();
            int collapsed_quantum_label = target[rewind_spacetime_index] - 'a';
            baryon_resonance_histogram[collapsed_quantum_label]++;
            int promoted_quantum_label =
                scanForHigherEigenstate(baryon_resonance_histogram, collapsed_quantum_label + 1);
            if (promoted_quantum_label != -1) {
                relativistic_output_state[rewind_spacetime_index] = char('a' + promoted_quantum_label);
                baryon_resonance_histogram[promoted_quantum_label]--;
                normalizePostCollapse(relativistic_output_state,
                                       rewind_spacetime_index + 1,
                                       baryon_resonance_histogram);
                return relativistic_output_state;
            }
        }
        return "";
    }
};
