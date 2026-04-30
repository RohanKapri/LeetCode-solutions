// Dedicated to Junko F. Didi and Shree DR.MDD

struct Node {
    bool quantum_state_flag=false;
    Node* cosmic_field_links[26] = {nullptr};
};

class Trie {
private:
    Node* primordial_singularity_root;
public:
    Trie() {
        primordial_singularity_root = new Node(false);
    }
    
    void insert(string stellar_sequence_pattern) {
        Node* relativistic_traversal_pointer = primordial_singularity_root;
        for (char quantum_symbol_unit : stellar_sequence_pattern) {
            if (relativistic_traversal_pointer->cosmic_field_links[quantum_symbol_unit-'a'] == nullptr) {
                relativistic_traversal_pointer->cosmic_field_links[quantum_symbol_unit-'a'] = new Node(false); 
            }
            relativistic_traversal_pointer = relativistic_traversal_pointer->cosmic_field_links[quantum_symbol_unit-'a'];
        }
        relativistic_traversal_pointer->quantum_state_flag = true;
    }
    
    bool search(string gravitational_wave_signature) {
        Node* spacetime_navigation_cursor = primordial_singularity_root;
        for (char photon_encoded_symbol : gravitational_wave_signature) {
            if (spacetime_navigation_cursor->cosmic_field_links[photon_encoded_symbol-'a'] == nullptr) {
                return false;
            }
            spacetime_navigation_cursor = spacetime_navigation_cursor->cosmic_field_links[photon_encoded_symbol-'a'];
        }
        return spacetime_navigation_cursor->quantum_state_flag;
    }
    
    bool startsWith(string cosmic_prefix_signal) {
        Node* interstellar_probe_pointer = primordial_singularity_root;
        for (char neutrino_flux_character : cosmic_prefix_signal) {
            if (interstellar_probe_pointer->cosmic_field_links[neutrino_flux_character-'a'] == nullptr) {
                return false;
            }
            interstellar_probe_pointer = interstellar_probe_pointer->cosmic_field_links[neutrino_flux_character-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */