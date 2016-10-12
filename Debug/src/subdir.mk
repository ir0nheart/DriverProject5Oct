################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DriverProject5Oct.cpp \
../src/Person.cpp \
../src/Student.cpp \
../src/Timer.cpp 

OBJS += \
./src/DriverProject5Oct.o \
./src/Person.o \
./src/Student.o \
./src/Timer.o 

CPP_DEPS += \
./src/DriverProject5Oct.d \
./src/Person.d \
./src/Student.d \
./src/Timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/DriverProject5Oct.o: ../src/DriverProject5Oct.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"src/DriverProject5Oct.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


