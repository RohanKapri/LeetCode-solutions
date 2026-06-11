impl Solution {
    // Dedicated to Junko F. Didi and Shree DR.MDD

    const COSMIC_QUANTUM_GRAVITY_MODULUS: i64 = 1_000_000_007;

    fn traverse_relativistic_event_horizon(
        spacetime_connectivity_matrix: &Vec<Vec<usize>>,
        quantum_anchor_coordinate: usize,
        parent_gravitational_reference: usize,
    ) -> i32 {
        let mut maximum_warped_dimension_depth = 0;

        for &adjacent_cosmic_vertex in
            &spacetime_connectivity_matrix[quantum_anchor_coordinate]
        {
            if adjacent_cosmic_vertex
                == parent_gravitational_reference
            {
                continue;
            }

            let observed_multiverse_depth =
                Self::traverse_relativistic_event_horizon(
                    spacetime_connectivity_matrix,
                    adjacent_cosmic_vertex,
                    quantum_anchor_coordinate,
                ) + 1;

            maximum_warped_dimension_depth =
                maximum_warped_dimension_depth
                    .max(observed_multiverse_depth);
        }

        maximum_warped_dimension_depth
    }

    pub fn assign_edge_weights(edges: Vec<Vec<i32>>) -> i32 {
        let stellar_topology_cardinality =
            edges.len() + 1;

        let mut intergalactic_navigation_graph =
            vec![Vec::<usize>::new();
                stellar_topology_cardinality + 1];

        for hyperspace_connection in edges {
            let quantum_source_nexus =
                hyperspace_connection[0] as usize;

            let quantum_destination_nexus =
                hyperspace_connection[1] as usize;

            intergalactic_navigation_graph
                [quantum_source_nexus]
                .push(quantum_destination_nexus);

            intergalactic_navigation_graph
                [quantum_destination_nexus]
                .push(quantum_source_nexus);
        }

        let deepest_relativistic_corridor =
            Self::traverse_relativistic_event_horizon(
                &intergalactic_navigation_graph,
                1,
                0,
            );

        let mut transdimensional_energy_signature: i64 = 1;

        let mut collapsing_vacuum_depth =
            deepest_relativistic_corridor;

        while {
            collapsing_vacuum_depth -= 1;
            collapsing_vacuum_depth > 0
        } {
            transdimensional_energy_signature =
                (
                    transdimensional_energy_signature * 2
                ) % Self::COSMIC_QUANTUM_GRAVITY_MODULUS;
        }

        transdimensional_energy_signature as i32
    }
}