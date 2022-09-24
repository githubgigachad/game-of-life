target := out.x
main:
	g++ -std=c++20 -I./inc main.cc -o ${target} -lz

clean:
	rm -f ${target}
