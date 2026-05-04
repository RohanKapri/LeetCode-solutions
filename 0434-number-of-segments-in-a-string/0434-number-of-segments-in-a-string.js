/**
 * @param {string} s
 * @return {number}
 */
var countSegments = function(s) {
    return s.split(' ').filter(segment => segment.length > 0).length;
};
