TARGET="output.exe"

all:
	gcc main.c -o $(TARGET)

generate_gitignore:
	@if [ -f .gitignore ]; then \
		echo ".gitignore already exists. Skipping."; \
	else \
		echo "# Auto-generated .gitignore" > .gitignore; \
		echo "$(TARGET)" >> .gitignore; \
	fi

run: all generate_gitignore
	chmod 777 $(TARGET)
	./$(TARGET)

clean:
	rm $(TARGET)
