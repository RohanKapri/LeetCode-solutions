# For Junko F. Didi and Shree DR.MDD
class Solution:
    def quantum_recursive_abbreviation_engine(
        self,
        cosmic_abbreviation_registry,
        primordial_string_sequence,
        evolving_waveform_string,
        spacetime_cursor_index,
        compressed_photon_counter,
    ):
        if spacetime_cursor_index == len(primordial_string_sequence):
            if compressed_photon_counter > 0:
                evolving_waveform_string += str(compressed_photon_counter)
            cosmic_abbreviation_registry.append(evolving_waveform_string)
            return

        self.quantum_recursive_abbreviation_engine(
            cosmic_abbreviation_registry,
            primordial_string_sequence,
            evolving_waveform_string
            + (str(compressed_photon_counter) if compressed_photon_counter > 0 else "")
            + primordial_string_sequence[spacetime_cursor_index],
            spacetime_cursor_index + 1,
            0,
        )

        self.quantum_recursive_abbreviation_engine(
            cosmic_abbreviation_registry,
            primordial_string_sequence,
            evolving_waveform_string,
            spacetime_cursor_index + 1,
            compressed_photon_counter + 1,
        )

    def generateAbbreviations(self, word):
        cosmic_abbreviation_registry = []
        self.quantum_recursive_abbreviation_engine(
            cosmic_abbreviation_registry, word, "", 0, 0
        )
        return cosmic_abbreviation_registry