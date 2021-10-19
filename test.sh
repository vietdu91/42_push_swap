#!/bin/bash

make re

echo "======================================================================================================="
echo "__    ____   ______ ____ __ ______   __ __ ___      ___ ___  ___  ______  ___ ______  __  ___ ________"
echo "||   ||      | || |||   (( \| || |   || ||// \\    //  // \\  ||\\//||||\\//||||   ||\ || //  ||   || \\"
echo "||   ||==      ||  ||==  \\    ||      \\ //||=||  (( ((   ))|| \/ |||| \/ ||||== ||\\||((   ||== ||_//"
echo "||__|||___     ||  ||___\_))  ||      \V/ || ||    \\__\\_// ||    ||||    ||||___|| \|| \\__||___|| \\"
echo "======================================================================================================="

echo "\nLes dieux, faisant un tri parmi les hommes, éliminent les pires et les meilleurs, ne laissant\n"
echo "vieillir que les rares mortels qui ont vécu sans haine et sans excès, pour qu'ils conduisent la génération suivante.\n"
echo "=======================================================================================================\n"

echo "=========== Test avec 0-2 ARG =========== \n\n"

echo "=== [1] doit afficher vide             =="
echo "=== [5][6][7] doivent afficher 'Error' ==\n"

echo "[1]   " && ARG=""; ./push_swap $ARG | ./checker_Mac $ARG
echo "[2]   \c" && ARG="1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[3]   \c" && ARG="1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[4]   \c" && ARG="2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[5]   \c" && ARG="0f 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[6]   \c" && ARG="0 1 2 3f"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[7]   \c" && ARG="coucou bebe"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[8]   \c" && ARG=""" 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[9]   \c" && ARG="1 2 3 """; ./push_swap $ARG | ./checker_Mac $ARG

echo "==============================================================================================\n\n"

echo "=========== Test avec 3 ARG =========== \n\n"

echo "[1]   \c" && ARG="1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[2]   \c" && ARG="1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[3]   \c" && ARG="2 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[4]   \c" && ARG="2 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[5]   \c" && ARG="3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[6]   \c" && ARG="3 1 2"; ./push_swap $ARG | ./checker_Mac $ARG

echo "==============================================================================================\n\n"

echo "=========== Test avec 4 ARG =========== \n\n"

echo "[1]   \c" && ARG="1 2 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[2]   \c" && ARG="1 2 3 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[3]   \c" && ARG="1 3 2 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[4]   \c" && ARG="1 3 4 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[5]   \c" && ARG="1 4 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[6]   \c" && ARG="1 4 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[7]   \c" && ARG="2 1 3 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[8]   \c" && ARG="2 1 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[9]   \c" && ARG="2 3 1 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[10]  \c" && ARG="2 3 4 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[11]  \c" && ARG="2 4 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[12]  \c" && ARG="2 4 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[13]  \c" && ARG="3 1 2 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[14]  \c" && ARG="3 1 4 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[15]  \c" && ARG="3 2 1 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[16]  \c" && ARG="3 2 4 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[17]  \c" && ARG="3 4 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[18]  \c" && ARG="3 4 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[19]  \c" && ARG="4 1 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[20]  \c" && ARG="4 1 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[21]  \c" && ARG="4 2 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[22]  \c" && ARG="4 2 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[23]  \c" && ARG="4 3 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[24]  \c" && ARG="4 3 2 1"; ./push_swap $ARG | ./checker_Mac $ARG

echo "==============================================================================================\n\n"

echo "=========== Test avec 5 ARG =========== \n\n"

echo "[1]   \c" && ARG="1 2 3 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[2]   \c" && ARG="1 2 3 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[3]   \c" && ARG="1 2 4 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[4]   \c" && ARG="1 2 4 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[5]   \c" && ARG="1 2 5 3 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[6]   \c" && ARG="1 2 5 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[7]   \c" && ARG="1 3 2 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[8]   \c" && ARG="1 3 2 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[9]   \c" && ARG="1 3 4 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[10]  \c" && ARG="1 3 4 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[11]  \c" && ARG="1 3 5 2 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[12]  \c" && ARG="1 3 5 4 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[13]  \c" && ARG="1 4 2 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[14]  \c" && ARG="1 4 2 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[15]  \c" && ARG="1 4 3 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[16]  \c" && ARG="1 4 3 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[17]  \c" && ARG="1 4 5 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[18]  \c" && ARG="1 4 5 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[19]  \c" && ARG="2 1 3 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[20]  \c" && ARG="2 1 3 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[21]  \c" && ARG="2 1 4 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[22]  \c" && ARG="2 1 4 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[23]  \c" && ARG="2 1 5 3 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[24]  \c" && ARG="2 1 5 4 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[25]  \c" && ARG="2 3 1 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[26]  \c" && ARG="2 3 1 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[27]  \c" && ARG="2 3 4 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[28]  \c" && ARG="2 3 4 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[29]  \c" && ARG="2 3 5 1 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[30]  \c" && ARG="2 3 5 4 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[31]  \c" && ARG="2 4 1 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[32]  \c" && ARG="2 4 1 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[33]  \c" && ARG="2 4 3 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[34]  \c" && ARG="2 4 3 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[35]  \c" && ARG="2 4 5 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[36]  \c" && ARG="2 4 5 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[37]  \c" && ARG="3 1 2 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[38]  \c" && ARG="3 1 2 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[39]  \c" && ARG="3 1 4 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[40]  \c" && ARG="3 1 4 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[41]  \c" && ARG="3 1 5 2 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[42]  \c" && ARG="3 1 5 4 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[43]  \c" && ARG="3 2 1 4 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[44]  \c" && ARG="3 2 1 5 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[45]  \c" && ARG="3 2 4 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[46]  \c" && ARG="3 2 4 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[47]  \c" && ARG="3 2 5 1 4"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[48]  \c" && ARG="3 2 5 4 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[49]  \c" && ARG="3 4 1 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[50]  \c" && ARG="3 4 1 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[51]  \c" && ARG="3 4 2 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[52]  \c" && ARG="3 4 2 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[53]  \c" && ARG="3 4 5 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[54]  \c" && ARG="3 4 5 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[55]  \c" && ARG="4 1 2 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[56]  \c" && ARG="4 1 2 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[57]  \c" && ARG="4 1 3 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[58]  \c" && ARG="4 1 3 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[59]  \c" && ARG="4 1 5 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[60]  \c" && ARG="4 1 5 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[61]  \c" && ARG="4 2 1 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[62]  \c" && ARG="4 2 1 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[63]  \c" && ARG="4 2 3 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[64]  \c" && ARG="4 2 3 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[65]  \c" && ARG="4 2 5 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[66]  \c" && ARG="4 2 5 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[67]  \c" && ARG="4 3 1 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[68]  \c" && ARG="4 3 1 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[69]  \c" && ARG="4 3 2 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[70]  \c" && ARG="4 3 2 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[71]  \c" && ARG="4 3 5 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[72]  \c" && ARG="4 3 5 2 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[73]  \c" && ARG="4 1 2 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[74]  \c" && ARG="4 1 2 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[75]  \c" && ARG="4 1 3 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[76]  \c" && ARG="4 1 3 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[77]  \c" && ARG="4 1 5 2 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[78]  \c" && ARG="4 1 5 3 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[79]  \c" && ARG="4 2 1 3 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[80]  \c" && ARG="4 2 1 5 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[81]  \c" && ARG="4 2 3 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[82]  \c" && ARG="4 2 3 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[83]  \c" && ARG="4 2 5 1 3"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[84]  \c" && ARG="4 2 5 3 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[85]  \c" && ARG="4 3 1 2 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[86]  \c" && ARG="4 3 1 5 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[87]  \c" && ARG="4 3 2 1 5"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[88]  \c" && ARG="4 3 2 5 1"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[89]  \c" && ARG="4 3 5 1 2"; ./push_swap $ARG | ./checker_Mac $ARG
echo "[90]  \c" && ARG="4 3 5 2 1"; ./push_swap $ARG | ./checker_Mac $ARG

echo "==============================================================================================\n\n"

echo "Bisous <3"
