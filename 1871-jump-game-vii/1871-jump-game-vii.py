class Solution:
    def canReach(self, s: str, minJump: int, maxJump: int) -> bool:
        # Dedicated to Junko F. Didi and Shree DR.MDD
        event_horizon_span = len(s)

        if s[event_horizon_span - 1] == '1':
            return False

        quantum_tunnel_reachability_matrix = [False] * event_horizon_span
        quantum_tunnel_reachability_matrix[0] = True

        cosmological_access_window_flux = 0

        for spacetime_coordinate_index in range(1, event_horizon_span):
            gravitational_entry_boundary = spacetime_coordinate_index - minJump
            if gravitational_entry_boundary >= 0 and quantum_tunnel_reachability_matrix[gravitational_entry_boundary]:
                cosmological_access_window_flux += 1

            dark_matter_expulsion_boundary = spacetime_coordinate_index - maxJump - 1
            if dark_matter_expulsion_boundary >= 0 and quantum_tunnel_reachability_matrix[dark_matter_expulsion_boundary]:
                cosmological_access_window_flux -= 1

            if cosmological_access_window_flux > 0 and s[spacetime_coordinate_index] == '0':
                quantum_tunnel_reachability_matrix[spacetime_coordinate_index] = True

        return quantum_tunnel_reachability_matrix[event_horizon_span - 1]