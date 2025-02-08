# skyCan
## Description
Ce projet implémente un rendu 3D en OpenGL avec un skybox et un cube utilisant l'éclairage Phong. Il permet de manipuler l'éclairage et la caméra en temps réel grâce à ImGui.

## Fonctionnalités
- Affichage d'un skybox avec un cubemap
- Rendu d'un cube texturé avec éclairage Phong
- Contrôles interactifs via ImGui (position de la caméra, lumière, cube...)
- Gestion des textures 2D et cubemap
- Déplacement de la caméra avec le clavier et la souris

## Dépendances
- OpenGL (via GLAD et GLFW)
- GLM (pour la gestion des matrices et transformations)
- stb_image (pour le chargement des textures)
- ImGui (pour l'interface utilisateur)

## Installation
1. Assurez-vous d'avoir installé les bibliothèques requises :
   - GLAD
   - GLFW
   - GLM
   - stb_image
   - ImGui

2. Compilez le projet avec un compilateur prenant en charge OpenGL 3.3+ :
   ```sh
   g++ main.cpp -o OpenGLApp -lglfw -lGL -ldl -lX11 -lpthread -lXrandr -lXi
   ```

3. Exécutez le programme :
   ```sh
   ./OpenGLApp
   ```

## Contrôles
- **Clavier** :
  - `W`, `A`, `S`, `D` : Déplacement de la caméra
- **Souris** :
  - Mouvement : Rotation de la caméra
- **Interface ImGui** :
  - Ajuster la position de la lumière, la couleur, et la force des différents composants de l'éclairage
  - Modifier la position, l'échelle et la rotation du cube
  - Changer le mode de filtrage des textures

## Organisation du Code
- **Shaders** : Définition des shaders pour le skybox et le cube
- **Chargement des textures** : Chargement des textures 2D et cubemap
- **Gestion de la caméra** : Déplacement et orientation
- **ImGui** : Interface graphique pour interagir avec la scène
- **Rendu OpenGL** : Configuration des VAO, VBO et rendu des objets

## Auteurs
Développé par Maissa DRIDI / Mamarou DIALLO.

## Ressources
https://opengl.developpez.com/tutoriels/apprendre-opengl-4/?page=texture-cubique-cubemap
https://jaxry.github.io/panorama-to-cubemap/
https://github.com/VictorGordan/opengl-tutorials
https://www.youtube.com/watch?v=gfHRVPeGyF0
https://youtu.be/5NqmSE6KHE4?si=VPilqM4QqxC57iuy
https://www.youtube.com/watch?v=ElwclNhYW04

