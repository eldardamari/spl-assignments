################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Course.cpp \
../src/CsCourse.cpp \
../src/CsStudent.cpp \
../src/Department.cpp \
../src/PgCourse.cpp \
../src/PgStudent.cpp \
../src/Student.cpp \
../src/Uni.cpp 

OBJS += \
./src/Course.o \
./src/CsCourse.o \
./src/CsStudent.o \
./src/Department.o \
./src/PgCourse.o \
./src/PgStudent.o \
./src/Student.o \
./src/Uni.o 

CPP_DEPS += \
./src/Course.d \
./src/CsCourse.d \
./src/CsStudent.d \
./src/Department.d \
./src/PgCourse.d \
./src/PgStudent.d \
./src/Student.d \
./src/Uni.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/eldar/Documents/spl-assignments/hw2/include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

