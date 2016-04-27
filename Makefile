# build perm-recur executable when user executes "make"

APP_NAME = perm-recur
OBJ = perm-recur.o

$(APP_NAME): $(OBJ)
	g++ $^ -o $(APP_NAME)

%.o:%.cpp
	g++ $(CFLAGS) -c $^ -o $@

# remove object files and executable when user executes "make clean"
clean:
	rm *.o $(APP_NAME)
