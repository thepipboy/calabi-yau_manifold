#define pai 3.14159
#define Euler 2.71828

inline void CubeVertex() {
    const a[3] = {-1, -1, -1};
    const b[3] = {-1, 1, -1};
    const c[3] = {-1, -1, 1};
    const d[3] = {1, -1, -1};
    const e[3] = {-1, 1, 1};
    const f[3] = {1, -1, 1};
    const g[3] = {1, 1, -1};
    const h[3] = {1, 1, 1};
}

void SphereCoodinateBlock() {
    double A[3], B[3], C[3], D[3], E[3], F[3], G[3], H[3];
    double I[3], J[3], K[3], L[3], M[3], N[3], O[3], P[3], Q[3], R[3], S[3], T[3], U[3], V[3], W[3], X[3], Y[3], Z[3];
    double theta, phi;
    double sqrt3 = sqrt(3.0);

    theta = atan2(-1, -1);
    if (theta < 0) theta += 2 * pai;
    phi = acos(-1 / sqrt3);
    A[0] = Euler; A[1] = theta; A[2] = phi;

    theta = atan2(1, -1);
    if (theta < 0) theta += 2 * pai;
    phi = acos(-1 / sqrt3);
    B[0] = Euler; B[1] = theta; B[2] = phi;

    theta = atan2(-1, -1);
    if (theta < 0) theta += 2 * pai;
    phi = acos(1 / sqrt3);
    C[0] = Euler; C[1] = theta; C[2] = phi;

    // D from vertex d [1, -1, -1]
    theta = atan2(-1, 1);
    if (theta < 0) theta += 2 * pai;
    phi = acos(-1 / sqrt3);
    D[0] = Euler; D[1] = theta; D[2] = phi;

    theta = atan2(1, -1);
    if (theta < 0) theta += 2 * pai;
    phi = acos(1 / sqrt3);
    E[0] = Euler; E[1] = theta; E[2] = phi;

    theta = atan2(-1, 1);
    if (theta < 0) theta += 2 * pai;
    phi = acos(1 / sqrt3);
    F[0] = Euler; F[1] = theta; F[2] = phi;

    theta = atan2(1, 1);
    if (theta < 0) theta += 2 * pai;
    phi = acos(-1 / sqrt3);
    G[0] = Euler; G[1] = theta; G[2] = phi;

    theta = atan2(1, 1);
    if (theta < 0) theta += 2 * pai;
    phi = acos(1 / sqrt3);
    H[0] = Euler; H[1] = theta; H[2] = phi;

    int n = 18;
    for (int i = 0; i < n; i++) {
        double* letter;
        switch (i) {
            case 0: letter = I; break;
            case 1: letter = J; break;
            case 2: letter = K; break;
            case 3: letter = L; break;
            case 4: letter = M; break;
            case 5: letter = N; break;
            case 6: letter = O; break;
            case 7: letter = P; break;
            case 8: letter = Q; break;
            case 9: letter = R; break;
            case 10: letter = S; break;
            case 11: letter = T; break;
            case 12: letter = U; break;
            case 13: letter = V; break;
            case 14: letter = W; break;
            case 15: letter = X; break;
            case 16: letter = Y; break;
            case 17: letter = Z; break;
        }
        letter[0] = Euler;
        letter[1] = 2 * pai * i / n;
        letter[2] = acos(1 - 2 * (i + 0.5) / n);
    }
}
