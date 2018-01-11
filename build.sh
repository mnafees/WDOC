#!/bin/bash

# color defines
GREEN='\033[0;32m'
RED='\033[0;31m'
CYAN='\033[0;36m'
NC='\033[0m'

#####################
#      Execute      #
#####################

echo "Running cpplint ..."
python cpplint.py main.cpp unique_ptr.h
if [[ $? != 0 ]]; then
    echo -e "${RED}cpplint found some errors. Fix them and try again.${NC}"
    exit 1
fi    
echo -e "${GREEN}cpplint returned no errors${NC}"
echo "Building ..."
make
if [[ $? != 0 ]]; then
    echo -e "${RED}There were build errors. Fix them and try again.${NC}"
    exit 1
fi
echo -e "${GREEN}Built succesfully${NC}\n"
echo -e "${CYAN}##################"
echo -e "# Program Output #"
echo -e "##################${NC}"
./run 
