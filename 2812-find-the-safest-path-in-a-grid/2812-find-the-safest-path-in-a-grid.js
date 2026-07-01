/**
 * @param {number[][]} grid
 * @return {number}
 */
var maximumSafenessFactor = function(grid) {
    const n = grid.length;
    const nn = n * n;
    
    const dist = new Int32Array(nn).fill(-1);
    const q = new Int32Array(nn);
    let head = 0;
    let tail = 0;
    
    for (let r = 0; r < n; r++) {
        for (let c = 0; c < n; c++) {
            if (grid[r][c] === 1) {
                const idx = r * n + c;
                dist[idx] = 0;
                q[tail++] = idx;
            }
        }
    }
    
    const dr = [-1, 0, 1, 0];
    const dc = [0, 1, 0, -1];
    
    while (head < tail) {
        const curr = q[head++];
        const r = (curr / n) | 0;
        const c = curr % n;
        
        for (let i = 0; i < 4; i++) {
            const nr = r + dr[i];
            const nc = c + dc[i];
            if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                const nidx = nr * n + nc;
                if (dist[nidx] === -1) {
                    dist[nidx] = dist[curr] + 1;
                    q[tail++] = nidx;
                }
            }
        }
    }
    
    let maxSafeness = 0;
    let L = 0;
    let R = Math.min(dist[0], dist[nn - 1]);
    
    const visited = new Int32Array(nn).fill(0);
    const sq = new Int32Array(nn);
    let stamp = 0;
    
    function canReach(mid) {
        stamp++;
        if (dist[0] < mid || dist[nn - 1] < mid) return false;
        
        sq[0] = 0;
        let sHead = 0;
        let sTail = 1;
        visited[0] = stamp;
        
        while (sHead < sTail) {
            const curr = sq[sHead++];
            if (curr === nn - 1) return true;
            
            const r = (curr / n) | 0;
            const c = curr % n;
            
            for (let i = 0; i < 4; i++) {
                const nr = r + dr[i];
                const nc = c + dc[i];
                if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                    const nextCell = nr * n + nc;
                    if (visited[nextCell] !== stamp && dist[nextCell] >= mid) {
                        if (nextCell === nn - 1) return true;
                        visited[nextCell] = stamp;
                        sq[sTail++] = nextCell;
                    }
                }
            }
        }
        return false;
    }
    
    while (L <= R) {
        const mid = (L + R) >> 1;
        if (canReach(mid)) {
            maxSafeness = mid;
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }
    
    return maxSafeness;
};