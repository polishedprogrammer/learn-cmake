APP:=helloworld

all: $(APP)

$(APP): main.cpp
	$(CXX) -o $@ $^

install: helloworld
	install -m 755 /usr/bin/helloworld
