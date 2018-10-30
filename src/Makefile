
APP=puzzle
SRC=test.c

NDK_PATH=$(echo $NDK_INC)

all: $(APP)

$(APP): $(SRC)
	vc +kick13 -cpu=68000 -O4 -c99 -I${NDK_INC} $(SRC) -lamiga -lauto -o $(APP)



