TARGET := `grep --include \*.cpp -Er 'main\s*\(' * | cut -d':' -f1 | sed -e 's/.cpp/.exe/g' | uniq`
CXXFLAGS := -Wall -Wextra -ggdb

build: *.cpp
	g++ $(CXXFLAGS) $< -o $(TARGET)

clean:
	rm *.exe
