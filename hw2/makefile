SHELL = /bin/sh


.SUFFIXES:
.SUFFIXES: .cpp .o


SRCDIR = ./src/
INCLUDEDIR = ./include/
BINDIR = ./bin/

INCLUDES = -I$(INCLUDEDIR)
OPENCV = -L/usr/lib -I/usr/include/opencv -lopencv_core -lopencv_highgui -lopencv_imgproc
IMAGES = $(BINDIR)ImageLoader.o $(BINDIR)ImageOperations.o

CC = g++
CPPFLAGS = -Wall -Weffc++ -g $(INCLUDES)


all: $(IMAGES) $(INCLUDEDIR)consts.h $(BINDIR)util.o $(BINDIR)Student.o $(BINDIR)CsStudent.o $(BINDIR)PgStudent.o $(BINDIR)Course.o $(BINDIR)CsCourse.o $(BINDIR)PgCourse.o $(BINDIR)ElCourse.o $(BINDIR)Uni.o $(BINDIR)RandomU.o
	@echo -n 'Building target all: '
	$(CC) $(CPPFLAGS) -o $(BINDIR)RandomU $(IMAGES) $(BINDIR)util.o $(BINDIR)Student.o $(BINDIR)CsStudent.o $(BINDIR)PgStudent.o $(BINDIR)Course.o $(BINDIR)CsCourse.o $(BINDIR)PgCourse.o $(BINDIR)ElCourse.o $(BINDIR)Uni.o $(BINDIR)RandomU.o $(OPENCV)



$(BINDIR)RandomU.o: $(SRCDIR)RandomU.cpp $(BINDIR)Uni.o
	@echo -n 'Building target RandomU.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)RandomU.o $(SRCDIR)RandomU.cpp


$(BINDIR)util.o: $(SRCDIR)util.cpp $(INCLUDEDIR)util.h $(INCLUDEDIR)consts.h
	@echo -n 'Building target util.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)util.o $(SRCDIR)util.cpp


$(BINDIR)Uni.o: $(SRCDIR)Uni.cpp $(INCLUDEDIR)Uni.h $(IMAGES) $(INCLUDEDIR)consts.h $(BINDIR)util.o $(BINDIR)Student.o $(BINDIR)CsStudent.o $(BINDIR)PgStudent.o $(BINDIR)Course.o $(BINDIR)CsCourse.o $(BINDIR)PgCourse.o $(BINDIR)ElCourse.o
	@echo -n 'Building target Uni.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)Uni.o $(SRCDIR)Uni.cpp


$(BINDIR)ImageLoader.o: $(SRCDIR)ImageLoader.cpp $(INCLUDEDIR)ImageLoader.h
	@echo -n 'Building ImageLoader.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)ImageLoader.o $(SRCDIR)ImageLoader.cpp

$(BINDIR)ImageOperations.o: $(SRCDIR)ImageOperations.cpp $(INCLUDEDIR)ImageOperations.h
	@echo -n 'Building target ImageOperations.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)ImageOperations.o $(SRCDIR)ImageOperations.cpp


$(BINDIR)CsStudent.o: $(SRCDIR)CsStudent.cpp $(INCLUDEDIR)CsStudent.h $(INCLUDEDIR)consts.h $(BINDIR)util.o $(BINDIR)Student.o
	@echo -n 'Building target CsStudent.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)CsStudent.o $(SRCDIR)CsStudent.cpp

$(BINDIR)PgStudent.o: $(SRCDIR)PgStudent.cpp $(INCLUDEDIR)PgStudent.h $(INCLUDEDIR)consts.h $(BINDIR)util.o $(BINDIR)Student.o
	@echo -n 'Building target PgStudent.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)PgStudent.o $(SRCDIR)PgStudent.cpp

$(BINDIR)Student.o: $(SRCDIR)Student.cpp $(INCLUDEDIR)Student.h $(INCLUDEDIR)consts.h
	@echo -n 'Building target Student.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)Student.o $(SRCDIR)Student.cpp


$(BINDIR)CsCourse.o: $(SRCDIR)CsCourse.cpp $(INCLUDEDIR)CsCourse.h $(INCLUDEDIR)consts.h $(BINDIR)util.o $(BINDIR)Course.o 
	@echo -n 'Building target CsCourse.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)CsCourse.o $(SRCDIR)CsCourse.cpp

$(BINDIR)PgCourse.o: $(SRCDIR)PgCourse.cpp $(INCLUDEDIR)PgCourse.h $(INCLUDEDIR)consts.h $(BINDIR)util.o $(BINDIR)Course.o 
	@echo -n 'Building target PgCourse.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)PgCourse.o $(SRCDIR)PgCourse.cpp

$(BINDIR)ElCourse.o: $(SRCDIR)ElCourse.cpp $(INCLUDEDIR)ElCourse.h $(INCLUDEDIR)consts.h $(BINDIR)util.o $(BINDIR)Course.o 
	@echo -n 'Building target ElCourse.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)ElCourse.o $(SRCDIR)ElCourse.cpp

$(BINDIR)Course.o: $(SRCDIR)Course.cpp $(INCLUDEDIR)Course.h $(INCLUDEDIR)consts.h
	@echo -n 'Building target Course.o: '
	$(CC) -c $(CPPFLAGS) -o $(BINDIR)Course.o $(SRCDIR)Course.cpp


.PHONY: clean
clean:
	@echo -n 'Cleaning $(BINDIR): '
	rm -f $(BINDIR)*.jpg $(BINDIR)*.o $(BINDIR)RandomU $(BINDIR)random.log
