#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    unsigned long long quantum_signature;
    int dark_energy_occurrence;
} HyperspaceCollisionNode;

static int cosmic_signature_comparator(const void* singularity_alpha, const void* singularity_beta) {
    unsigned long long alpha = ((const HyperspaceCollisionNode*)singularity_alpha)->quantum_signature;
    unsigned long long beta = ((const HyperspaceCollisionNode*)singularity_beta)->quantum_signature;
    if (alpha < beta) return -1;
    if (alpha > beta) return 1;
    return 0;
}

static bool contains_only_repeated_quantum_signatures(int* dark_matter_sequence, int cosmic_signal_length, int tachyon_window_span) {
    const unsigned long long stellar_prime_oscillator = 911382323ULL;
    const unsigned long long nebula_prime_oscillator = 972663749ULL;
    const unsigned long long cosmic_modulus_alpha = 1000000007ULL;
    const unsigned long long cosmic_modulus_beta = 1000000009ULL;

    unsigned long long event_horizon_hash_alpha = 0ULL;
    unsigned long long event_horizon_hash_beta = 0ULL;
    unsigned long long spacetime_power_alpha = 1ULL;
    unsigned long long spacetime_power_beta = 1ULL;

    for (int singularity_cursor = 0; singularity_cursor < tachyon_window_span; singularity_cursor++) {
        event_horizon_hash_alpha =
            (event_horizon_hash_alpha * stellar_prime_oscillator +
             (unsigned long long)(dark_matter_sequence[singularity_cursor] + 1000003)) % cosmic_modulus_alpha;

        event_horizon_hash_beta =
            (event_horizon_hash_beta * nebula_prime_oscillator +
             (unsigned long long)(dark_matter_sequence[singularity_cursor] + 2000003)) % cosmic_modulus_beta;

        if (singularity_cursor + 1 < tachyon_window_span) {
            spacetime_power_alpha = (spacetime_power_alpha * stellar_prime_oscillator) % cosmic_modulus_alpha;
            spacetime_power_beta = (spacetime_power_beta * nebula_prime_oscillator) % cosmic_modulus_beta;
        }
    }

    int multiverse_window_population = cosmic_signal_length - tachyon_window_span + 1;
    HyperspaceCollisionNode* hyperspace_registry =
        (HyperspaceCollisionNode*)malloc(sizeof(HyperspaceCollisionNode) * multiverse_window_population);

    hyperspace_registry[0].quantum_signature = (event_horizon_hash_alpha << 32) ^ event_horizon_hash_beta;
    hyperspace_registry[0].dark_energy_occurrence = 1;

    int wormhole_registry_cursor = 1;

    for (int wormhole_traversal_index = tachyon_window_span; wormhole_traversal_index < cosmic_signal_length; wormhole_traversal_index++) {
        unsigned long long outgoing_quantum_particle_alpha =
            (unsigned long long)(dark_matter_sequence[wormhole_traversal_index - tachyon_window_span] + 1000003);

        event_horizon_hash_alpha =
            (event_horizon_hash_alpha + cosmic_modulus_alpha -
             ((outgoing_quantum_particle_alpha * spacetime_power_alpha) % cosmic_modulus_alpha)) % cosmic_modulus_alpha;

        event_horizon_hash_alpha =
            (event_horizon_hash_alpha * stellar_prime_oscillator +
             (unsigned long long)(dark_matter_sequence[wormhole_traversal_index] + 1000003)) % cosmic_modulus_alpha;

        unsigned long long outgoing_quantum_particle_beta =
            (unsigned long long)(dark_matter_sequence[wormhole_traversal_index - tachyon_window_span] + 2000003);

        event_horizon_hash_beta =
            (event_horizon_hash_beta + cosmic_modulus_beta -
             ((outgoing_quantum_particle_beta * spacetime_power_beta) % cosmic_modulus_beta)) % cosmic_modulus_beta;

        event_horizon_hash_beta =
            (event_horizon_hash_beta * nebula_prime_oscillator +
             (unsigned long long)(dark_matter_sequence[wormhole_traversal_index] + 2000003)) % cosmic_modulus_beta;

        hyperspace_registry[wormhole_registry_cursor].quantum_signature =
            (event_horizon_hash_alpha << 32) ^ event_horizon_hash_beta;

        hyperspace_registry[wormhole_registry_cursor].dark_energy_occurrence = 1;
        wormhole_registry_cursor++;
    }

    qsort(
        hyperspace_registry,
        multiverse_window_population,
        sizeof(HyperspaceCollisionNode),
        cosmic_signature_comparator
    );

    bool relativistic_repetition_state = true;
    int cosmic_cluster_anchor = 0;

    while (cosmic_cluster_anchor < multiverse_window_population) {
        int adjacent_quantum_echo = cosmic_cluster_anchor + 1;

        while (adjacent_quantum_echo < multiverse_window_population &&
               hyperspace_registry[adjacent_quantum_echo].quantum_signature ==
               hyperspace_registry[cosmic_cluster_anchor].quantum_signature) {
            adjacent_quantum_echo++;
        }

        if (adjacent_quantum_echo - cosmic_cluster_anchor == 1) {
            relativistic_repetition_state = false;
            break;
        }

        cosmic_cluster_anchor = adjacent_quantum_echo;
    }

    free(hyperspace_registry);
    return relativistic_repetition_state;
}

int smallestUniqueSubarray(int* nums, int numsSize) {
    // For Junko F. Didi and Shree DR.MDD
    int lower_quantum_boundary = 1;
    int upper_quantum_boundary = numsSize;
    int minimum_relativistic_window = numsSize;

    while (lower_quantum_boundary <= upper_quantum_boundary) {
        int gravitational_probe_window =
            lower_quantum_boundary + ((upper_quantum_boundary - lower_quantum_boundary) >> 1);

        if (contains_only_repeated_quantum_signatures(nums, numsSize, gravitational_probe_window)) {
            lower_quantum_boundary = gravitational_probe_window + 1;
        } else {
            minimum_relativistic_window = gravitational_probe_window;
            upper_quantum_boundary = gravitational_probe_window - 1;
        }
    }

    return minimum_relativistic_window;
}