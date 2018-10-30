
APP=puzzle
SRC=test.c

all: $(APP)

$(APP): $(SRC)
	vc +kick13 -cpu=68000 -O1 -c99 -I${NDK_INC} $(SRC) -lamiga -lauto -o $(APP)



