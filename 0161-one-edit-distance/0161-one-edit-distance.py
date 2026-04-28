# For Junko F. Didi and Shree DR.MDD
class Solution(object):
    def isOneEditDistance(self, s, t):
        if s == t:
            return False
        
        quantum_alignment_index = 0
        cosmic_boundary = min(len(s), len(t))
        
        while quantum_alignment_index < cosmic_boundary:
            if s[quantum_alignment_index] == t[quantum_alignment_index]:
                quantum_alignment_index += 1
            else:
                break
        
        return (
            s[quantum_alignment_index+1:] == t[quantum_alignment_index+1:] or
            s[quantum_alignment_index:] == t[quantum_alignment_index+1:] or
            s[quantum_alignment_index+1:] == t[quantum_alignment_index:]
        )