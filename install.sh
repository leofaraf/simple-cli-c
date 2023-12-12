GREEN='\033[1;32m'
NC='\033[0m'

sudo printf "${GREEN}Sudo has accessed. Installing...${NC}\n"

echo "Initialization"
if command -v gcc /dev/null;
then
    gcc --version
else
    echo "gcc hasn't installed!"
    exit 1
fi
echo Building
gcc main.c -o simple-cli-c
echo Linking
sudo mv ./simple-cli-c /bin/
export PATH="/bin:$PATH"
printf "${GREEN}Complite!${NC}\n"