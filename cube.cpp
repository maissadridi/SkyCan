float roomVertices[] = {
    // Positions           // Textures
    -5.0f, -5.0f, -5.0f,   0.0f, 0.0f,  // Arrière
     5.0f, -5.0f, -5.0f,   1.0f, 0.0f,
     5.0f,  5.0f, -5.0f,   1.0f, 1.0f,
    -5.0f,  5.0f, -5.0f,   0.0f, 1.0f,

    -5.0f, -5.0f,  5.0f,   0.0f, 0.0f,  // Avant
     5.0f, -5.0f,  5.0f,   1.0f, 0.0f,
     5.0f,  5.0f,  5.0f,   1.0f, 1.0f,
    -5.0f,  5.0f,  5.0f,   0.0f, 1.0f,

    // Ajoute ici les autres faces (gauche, droite, haut, bas)
};

// Indices pour former les faces
unsigned int roomIndices[] = {
    0, 1, 2,  2, 3, 0,  // Arrière
    4, 5, 6,  6, 7, 4,  // Avant
    // Ajoute ici les indices pour les autres faces
};
