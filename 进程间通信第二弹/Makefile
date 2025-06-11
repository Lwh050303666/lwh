.PHONY:all
all:server client
client:client.cc
	g++ -o $@ $^ -g -std=c++11
server:server.cc
	g++ -o $@ $^ -g -std=c++11
.PHONY:clean
clean:
	rm -f server client