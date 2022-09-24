target := out.x
main:
	g++ -std=c++20 main.cc -o ${target}

clean:
	rm -f ${target}