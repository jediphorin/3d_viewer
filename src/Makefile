CC = gcc
PROJECT_NAME = 3d_viewer

#	DIRECTORIES
BUILD = ./../bin
DIST_DIR = ./../dist
DVI_DIR = ./../docs
GUI_DIR = ./gui
MODULES_DIR = ./modules
OBJ_DIR = ./obj
REPORT_DIR = ./report
TEST_DIR = ./test_dir

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(REPORT_DIR):
	@mkdir -p $(REPORT_DIR)

#	FLAGS
C_FLAGS = -Wall -Werror -Wextra -std=c11 -g
GCOV_FLAGS = -fprofile-arcs -ftest-coverage -lgcov $(LD_FLAGS)
LD_FLAGS = -lcheck -lsubunit -lm
CPPCHECK_FLAGS = --enable=all --suppress=missingIncludeSystem
VALGRIND_FLAGS = --tool=memcheck --leak-check=yes

LIBRARY = $(PROJECT_NAME).a
GCOV = gcov_report
TARGET = tests

#	C-H-O FILES AND PATHES
MAIN_H = $(shell find ./ -maxdepth 1 -name "*.h")

MODULES_DIRS = $(shell find $(MODULES_DIR) -type d)
MODULES_C = $(shell find $(MODULES_DIR) -type f -name "*.c")
MODULES_H = $(shell find $(MODULES_DIR) -type f -name "*.h")
MODULES_O = $(notdir $(MODULES_C:%.c=%.o))
MODULES_OBJ_PATH = $(addprefix $(OBJ_DIR)/, $(MODULES_O))

GUI_MODULES = $(shell find $(GUI_DIR) -type f -name "*.cpp")
GUI_HEADERS = $(shell find $(GUI_DIR) -type f -name "*.h")

TEST_DIRS = $(shell find $(TEST_DIR) -type d)
TEST_C = $(shell find $(TEST_DIR) -type f -name "*.c")
TEST_H = $(shell find $(TEST_DIR) -type f -name "*.h")
TEST_O = $(notdir $(TEST_C:%.c=%.o))
TEST_OBJ_PATH = $(addprefix $(OBJ_DIR)/, $(TEST_O))

%.o: %.c $(MODULES_H)
	@$(CC) $(C_FLAGS) -c -o $(addprefix $(OBJ_DIR)/, $@) $<

%_test.o: %_test.c
	@$(CC) $(C_FLAGS) -c -o $(addprefix $(OBJ_DIR)/, $@) $<

vpath %.c $(MODULES_DIRS) : $(GUI_DIRS) : $(TEST_DIRS)
vpath %.o $(OBJ_DIR)

#	CPP & CLANG FILES
C_FILES = $(MODULES_C) $(TEST_C)
H_FILES = $(MODULES_H) $(MAIN_H) $(TEST_H)
ALL_FILES = $(C_FILES) $(GUI_MODULES) $(H_FILES)

#	TAR9ET5
.PHONY: $(LIBRARY) $(TARGET) $(GCOV)

all: install run

install: $(LIBRARY)
	@mkdir -p $(BUILD)
	cd $(BUILD) && cmake ./../src && make	

uninstall: clean
	rm -rf $(BUILD)

$(LIBRARY): $(OBJ_DIR) $(MODULES_O) $(MODULES_H) $(MAIN_H)
	@ar rcs $@ $(MODULES_OBJ_PATH)
	@ranlib $@

$(TARGET): $(LIBRARY) $(TEST_O)
	@$(CC) $(TEST_OBJ_PATH) $(LIBRARY) $(LD_FLAGS) -o $@
	@-./$@

REPORT_FILE = $(REPORT_DIR)/coverage.html

$(GCOV): $(REPORT_DIR) $(LIBRARY) $(TEST_O)
	$(CC) $(TEST_OBJ_PATH) $(MODULES_C) $(GCOV_FLAGS) -o $(addprefix $(OBJ_DIR)/, $(TARGET))
	./$(addprefix $(OBJ_DIR)/, $(TARGET))
	gcovr -r . --html --html-details -o $(REPORT_FILE)
	xdg-open $(REPORT_FILE)

DVI_FILE = $(DVI_DIR)/html/index.html

dvi:
	rm -rf $(DVI_DIR)
	doxygen Doxyfile
	xdg-open $(DVI_FILE)

dist: uninstall
	@rm -rf $(DIST_DIR)
	@echo "The process of creating the distribution has started..."
	@mkdir -p $(DIST_DIR)/$(PROJECT_NAME)
	@cp -r ./ $(DIST_DIR)/$(PROJECT_NAME) && rm -rf $(DIST_DIR)/$(PROJECT_NAME)/$(TEST_DIR)
	@echo "The process of archiving the distribution has started..."
	@tar -czf $(DIST_DIR)/$(PROJECT_NAME).tar.gz -C $(DIST_DIR) $(PROJECT_NAME)
	@echo "\033[31mThe distribution archive has been created: $(DIST_DIR)/$(PROJECT_NAME).tar.gz\033[0m"
	@rm -rf $(DIST_DIR)/$(PROJECT_NAME)

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(REPORT_DIR)
	rm -rf $(DVI_DIR)
	rm -rf $(DIST_DIR)
	rm -rf $(GCOV)
	rm -rf ../build*
	rm -rf build*
	rm -rf ~/.config/3DViewer
	rm -f $(TARGET)
	rm -f ./CMake*.user
	rm -f *.a *.o
	rm -f *.gc*
	rm -f main

rebuild: uninstall install

rerun: uninstall all
retest: rebuild tests
regcov: rebuild gcov_report

run:
	@./$(BUILD)/$(PROJECT_NAME)

dependencies:
	sudo apt-get install check clang-format cmake cppcheck doxygen graphviz libqt5opengl5-dev qtbase5-dev

#	CHECKS
clang_format_check:
	clang-format -style=Google -n $(ALL_FILES)

cppcheck:
	$@ $(CPPCHECK_FLAGS) $(MODULES_C) $(MODULES_H)

valgrind_check: $(TARGET)
	@printf '\n\033[1;33m\nVALGRIND\033[0m\n'

	@$@ $(VALGRIND_FLAGS) ./$(TARGET) > val.txt 2>&1 && \
	{ \
		printf "Results:\n"; \
		printf "Passed tests $$(grep "ERROR SUMMARY: 0" -c val.txt) from $$(grep "ERROR SUMMARY:" -c val.txt)\n"; \
	}

clang_format_fix:
	clang-format -style=Google -i $(ALL_FILES)
