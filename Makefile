compilador=gcc 
banderas=-Wall -g
bibliotecas=-lcjson
ejecutable=json_make

all: $(ejecutable)

$(ejecutable): L5_C35472.c 
	$(compilador) $(banderas) 1.c -o $(ejecutable) $(bibliotecas)

clean:
	rm -f $(ejecutable)
