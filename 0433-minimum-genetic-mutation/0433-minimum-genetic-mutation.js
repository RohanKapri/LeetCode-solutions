/**
 * @param {string} startGene
 * @param {string} endGene
 * @param {string[]} bank
 * @return {number}
 */
var minMutation = function(startGene, endGene, bank) {
    if (!bank.includes(endGene)) return -1;
    const queue = [[startGene, 0]];
    const seen = new Set([startGene]);
    const genes = ['A', 'C', 'G', 'T'];

    while (queue.length > 0) {
        const [current, mutations] = queue.shift();
        if (current === endGene) return mutations;

        for (let i = 0; i < current.length; i++) {
            for (const gene of genes) {
                const mutated = current.slice(0, i) + gene + current.slice(i + 1);
                if (bank.includes(mutated) && !seen.has(mutated)) {
                    seen.add(mutated);
                    queue.push([mutated, mutations + 1]);
                }
            }
        }
    }

    return -1;
};
